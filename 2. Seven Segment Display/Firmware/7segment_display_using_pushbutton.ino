int button1=10;
int button2=11;
int count=0;
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;

void setup() {
  // put your setup code here, to run once:
 pinMode(button1,INPUT);
 pinMode(button2,INPUT);
 pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state1=digitalRead(button1);
  if(state1==HIGH)
 {
  count++;
  delay(507);
  while(digitalRead(button1))
  {
    
  }
 }
 int state2=digitalRead(button2);
  if(state2==HIGH)
 {
  count--;
  delay(507);
  while(digitalRead(button2))
  {
    
  }
 }
 
  if(count==1)//0
  {
     digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
  //delay(507);
  }
  else if(count==2)//1
  {
    digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  //delay(507);
  }
  else if(count==3)//2
  {
    digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,0);
  //delay(507);
  }
   else if(count==4)//3
   {
    digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
  //delay(507);
    }
    else if(count==5)//4
    {
       digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
 // delay(507);
      }
     else if(count==6)//5
     {
      digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
 // delay(507);
      }
     
      else if(count==7)//6
      {
         digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  //delay(507);
        }
       else if(count==8)//7
       {
        digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  //delay(507);
        }
        else if(count==9)//8
        {
           digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
 // delay(507);
          }
 else if(count==10)//9
    {
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
  //delay(1000);
  count=0;
     }
  else if(count<=0)
  {
    count=0;
  }
  }
 
 
  
