int motorp=3;
int motorn=5;
int red=8;
int green=9;
//int blue=5;
void setup() {
  // put your setup code here, to run once:
 pinMode(A2,INPUT);
 pinMode(motorp,OUTPUT);
  pinMode(motorn,OUTPUT);
  pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
 //pinMode(blue,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // val is resistance values.
 int val=analogRead(A2);
 Serial.println(val);
 float per=(100-(val/1023.00)*100);
 Serial.println(per);
  if(per<=30)
  {
    digitalWrite(red,1);
    digitalWrite(green,0);
    analogWrite(motorp,70);
    analogWrite(motorn,0);
    delay(400);
    analogWrite(motorp,120);
    analogWrite(motorn,0);
      delay(400);
    analogWrite(motorp,155);
    analogWrite(motorn,0);
      delay(400);
    analogWrite(motorp,185);
    analogWrite(motorn,0);
      delay(400);
     analogWrite(motorp,220);
    analogWrite(motorn,0);
      delay(400);
     analogWrite(motorp,255);
    analogWrite(motorn,0);
      delay(400);
  }
  else
  {
   digitalWrite(red,0);
    digitalWrite(green,1); 
   analogWrite(motorp,0);
   analogWrite(motorn,0);
    }
}
