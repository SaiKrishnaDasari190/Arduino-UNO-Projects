#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

LiquidCrystal_I2C lcd(0x3F,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

int rainPin = A0; // Change this to the digital input pin you used to connect the rain sensor

void wipe();

void setup()
{
  pinMode(rainPin, INPUT); // Set the digital input pin for the rain sensor
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Automatic Wipers");
  lcd.setCursor(0,1);
  lcd.print("By Group 7");
  delay(4000);
  lcd.clear();
  Serial.begin(9600);

  
}
void loop()
{
  
  int rainValue = analogRead(rainPin); // Read the analog output of the rain sensor
  Serial.println(rainValue);
  if (rainValue < 500)  
  {
    wipe();
    lcd.clear();
    lcd.print("It's Raining!"); // Print a message if it's raining
  }
  else
  {
    lcd.clear();
    lcd.print("No Raining!"); // Print a message if it's not raining
  }
  delay(500); // Delay for a short period before reading the sensor again
}
void wipe()
{
  myservo.write(0);  // sets the servo position to 0 degrees
  delay(1000);       // waits for 1 second
  myservo.write(90); // sets the servo position to 90 degrees
  delay(1000);       // waits for 1 second
  myservo.write(180); // sets the servo position to 180 degrees
  delay(1000);       // waits for 1 second
}
