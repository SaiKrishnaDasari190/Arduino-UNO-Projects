#include <SPI.h>
const int slaveSelectPin1 = 10;
const int slaveSelectPin2 = 8;
void setup() {
  pinMode(slaveSelectPin1, OUTPUT);
  pinMode(slaveSelectPin2, OUTPUT);
  SPI.begin();
}

void loop() 
{
 for (int channel = 0; channel < 6; channel++) 
 {
    for (int level = 0; level < 255; level++) {
      digitalPotWrite(channel, level);
      delay(10);
    }
    delay(100);
  
    for (int level = 0; level < 255; level++) {
      digitalPotWrite(channel, 255 - level);
      delay(10);
    }
  }

}

void digitalPotWrite(int address, int value) 
{
  digitalWrite(slaveSelectPin1, LOW);
  delay(100);
  SPI.transfer(address);
  SPI.transfer(value);
  delay(100);
  digitalWrite(slaveSelectPin1, HIGH);
digitalWrite(slaveSelectPin2, LOW);
  delay(10);
  SPI.transfer(address);
  SPI.transfer(value);
  delay(10);
  digitalWrite(slaveSelectPin2, HIGH);  
}
