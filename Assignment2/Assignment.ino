int voltVal =0;
void setup()
{
  pinMode(7, INPUT);
  pinMode(2,OUTPUT);
}

void loop()
{
  
  voltVal = digitalRead(7);
  if(voltVal == 0 || voltVal  < 1)
    digitalWrite(2,HIGH);
  else
    digitalWrite(2,LOW);
}