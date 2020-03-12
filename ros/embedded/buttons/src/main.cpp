#include <Arduino.h>
#include "ros.h"
#include "sensor_msgs/Joy.h"
#include "WiFi.h"
#include "config.h"

using namespace std;

#define DBG_OUTPUT_PORT Serial
#define debug_mode true
#define DBG_BAUD_RATE 115200
#define buttonTopic "buttons"
#define chatTopic "chatter"
#define chatdata "test123"
#define PUB_RATE 5  // Hz
#define BLINK_RATE 1 // Hz
unsigned int HISTORY_SIZE = 10; // covariance history
IPAddress rosIPAddress = IPAddress(rosipints);
sensor_msgs::Joy buttonsMessage;
ros::Publisher buttonPublisher(buttonTopic, &buttonsMessage);
WiFiClient client;

static unsigned long lastBlink = 0;
static bool blinkState = false; // false = off

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

void setup() {
  DBG_OUTPUT_PORT.begin(DBG_BAUD_RATE);
  delay(500);
  setupWiFi();
  delay(500);
  nh.initNode();
  nh.advertise(buttonPublisher);
  if (debug_mode)
  {
    chat_msg.data = chatdata;
    nh.advertise(chatter);
  }
}

void getButtonData() {
  
}

void loop() {
  // put your main code here, to run repeatedly:
  now = millis();
  if (buttonIsTriggerred())
  {
    if (client.connected())
    {
      current_time = nh.now();
      getButtonData(); // save to button data object (joystick object)
      if (debug_mode)
        DBG_OUTPUT_PORT.println("Publishing Data");
      buttonPublisher.publish(&buttonsMessage);
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
