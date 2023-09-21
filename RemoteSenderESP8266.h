#ifndef RemoteSenderESP8266_h
#define RemoteSenderESP8266_h

#include "Arduino.h"
#include <SoftwareSerial.h>

class RemoteSenderESP8266 {
  private:
    SoftwareSerial& _serial;

  public:
    RemoteSenderESP8266(SoftwareSerial& serial);
    void send(String data);
};

#endif
