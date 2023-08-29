#include <Wire.h>
#define I2C_SLAVE_ADDRESS 0x08
byte num;
void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Wire.requestFrom(I2C_SLAVE_ADDRESS,1);
  while(Wire.available()){
    num=Wire.read();
  }
  Serial.print("num = ");
  Serial.println(num,DEC);
  num=0;
  delay(1000);
}
