#include "RemoteSenderESP8266.h"

RemoteSenderESP8266::RemoteSenderESP8266(SoftwareSerial& serial) : _serial(serial) {
  // Constructor implementation
}

void RemoteSenderESP8266::send(String data) {
  String dataString = data;
  dataString.trim();
  String parcalar[5];
  int index = 0;

  while (dataString.length() > 0) {
    int commaIndex = dataString.indexOf(",");
    if (commaIndex == -1) {
      parcalar[index] = dataString;
      break;
    }
    parcalar[index] = dataString.substring(0, commaIndex);
    dataString = dataString.substring(commaIndex + 1);
    index++;
  }

  uint8_t remote[5];
  for (int i = 0; i < 5; i++) {
    remote[i] = strtoul(parcalar[i].c_str(), NULL, 16);
  }

  _serial.write(remote, sizeof(remote)); // Use the provided SoftwareSerial object to send data
  delay(1000);
}
