#pragma once
#include <ArduinoOTA.h>
#include <ESPmDNS.h>
#include <WiFi.h>
#include <WiFiUdp.h>

class WiFiManager {
public:
    WiFiManager();
    void setup();
    void loop();
    void sendBufferedData();
    void attemptOTAUpdate();

private:
    WiFiServer wifiServer;
    WiFiServer wifiOBDII;
    WiFiClient wifiClient;
    WiFiUDP wifiUDPServer;
    uint32_t lastBroadcast;
};
