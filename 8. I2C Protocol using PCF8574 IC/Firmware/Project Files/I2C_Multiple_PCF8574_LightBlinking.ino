#include <Adafruit_PCF8574.h>
Adafruit_PCF8574 pcf;
Adafruit_PCF8574 pcf1;
Adafruit_PCF8574 pcf2;
void setup( ) 
{

if (pcf . begin(0x20, &Wire) )
    {
        //PCF 1
       for (uint8_t p=0; p<8; p++) 
        {
           pcf . pinMode (p, OUTPUT);
        }
    }
if (pcf1 . begin(0x21, &Wire))
    {
       //PCF2

      for (uint8_t q=0; q<8; q++) 
      {
        pcf1 . pinMode (q, OUTPUT);
      }
    }
if (pcf2 . begin(0x22, &Wire))
    {
      //PCF3

      for (uint8_t r=0; r<8; r++) 
      {
        pcf2 . pinMode (r, OUTPUT);
      }
    }
if((!pcf . begin(0x20, &Wire) )&&(!pcf1 . begin(0x21, &Wire))&&(!pcf2 . begin(0x22, &Wire)))
{
  while(1);
}
}


void loop( )
{
  if (pcf . begin(0x20, &Wire) )
  {
    //PCF1
  for (uint8_t p=0; p<8; p++)
  {
    pcf . digitalWrite(p,HIGH);
    delay (100) ;
    pcf . digitalWrite(p,LOW);
    delay (100) ;
  }
  }
  delay(1);
  
  if (pcf1 . begin(0x21, &Wire))
  {
    //PCF2
  for (uint8_t q=0; q<8; q+2)
  {
    pcf1 . digitalWrite(q,HIGH);
    delay (100) ;
    pcf1 . digitalWrite(q,LOW);
    delay (100) ;
   }
  }
  
  delay(1);

  if (pcf2 . begin(0x22, &Wire))
  {
    //PCF3
  for (uint8_t r=0; r<8; r+3)
  {
    pcf2 . digitalWrite(r,HIGH);
    delay (100) ;
    pcf2 . digitalWrite(r,LOW);
    delay (100) ;
  }
  }
  delay(1);
}
