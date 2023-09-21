#ifndef RemoteSender_h
#define RemoteSender_h

#include "Arduino.h"

class RemoteSender {
  public:
    RemoteSender();
    void send(String data);
};

#endif
