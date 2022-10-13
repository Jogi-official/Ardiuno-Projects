int lightPen = A0;
int lightVal;
int dt = 250;
int ledred = 8;
int ledblue = 9;

void setup() {
  pinMode(lightPen, INPUT);
  pinMode(ledred, OUTPUT);
  pinMode(ledblue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lightVal  = analogRead(lightPen);
  Serial.println(lightVal);
  if(lightVal < 180 ){
    digitalWrite(ledred , HIGH);
    delay(dt);
    digitalWrite(ledred,LOW);
  }
  else{
      digitalWrite(ledblue , HIGH);
    delay(dt);
    digitalWrite(ledblue,LOW);
  }
  delay(dt);

}
