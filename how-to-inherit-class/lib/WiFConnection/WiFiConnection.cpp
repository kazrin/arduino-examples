#include "WiFiConnection.h"

WiFiConnection::WiFiConnection(std::string ssid, std::string pass) {
    this->ssid = ssid;
    this->pass = pass;
}

void WiFiConnection::connect() {
    WiFi.begin(this->ssid.c_str(), this->pass.c_str());
    Serial.print("WiFi connecting...");
    while(WiFi.status() != WL_CONNECTED) {
        Serial.print(".");
        delay(100);
    }
    Serial.print(" connected. ");
    Serial.println(WiFi.localIP());       
}

bool WiFiConnection::is_connected() {
    return WiFi.status() == WL_CONNECTED;
}

void WiFiConnection::reconnect() {
    WiFi.disconnect();
    WiFi.begin(this->ssid.c_str(), this->pass.c_str());
    Serial.print("WiFi reconnecting...");
    while(WiFi.status() != WL_CONNECTED) {
        Serial.print(".");
        delay(100);
    }
    Serial.print(" connected. ");
    Serial.println(WiFi.localIP());
}