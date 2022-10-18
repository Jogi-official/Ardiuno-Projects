#include <Servo.h>

int lightVal;
int lightPin = A4;
int dt= 250;
int servo_pin = 9;
Servo servo;
int angle;

void setup() {
 
 pinMode(lightPin , INPUT);
 Serial.begin(9600);
 pinMode(servo_pin , OUTPUT);
servo.attach(servo_pin);
}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dt);

  angle = ((-16. / 63.)*lightVal) +(16.*780. /63.);
  Serial.print("  "+angle);
  servo.write(angle);
}
