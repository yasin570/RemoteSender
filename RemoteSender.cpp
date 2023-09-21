#include "RemoteSender.h"

RemoteSender::RemoteSender() {
  // Constructor implementation
}

void RemoteSender::send(String data) {
  String dataString = data;
  dataString.trim();
  String parts[5];
  int index = 0;

  while (dataString.length() > 0) {
    int commaIndex = dataString.indexOf(",");
    if (commaIndex == -1) {
      parts[index] = dataString;
      break;
    }
    parts[index] = dataString.substring(0, commaIndex);
    dataString = dataString.substring(commaIndex + 1);
    index++;
  }

  uint8_t remote[5];
  for (int i = 0; i < 5; i++) {
    remote[i] = strtoul(parts[i].c_str(), NULL, 16);
  }

  Serial1.write(remote, sizeof(remote));
  delay(1000);
}
