#include <IRremote.h>

void setup() {
  IrSender.begin(2);
  Serial.begin(9600);
}

uint8_t input;

void loop() {
  if (Serial.readBytes((char*)&input, 1)) {
    IrSender.sendSony(input, 8);
  }
  
  delay(100);
}
