int my_volt_pin = A3;
int read_val;
float V2;
int delay_t = 250;
int red_pin = 9;


void setup() {
  Serial.begin(9600);
  pinMode(my_volt_pin , INPUT);
  pinMode(red_pin , OUTPUT);  

}

void loop() {
  // put your main code here, to run repeatedly:
read_val = analogRead(my_volt_pin);
V2 = (5./1023.)*read_val;
Serial.print("Potentio meter Volatage is :  ");
  Serial.println(V2);

  if(V2 > 4.0){
    digitalWrite(red_pin , HIGH);
  }
  else{
    digitalWrite(red_pin , LOW);
  }

  
delay(delay_t);
}
