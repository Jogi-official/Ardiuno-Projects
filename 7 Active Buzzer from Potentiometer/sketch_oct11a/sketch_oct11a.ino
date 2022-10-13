int buzzPin = 9;
int dt1 = 1 ;
int dt2  = 2;
int j;

void setup() {
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  for(j =1  ; j<=100 ; j++){
    digitalWrite(buzzPin , HIGH);
    delay(dt1);
    digitalWrite(buzzPin , LOW);
    delay(dt2);
  }

  for(j =1  ; j<=100 ; j++){
    digitalWrite(buzzPin , HIGH);
    delay(dt2);
    digitalWrite(buzzPin , LOW);
    delay(dt2);
  }
}
