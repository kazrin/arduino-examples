#include <Arduino.h>
#include "WiFiConnection.h"
#include "config.h"
 
std::string ssid = "";
std::string pass = "";
WiFiConnection wifiConnection(ssid, pass);

void setup() {
  Serial.begin(115200);

  wifiConnection = WiFiConnection(WiFiCredentials::ssid, WiFiCredentials::pass);
  wifiConnection.connect();
}

void loop() {
  if(!wifiConnection.is_connected()) {
    Serial.println("Not connected, so try to reconnect...");
    wifiConnection.reconnect();
  } else {
    Serial.println("Already connected.");
  }

  delay(1000);
}
