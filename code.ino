void setup()
{ Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode( 10,INPUT);
}

void loop()
{ 
  int light=analogRead(A0);
  int toggle=digitalRead(10);
  delay(500);
 if(light<300)
 {
   if(toggle==1)
   {
     for(int i=3;i<=10;i++)
     {
       digitalWrite(i,HIGH);
       delay(500);
       digitalWrite(i,LOW);
       delay(500);
       
     }
   }
   else {
     for(int i=3;i<=10;i++)
     {
       digitalWrite(i,HIGH);
       delay(1000);
       digitalWrite(i,LOW);
       delay(1000);
       
     }
   
   }
   
 }
}
