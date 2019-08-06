/**
 * IMU
 *
 * IMU sensor on ROS network
 */
#include <Arduino.h>
#include "ros.h"
#include "std_msgs/Empty.h"
#include "sensor_msgs/Imu.h"
#include "std_msgs/Float64.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Quaternion.h"
#include "geometry_msgs/Vector3.h"
#include "Adafruit_Sensor.h"
#include "Adafruit_BNO055.h"
#include "utility/imumaths.h"
#include "WiFi.h"
#include "ping.h"
#include "stdio.h"
#include "queue.h"
#include "config.h"

#define DBG_OUTPUT_PORT Serial
#define debug_mode true
#define DBG_BAUD_RATE 115200
#define imuTopic "imu"
#define chatTopic "chatter"
#define chatdata "test123"
#define PUB_RATE 50  // Hz
#define BLINK_RATE 1 // Hz
#define HISTORY_SIZE 10 // covariance history
IPAddress rosIPAddress = IPAddress(rosipints);

static unsigned long lastBlink = 0;
static bool blinkState = false; // false = off

// Timer: Auxiliary variables
unsigned long now = millis();
unsigned long lastTrigger = 0;

sensor_msgs::Imu imuMessage;
geometry_msgs::Quaternion orientation;
std_msgs::Float64 orientationCovarience[9];
Queue<float[3]> orientationHistory(HISTORY_SIZE);
geometry_msgs::Vector3 angularVelocity;
std_msgs::Float64 angularVelocityCovarience[9];
Queue<float[3]> angularVelocityHistory(HISTORY_SIZE);
geometry_msgs::Vector3 linearAccel;
std_msgs::Float64 linearAccelCovarience[9];
Queue<float[3]> linearAccelHistory(HISTORY_SIZE);
ros::Publisher imuPublisher(imuTopic, &imuMessage);
std_msgs::String chat_msg;
ros::Publisher chatter(chatTopic, &chat_msg);
Adafruit_BNO055 IMU = Adafruit_BNO055(55);
WiFiClient client;

class WiFiHardware
{

public:
  WiFiHardware(){};

  void init()
  {
    // do your initialization here. this probably includes TCP server/client setup
    while (!client.connect(rosIPAddress, rosPort))
    {
      if (debug_mode)
        DBG_OUTPUT_PORT.println("waiting for connection to ros");
      delay(500);
    }
  }

  // read a byte from the serial port. -1 = failure
  int read()
  {
    // implement this method so that it reads a byte from the TCP connection and returns it
    //  you may return -1 is there is an error; for example if the TCP connection is not open
    return client.read(); //will return -1 when it will works
  }

  // write data to the connection to ROS
  void write(uint8_t *data, int length)
  {
    // implement this so that it takes the arguments and writes or prints them to the TCP connection
    for (int i = 0; i < length; i++)
      client.write(data[i]);
  }

  // returns milliseconds since start of program
  unsigned long time()
  {
    return millis();
  }
};

ros::NodeHandle_<WiFiHardware> nh;
ros::Time current_time = nh.now();

void setupWiFi()
{
  WiFi.begin(ssid, password);
  if (debug_mode)
  {
    DBG_OUTPUT_PORT.print("\nConnecting to ");
    DBG_OUTPUT_PORT.println(ssid);
  }
  unsigned int wificount = 0;
  while (WiFi.status() != WL_CONNECTED)
  {
    wificount++;
    if (debug_mode)
    {
      DBG_OUTPUT_PORT.print("wifi connecting try ");
      DBG_OUTPUT_PORT.println(wificount);
    }
    delay(500);
  }
  if (debug_mode)
  {
    DBG_OUTPUT_PORT.print("Ready! Use ");
    DBG_OUTPUT_PORT.print(WiFi.localIP());
    DBG_OUTPUT_PORT.println(" to access client");
  }
  bool pingsuccess = false;
  while (!pingsuccess)
  {
    if (ping_start(rosIPAddress, 4, 0, 0, 5))
    {
      if (debug_mode)
        DBG_OUTPUT_PORT.println("ping ros master success");
      pingsuccess = true;
    }
    else
    {
      if (debug_mode)
        DBG_OUTPUT_PORT.println("ping ros master failed");
    }
  }
}

