#include <Arduino.h>
#include "WiFiConnection.h"

std::string ssid = "";
std::string pass = "";
WiFiConnection wifiConnection(ssid, pass);

void setup() {
  Serial.begin(115200);

  std::string ssid = "F660A-gphA-G";
  std::string pass = "zfyt9z5h";
  wifiConnection = WiFiConnection(ssid, pass);
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
