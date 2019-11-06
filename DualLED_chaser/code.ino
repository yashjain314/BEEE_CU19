void setup()
{
   int i;
for(i=0;i<=13;i++)
pinMonde(i,OUTPUT);
}

void loop()
{
  int i;
  for(i=10;i<14;i++)
{
    off();
    if(i!=13)
    digitalWrite(i,HIGH);
   digitalWrite(i+1,HIGH);
  delay(200);
}
else
digitalWrite(i,HIGH);
digitalWrite(i-3,HIGH);
delay(200);
off();
}
}
void off(void)
{
   int i;
for(i=10;i<=13;i++)
  digitalWrite(i,LOW);
  delay(100);
}
