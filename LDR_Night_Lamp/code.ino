int sensorPin = A0; 
int sensorValue = 0; 
int ledPin=7;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}
void loop() 
{
sensorValue = analogRead(sensorPin);
Serial.println(sensorValue); 
  if(sensorValue<=300)
  {
  digitalWrite(7,HIGH);
  }
  else
  digitalWrite(7,LOW);
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
