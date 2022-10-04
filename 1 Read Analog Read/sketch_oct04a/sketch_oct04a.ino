int read_pin = A3;
float V2 = 0;
int read_val;
int delay_time = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(read_pin , INPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
 read_val= analogRead(read_pin);
  V2 = (5./1023.)*read_val;
  Serial.println(V2);
  delay(delay_time);
  
}
