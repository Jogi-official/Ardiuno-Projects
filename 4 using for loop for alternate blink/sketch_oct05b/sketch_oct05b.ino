int red = 6;
int blue = 9;

int delay1 = 500;
int delay2 = 500;

void setup() {
  pinMode(6 , OUTPUT);
  pinMode(9  , OUTPUT);
  Serial.begin(9600);

}

void loop() {
 for(int i = 0 ; i < 3 ; i ++){
  digitalWrite(blue , HIGH);
  delay(delay1);
  digitalWrite(blue , LOW);
  delay(delay1);
 }

for(int j =0 ; j < 5 ; j++)
  {
  digitalWrite(red , HIGH);
  delay(delay2);
  digitalWrite(red , LOW);
  delay(delay2);
  }
}
