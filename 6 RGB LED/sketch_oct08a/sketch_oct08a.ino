int red = 8;
int green = 9;
int blue = 10;
String color;
int c;

String msg = "What color do you want : ";

void setup() {
Serial.begin(9600);
pinMode(red , OUTPUT);
pinMode(green , OUTPUT);
pinMode(blue , OUTPUT);
}

void loop() {
Serial.println(msg);
while(Serial.available() == 0 ){
  
}
c = Serial.parseInt();


if(c == 1){
  digitalWrite(red , HIGH);
  digitalWrite(green , LOW);
  digitalWrite(blue , LOW);
  
}

if(c == 2){
  digitalWrite(red , LOW);
  digitalWrite(green , HIGH);
  digitalWrite(blue , LOW);
  
}
if(c == 3){
  analogWrite(red , 56);
  analogWrite(green ,78 );
  analogWrite(blue , 12);
  
}

if(c == 0){
  digitalWrite(red , LOW);
  digitalWrite(green , LOW);
  digitalWrite(blue , LOW);
  
}

}
