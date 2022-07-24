// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  int val;
  val=analogRead(A0);
  Serial.println(val);
  if (val<300){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
}