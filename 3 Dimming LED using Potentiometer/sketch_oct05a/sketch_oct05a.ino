int pot_pin = A1;
int g_pin = 6;
int pot_val;
float led_val;
void setup() {
   pinMode(pot_pin , INPUT);
   pinMode(led_val , OUTPUT);
   Serial.begin(9600);
}

void loop() {
  pot_val = analogRead(pot_pin);
  led_val = (255./1023.)*pot_val;
  analogWrite(g_pin , led_val);
  Serial.println(led_val);

}
