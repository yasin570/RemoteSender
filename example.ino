#include <SoftwareSerial.h>
#include "RemoteSenderESP8266.h"

SoftwareSerial mySoftwareSerial(12, 14); // RX, TX
RemoteSenderESP8266 remoteSender(mySoftwareSerial);

void setup() {
  Serial.begin(9600);
  mySoftwareSerial.begin(9600);
}

void loop() {
  String dataToSend = "0xFF,0xAA,0xBB,0x10,0x05";
  
  remoteSender.send(dataToSend);

  delay(1000);
}
