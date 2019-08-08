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
#include "covariance.h"
#include "deque"
#include "vector"
#include "config.h"

using namespace std;

#define DBG_OUTPUT_PORT Serial
#define debug_mode true
#define DBG_BAUD_RATE 115200
#define imuTopic "imu"
#define chatTopic "chatter"
#define chatdata "test123"
#define PUB_RATE 5  // Hz
#define BLINK_RATE 1 // Hz
unsigned int HISTORY_SIZE = 10; // covariance history
IPAddress rosIPAddress = IPAddress(rosipints);

static unsigned long lastBlink = 0;
static bool blinkState = false; // false = off

// Timer: Auxiliary variables
unsigned long now = millis();
unsigned long lastTrigger = 0;

sensor_msgs::Imu imuMessage;
geometry_msgs::Quaternion orientation;
vector<float> orientationCovarience(9);
vector<float> orientationVector(3);
deque<vector<float> > orientationHistory(HISTORY_SIZE, orientationVector);
geometry_msgs::Vector3 angularVelocity;
vector<float> angularVelocityCovarience(9);
vector<float> angularVelocityVector(3);
deque<vector<float> > angularVelocityHistory(HISTORY_SIZE, angularVelocityVector);
geometry_msgs::Vector3 linearAccel;
vector<float> linearAccelCovarience(9);
vector<float> linearAccelVector(3);
deque<vector<float> > linearAccelHistory(HISTORY_SIZE, linearAccelVector);
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
    return client.read();
  }

  // write data to the connection to ROS
  void write(uint8_t *data, int length)
  {
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

void getIMUData()
{
  // sensors_event_t event; 
  // IMU.getEvent(&event);
  imu::Quaternion orientation_quat = IMU.getQuat();
  imu::Vector<3> orientation_vector = IMU.getVector(Adafruit_BNO055::VECTOR_EULER);
  imu::Vector<3> linear_accel_vector = IMU.getVector(Adafruit_BNO055::VECTOR_LINEARACCEL);
  imu::Vector<3> angular_velocity_vector = IMU.getVector(Adafruit_BNO055::VECTOR_GYROSCOPE);
  imuMessage.header.stamp = current_time;
  //update data
  linearAccel.x = linear_accel_vector.x();
  linearAccel.y = linear_accel_vector.y();
  linearAccel.z = linear_accel_vector.z();
  linearAccelVector[0] = linearAccel.x;
  linearAccelVector[1] = linearAccel.y;
  linearAccelVector[2] = linearAccel.z;
  angularVelocity.x = angular_velocity_vector.x();
  angularVelocity.y = angular_velocity_vector.y();
  angularVelocity.z = angular_velocity_vector.z();
  angularVelocityVector[0] = linearAccel.x;
  angularVelocityVector[1] = linearAccel.y;
  angularVelocityVector[2] = linearAccel.z;
  orientation.w = orientation_quat.w();
  orientation.x = orientation_quat.x();
  orientation.y = orientation_quat.y();
  orientation.z = orientation_quat.z();
  orientationVector[0] = orientation_vector.x();
  orientationVector[1] = orientation_vector.y();
  orientationVector[2] = orientation_vector.z();
  linearAccelHistory.push_front(linearAccelVector);
  if (linearAccelHistory.size() > HISTORY_SIZE)
    linearAccelHistory.resize(HISTORY_SIZE);
  angularVelocityHistory.push_front(angularVelocityVector);
  if (angularVelocityHistory.size() > HISTORY_SIZE)
    angularVelocityHistory.resize(HISTORY_SIZE);
  orientationHistory.push_front(orientationVector);
  if (orientationHistory.size() > HISTORY_SIZE)
    orientationHistory.resize(HISTORY_SIZE);
  linearAccelCovarience = covariance(linearAccelHistory);
  angularVelocityCovarience = covariance(angularVelocityHistory);
  orientationCovarience = covariance(orientationHistory);
  imuMessage.linear_acceleration = linearAccel;
  imuMessage.orientation = orientation;
  imuMessage.angular_velocity = angularVelocity;
  for (unsigned int i = 0; i < linearAccelCovarience.size(); i++)
  {
    imuMessage.linear_acceleration_covariance[i] = linearAccelCovarience[i];
    imuMessage.angular_velocity_covariance[i] = angularVelocityCovarience[i];
    imuMessage.orientation_covariance[i] = orientationCovarience[i];
  }
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
