 #include<Servo.h>
 //int pos=0;
 int trigPin=6;
int echoPin=7;
 Servo myservo;
void setup() 
{
 Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
  myservo.attach(10);
  myservo.write(0);
}
void loop() 
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
   digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
   digitalWrite(trigPin,LOW);
   long duration=pulseIn(echoPin,HIGH);
   long distance=duration*0.034/2;
  // Serial.println("distance");
    Serial.println(distance);
    // Serial.println("duration");
      Serial.println(duration);
  
  Serial.println();
  if(distance<=40)
  {
    myservo.write(90);
    }
  else
   {
    myservo.write(0);
    }
}
