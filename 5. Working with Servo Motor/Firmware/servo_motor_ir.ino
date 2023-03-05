 #include<Servo.h>
 int ir=5;
 int pos=0;
 Servo myservo;
void setup() 
{
 Serial.begin(9600);
  pinMode(ir,INPUT);
  myservo.attach(2);
}
void loop() 
{
  int  value=digitalRead(ir);
  Serial.println();
  if(value==0)
  {
    myservo.write(90);
    }
  else
   {
    myservo.write(0);
    }
}
