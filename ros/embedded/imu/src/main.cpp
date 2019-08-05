/**
 * IMU
 *
 * IMU sensor on ROS network
 */
#include <Arduino.h>
#include "ping.h"
#include "Adafruit_LSM9DS1.h"
#include "Adafruit_Sensor.h"
#include "ros.h"
#include "std_msgs/Empty.h"
#include "sensor_msgs/Imu.h"
#include "std_msgs/Float64.h"
#include "std_msgs/String.h"
#include "WiFi.h"
#include "geometry_msgs/Quaternion.h"
#include "geometry_msgs/Vector3.h"
#include "stdio.h"
#include "config.h"

#define DBG_OUTPUT_PORT Serial
#define debug_mode true
#define DBG_BAUD_RATE 115200
#define imuTopic "imu"
#define chatTopic "chatter"
#define chatdata "test123"
#define PUB_RATE 50  // Hz
#define BLINK_RATE 1 // Hz
IPAddress rosIPAddress = IPAddress(rosipints);

static unsigned long lastBlink = 0;
static bool blinkState = false; // false = off

// Timer: Auxiliary variables
unsigned long now = millis();
unsigned long lastTrigger = 0;

sensor_msgs::Imu imuMessage;
geometry_msgs::Quaternion orientation;
std_msgs::Float64 orientationCovarience[9];
geometry_msgs::Vector3 angularAccel;
std_msgs::Float64 angularAccelCovarience[9];
geometry_msgs::Vector3 linearAccel;
std_msgs::Float64 linearAccelCovarience[9];
ros::Publisher imuPublisher(imuTopic, &imuMessage);
std_msgs::String chat_msg;
ros::Publisher chatter(chatTopic, &chat_msg);
Adafruit_LSM9DS1 IMU = Adafruit_LSM9DS1();
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
      DBG_OUTPUT_PORT.println("Oops ... unable to initialize the LSM9DS0 IMU. Check your wiring!");
    while (1)
      delay(500);
  }
  else
  {
    IMU.setupAccel(IMU.LSM9DS1_ACCELRANGE_2G);
    IMU.setupMag(IMU.LSM9DS1_MAGGAIN_4GAUSS);
    IMU.setupGyro(IMU.LSM9DS1_GYROSCALE_245DPS);
    imuMessage.header.frame_id = imuTopic;
    imuMessage.linear_acceleration = linearAccel;
    imuMessage.orientation = orientation;
    imuMessage.angular_velocity = angularAccel;
    for (int i = 0; i < 9; i++)
    {
      linearAccelCovarience[i].data = 0.0;
      angularAccelCovarience[i].data = 0.0;
      orientationCovarience[i].data = 0.0;
    }
  }
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
  IMU.read();
  sensors_event_t a, m, g, temp;
  IMU.getEvent(&a, &m, &g, &temp);
  imuMessage.header.stamp = current_time;
  // DBG_OUTPUT_PORT.println(a.acceleration.x);
  //update data
  linearAccel.x = a.acceleration.x;
  linearAccel.y = a.acceleration.y;
  linearAccel.z = a.acceleration.z;
  angularAccel.x = g.acceleration.x;
  angularAccel.y = g.acceleration.y;
  angularAccel.z = g.acceleration.z;
  orientation.w = a.orientation.heading; // fix this
  orientation.x = a.orientation.x;
  orientation.y = a.orientation.y;
  orientation.z = a.orientation.z;
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
