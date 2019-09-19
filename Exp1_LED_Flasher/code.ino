void setup() 
{
  pinMode(2, OUTPUT);// pin number 2 is connected with LED and is used as output mode pin

}

void loop() 
{
  digitalWrite(2, HIGH);// HIGH is used to supply Voltage
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);// LOW is used to stop supply of Voltage
  delay(1000); // Wait for 1000 millisecond(s)

}
