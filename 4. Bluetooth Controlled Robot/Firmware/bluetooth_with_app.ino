int lmp=6;
int lmn=9;
int rmp=3;
int rmn=5;
String value=" ";
void stop();
void setup() {
 // put your setup code here, to run once:
 
 pinMode(rmp,OUTPUT);
 pinMode(rmn,OUTPUT);
 pinMode(lmp,OUTPUT);
 pinMode(lmn,OUTPUT);
 pinMode(10,INPUT);
 pinMode(11,INPUT);
 Serial.begin(9600);
}
void loop() {
 if (value=Serial.available()>0)
 {
 value=Serial.readString();
 Serial.print(value);
if (value=="forward")
 {forward();
stop();
 }
 else if (value=="backward")
 {backward();
 stop();
 }
 else if (value=="left")
 {left();
 stop();
 }
 else if (value=="right")
 {right();
 stop();
 }
 else if (value=="stop")
 {
 stop();
 }
}
}
void stop()
 {
 analogWrite(rmp,0);
 analogWrite(rmn,0);
 analogWrite(lmp,0);
 analogWrite(lmn,0);
 }
 void right()
 {
 analogWrite(rmp,0);
 analogWrite(rmn,0);
 analogWrite(lmp,150);
 analogWrite(lmn,0);
 delay(300);
 }
  void left()
 {
 analogWrite(rmp,150);
 analogWrite(rmn,0);
 analogWrite(lmp,0);
 analogWrite(lmn,0);
 delay(300);
 }
  void backward()
 {
 analogWrite(rmp,0);
 analogWrite(rmn,150);
 analogWrite(lmp,0);
 analogWrite(lmn,150);
 delay(300);
 }
  void forward()
 {
analogWrite(rmp,150);
 analogWrite(rmn,0);
 analogWrite(lmp,150);
 analogWrite(lmn,0);
 delay(300);
 }
