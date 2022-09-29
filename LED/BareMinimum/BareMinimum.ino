void setup() {

  pinMode(8 , OUTPUT);
  pinMode(3 , OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  
  digitalWrite(8 ,HIGH);
  digitalWrite(3 , HIGH);
  digitalWrite(5 , HIGH);
  delay(50);
  digitalWrite(3 , LOW);
  digitalWrite(5, LOW);
  digitalWrite(8 , LOW);
  delay(50);


}