void setupIMU()
{
  if (!IMU.begin())
  {
    if (debug_mode)
      DBG_OUTPUT_PORT.println("Oops ... unable to initialize the BNO055 IMU. Check your wiring!");
    while (1)
      delay(500);
  }
  IMU.setExtCrystalUse(true);
  imuMessage.header.frame_id = imuTopic;
}

void setup()
{
  DBG_OUTPUT_PORT.begin(DBG_BAUD_RATE);
  delay(500);
  // start communication with IMU
  setupIMU();
  setupWiFi();
  delay(500);
  nh.initNode();
  nh.advertise(imuPublisher);
  if (debug_mode)
  {
    chat_msg.data = chatdata;
    nh.advertise(chatter);
  }
}

float mean(Queue arr[], int n)
{
  float sum = 0;
  for(int i = 0; i < n; i++)
    sum = sum + arr[i];
  return sum / n;
}

// Function to find covariance.
float covariance(Queue<float[3][3]> q1, float arr2[], int index, int count)
{
  float sum = 0;
  for(int i = 0; i < n; i++)
    sum = sum + (arr1[i] - mean(arr1, count)) *
                (arr2[i] - mean(arr2, count));
  return sum / (count - 1);
}

void getIMUData()
{
  sensors_event_t event; 
  IMU.getEvent(&event);
  imu::Quaternion orientation_quat = IMU.getQuat();
  imu::Vector<3> linear_accel_vector = bno.getVector(Adafruit_BNO055::VECTOR_LINEARACCEL);
  imu::Vector<3> angular_velocity_vector = bno.getVector(Adafruit_BNO055::VECTOR_GYROSCOPE);
  imuMessage.header.stamp = current_time;
  // DBG_OUTPUT_PORT.println(a.acceleration.x);
  //update data
  linearAccel.x = linear_accel_vector.x();
  linearAccel.y = linear_accel_vector.y();
  linearAccel.z = linear_accel_vector.z();
  angularVelocity.x = angular_velocity_vector.x();
  angularVelocity.y = angular_velocity_vector.y();
  angularVelocity.z = angular_velocity_vector.z();
  orientation.w = quat.w();
  orientation.x = quat.x();
  orientation.y = quat.y();
  orientation.z = quat.z();
  linearAccelHistory.push(&linearAccel);
  angularVelocityHistory.push(&angularVelocity);
  orientationHistory.push(&orientation);
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      linearAccelCovarience[3 * i + j].data = 0.0;
      angularVelocityCovarience[3 * i + j].data = 0.0;
      orientationCovarience[3 * i + j].data = covariance(orientationHistory, orientationHistory.count());
    }
  }
  imuMessage.linear_acceleration = linearAccel;
  imuMessage.orientation = orientation;
  imuMessage.angular_velocity = angularVelocity;
  imuMessage.covariance_linear_acceleration = linearAccelCovarience;
  imuMessage.covariance_angular_velocity = angularVelocityCovarience;
  imuMessage.covariance_orientation = orientationCovarience;
}

void loop()
{
  now = millis();
  if ((now - lastTrigger) > (1000 / PUB_RATE))
  {
    if (client.connected())
    {
      current_time = nh.now();
      getIMUData();
      if (debug_mode)
        DBG_OUTPUT_PORT.println("Publishing Data");
      lastTrigger = millis();
      imuPublisher.publish(&imuMessage);
      if (debug_mode)
        chatter.publish(&chat_msg);
      nh.spinOnce();
    }
    else
    {
      while (!client.connect(rosIPAddress, rosPort))
      {
        if (debug_mode)
          DBG_OUTPUT_PORT.printf("Waiting for ros connection\r\n");
        delay(500);
      }
    }
  }
  if (now - lastBlink > (1000 / BLINK_RATE))
  {
    lastBlink = now;
    blinkState = !blinkState;
    digitalWrite(LED_BUILTIN, blinkState);
  }
}
