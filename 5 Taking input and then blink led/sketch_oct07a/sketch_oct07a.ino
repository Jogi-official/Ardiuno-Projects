int numBlinks;
String msg = "Enter the number of blinks";
int bt = 500;
int redPin  = 12;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(12 , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0 ){
    
  }
  numBlinks = Serial.parseInt();
  for(int i = 0 ; i < numBlinks ; i++){
    digitalWrite(redPin , HIGH);
    delay(bt);
    digitalWrite(redPin , LOW);
    delay(bt);
  }
 }
