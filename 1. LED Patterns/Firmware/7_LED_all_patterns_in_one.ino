//int LED1=2;
int LED2=3;
int LED3=4;
int LED4=5;
int LED5=6;
int LED6=7;
//int LED7=8;
int i;
void setup() 
{
for(i=3;i<=7;i++)
{
pinMode(i,OUTPUT);
}
}

void loop() 
{
 //basic pattern
  for(int i=3;i<=7;i++)
{
digitalWrite(i,HIGH);
delay(500);
digitalWrite(i,LOW);
//delay(1000);
}
for(int i=7;i>=3;i--)
{
digitalWrite(i,HIGH);
delay(500);
digitalWrite(i,LOW);
//delay(1000);
}

 //even pattern
for(int i=3;i<=7;i++)
{
  if(i%2==0)
  {
digitalWrite(i,HIGH);
delay(500);
digitalWrite(i,LOW);
  }
  else
  {
   digitalWrite(i,LOW);
   }
}

//odd pattern
delay(500);
for(int i=7;i>=3;i--)
{
  if(i%2==1)
  {
digitalWrite(i,HIGH);
delay(500);
digitalWrite(i,LOW);
}
else
{
 digitalWrite(i,LOW);
 }
}

delay(500);


//twin pattern
for(int i=3;i<7;i++)
{
digitalWrite(i,HIGH);
digitalWrite(i+1,HIGH);
delay(270);
digitalWrite(i,LOW);
digitalWrite(i+1,LOW);
//delay(1000);
}
for(int i=7;i>=3;i--)
{
digitalWrite(i,HIGH);
digitalWrite(i-1,HIGH);
delay(270);
digitalWrite(i,LOW);
digitalWrite(i-1,LOW);
//delay(1000);
}

}
