// C++ code
//
int echo_pin=10;
int trigger_pin=11;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigger_pin, LOW);
  delayMicroseconds(2); 
  digitalWrite(trigger_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger_pin, LOW);
  int s=0.017*pulseIn(echo_pin,HIGH);
  Serial.print(s);
}