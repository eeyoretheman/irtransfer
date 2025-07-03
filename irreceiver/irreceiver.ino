#include <IRremote.h>

void setup() {
  IrReceiver.begin(2);  
  Serial.begin(9600);
}

void loop() {
  if (IrReceiver.decode()) {
    uint32_t data = IrReceiver.decodedIRData.decodedRawData;
    Serial.write(data);

    IrReceiver.resume();
  }
}