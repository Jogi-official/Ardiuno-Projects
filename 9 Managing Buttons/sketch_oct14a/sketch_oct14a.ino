int ButtonValue  = 0 ;
int Button = 3;
int LED = 2;
int dt = 250;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(Button , INPUT);
}

void loop() {

  ButtonValue = digitalRead(Button);
  Serial.println(ButtonValue);
  delay(dt);

  if(ButtonValue != 0){
    digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }

}
