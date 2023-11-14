#ifndef WiFiConnection_h
#define WiFiConnection_h

#include <WiFi.h>

class WiFiConnection : public WiFiClient {
    public:
        std::string ssid;
        std::string pass;

        WiFiConnection(std::string ssid, std::string pass);
        void connect();
        bool is_connected();
        void reconnect();
};

#endif