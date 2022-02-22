int analogPin = A0; // potentiometer wiper (middle terminal) connected to analog pin 3
// outside leads to ground and +5V
float val = 0; // variable to store the value read
void setup() {
Serial.begin(9600); // setup serial
pinMode(13, OUTPUT);
}
void loop() {
val = analogRead(analogPin); // read the input pin
float volts=((val+1)*5)/1024;
Serial.print ("Conversi´on anal´ogico-digital: ");
Serial.println(volts); // debug value

  if (volts >= 3.0) {
    digitalWrite(13, HIGH);
    }
  else {
    digitalWrite(13, LOW);
    }
}
