#include <Servo.h>
#include <LiquidCrystal.h> 
Servo myservo;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
int analogPin = A0; 
int val = 0; // variable to store the value read


void setup() {
Serial.begin(9600); // setup serial
pinMode(13, OUTPUT);
myservo.attach(9);
lcd.begin(16, 2);
}
void loop() {

 //Seguir al potenciómetro
 
  val = analogRead(analogPin);
  int ang = map(val, 0, 1023, 0, 180);
  myservo.write(ang);
  delay(20);

  //Mostrar en LCD
  lcd.clear();
//  V = map(val, 0, 1023, 0, 5);
float V = (val*5.0)/1023.0;
  lcd.setCursor(0, 0);
  lcd.print ("Voltaje: ");
  lcd.setCursor(9, 0);
  lcd.print(V);
  lcd.setCursor(2, 1);
  lcd.print ("Angulo: ");
  lcd.setCursor(8, 1);
  lcd.println(ang);
}
