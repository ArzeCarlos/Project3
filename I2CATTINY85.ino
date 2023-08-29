#include "TinyWireS.h"                  
#define I2C_SLAVE_ADDR  0x08            

byte t=10;

void setup()
{ 
   TinyWireS.begin(I2C_SLAVE_ADDR);     
   TinyWireS.onRequest(requestEvent);
}

void loop()
{
}

void requestEvent()
{  
   TinyWireS.write(t);
}
