# RemoteSender
Dividing a comma-separated string into pieces, converting these pieces into hexadecimal numbers, and transmitting these hexadecimal numbers through the serial port.  String to uint8_t.   String ("A1,B1") to uint8_t.



How to use ?

Download RemoteSender.zip and add it to the library.

#define RemoteSender_h

SoftwareSerial serial1(9, 8); // RX, TX   


String data = "A1,F1,T5";


void setup() {


 serial1.begin(9600);  // The communication name for RemoteSender is serial1.

 
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

void send(String data);
