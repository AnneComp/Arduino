// C++ code
//
int ir=9;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(ir,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int cond=digitalRead(ir);
  if (cond==0){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
}