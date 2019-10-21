void setup()
{
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}
 int count=0;
 void loop()
{
  digitalWrite(9,LOW);
  delay(50);
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  digitalWrite(9,LOW);
  long t=pulseIn(10,HIGH);
  int d=0.017*t;
  if(d<=200)//assuming that height of the gate is 200cm
  {
    count++;
    Serial.print(count);
    Serial.print("\n");
  }
}