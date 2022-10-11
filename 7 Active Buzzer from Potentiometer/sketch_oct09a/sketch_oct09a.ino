int num;
int buzzPin  = 8;
int dt = 200;
int PotPin = A3;
float potval;

String msg = "Please input your numbr : ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin , OUTPUT);
pinMode(PotPin , INPUT);
}

void loop() {
  potval = analogRead(PotPin);
  Serial.println(potval);
  if(potval > 500){
   digitalWrite(buzzPin , HIGH);
   delay(dt); 
   digitalWrite(buzzPin , LOW); 
  }
}
