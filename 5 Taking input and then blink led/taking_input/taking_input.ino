String ledColor;
int ledint;
String msg = "Enter color of LED ";
int redpin =12;
int bluepin = 11;
int greenpin = 10 ;

String red = "red";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(greenpin, OUTPUT);
pinMode(bluepin , OUTPUT);
pinMode(redpin , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.println(msg);
//  while(Serial.available() == 0 ){
//    
//  }
//  led = Serial.readString();
//  if(led == "red"){
//    digitalWrite(redpin , HIGH);
//  }

Serial.println(msg);

while(Serial.available() == 0){
  
}

//ledColor = Serial.readString();
ledint = Serial.parseInt();
Serial.println(" You Selected : ");
Serial.println(ledint);

if(ledint==1)
{
  digitalWrite(redpin , HIGH);
  digitalWrite(greenpin , LOW);
  digitalWrite(bluepin , LOW);
}
else if(ledint==2)
{
  digitalWrite(redpin , LOW);
  digitalWrite(greenpin , LOW);
  digitalWrite(bluepin , HIGH);
}
else if(ledint==3)
{
  digitalWrite(redpin , LOW);
  digitalWrite(greenpin , HIGH);
  digitalWrite(bluepin , LOW);
}


  }
