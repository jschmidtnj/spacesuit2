/**
 * IMU
 *
 * IMU sensor on ROS network
 */
#include <Arduino.h>
#include <MPU9250.h>
#include <ros.h>
#include <std_msgs/Empty.h>
#include <sensor_msgs/Imu.h>
#include <std_msgs/Float64.h>
#include <WiFi.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>

#define DBG_OUTPUT_PORT Serial
#define debug_mode true
#define DBG_BAUD_RATE 115200
#define rosTopic "imu"
#define rosServer "192.168.1.1"
#define rosPort 11411
#define ssid "***"
#define password "***"

static const unsigned long BLINK_INTERVAL = 1000; //ms
static unsigned long lastBlink = 0;
static bool blinkState = false; // false = off

sensor_msgs::Imu imuMessage;
geometry_msgs::Quaternion orientation;
std_msgs::Float64 orientationCovarience[9];
geometry_msgs::Vector3 angularAccel;
std_msgs::Float64 angularAccelCovarience[9];
geometry_msgs::Vector3 linearAccel;
std_msgs::Float64 linearAccelCovarience[9];
ros::Publisher p(rosTopic, &imuMessage);
MPU9250 IMU(Wire, 0x68);
WiFiClient client;

class WiFiHardware
{

public:
  WiFiHardware(){};

  void init()
  {
    // do your initialization here. this probably includes TCP server/client setup
    client.connect(rosServer, rosPort);
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
    return millis(); // easy; did this one for you
  }
};

ros::NodeHandle_<WiFiHardware> nh;

void setupWiFi()
{
  WiFi.begin(ssid, password);
  Serial.print("\nConnecting to ");
  Serial.println(ssid);
  uint8_t i = 0;
  while (WiFi.status() != WL_CONNECTED && i++ < 20)
    delay(500);
  if (i == 21)
  {
    Serial.print("Could not connect to");
    Serial.println(ssid);
    while (1)
      delay(500);
  }
  Serial.print("Ready! Use ");
  Serial.print(WiFi.localIP());
  Serial.println(" to access client");
}

void setup()
{
  DBG_OUTPUT_PORT.begin(DBG_BAUD_RATE);
  // start communication with IMU
  int imuStatus = IMU.begin();
  if (imuStatus < 0)
  {
    DBG_OUTPUT_PORT.println("IMU initialization unsuccessful");
    DBG_OUTPUT_PORT.println("Check IMU wiring or try cycling power");
    DBG_OUTPUT_PORT.print("Status: ");
    DBG_OUTPUT_PORT.println(imuStatus);
    exit(1);
  }
  // setting the accelerometer full scale range to +/-8G
  IMU.setAccelRange(MPU9250::ACCEL_RANGE_8G);
  // setting the gyroscope full scale range to +/-500 deg/s
  IMU.setGyroRange(MPU9250::GYRO_RANGE_500DPS);
  // setting DLPF bandwidth to 20 Hz
  IMU.setDlpfBandwidth(MPU9250::DLPF_BANDWIDTH_20HZ);
  // setting SRD to 19 for a 50 Hz update rate
  IMU.setSrd(19);
  nh.initNode();
  nh.advertise(p);
  setupWiFi();
  imuMessage.linear_acceleration = linearAccel;
  imuMessage.orientation = orientation;
  imuMessage.angular_velocity = angularAccel;
  for (int i = 0; i < 9; i++)
  {
    linearAccelCovarience[i].data = 0.0;
    angularAccelCovarience[i].data = 0.0;
    orientationCovarience[i].data = 0.0;
  }
  delay(2000);
  nh.initNode();
}

void loop()
{
  IMU.readSensor();
  //update data
  linearAccel.x = IMU.getAccelX_mss();
  linearAccel.y = IMU.getAccelY_mss();
  linearAccel.z = IMU.getAccelZ_mss();
  angularAccel.x = IMU.getGyroX_rads();
  angularAccel.y = IMU.getGyroY_rads();
  angularAccel.z = IMU.getGyroZ_rads();
  orientation.w = 1.0; // fix this
  orientation.x = IMU.getMagX_uT();
  orientation.y = IMU.getMagY_uT();
  orientation.z = IMU.getMagZ_uT();
  nh.spinOnce();
  if (millis() - lastBlink >= BLINK_INTERVAL)
  {
    lastBlink += BLINK_INTERVAL;
    blinkState = !blinkState;
    digitalWrite(LED_BUILTIN, blinkState);
  }
}
