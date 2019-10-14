#include<Servo.h>
int pin=11,angle;
Servo obj;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
obj.attach(pin);
obj.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()!=0)
  {
angle=Serial.read();
if(angle<=90)
{
  for(int i=90;i>=angle;i--)
  {
  obj.write(i);
  
  delayMicroseconds(2);
  }
  for(int i=angle;i<=90;i++)
  {
  obj.write(i);
  delayMicroseconds(2);
  }
  
}
else if(angle>90&&angle<=180)
{
  for(int i=90;i<=angle;i++)
  {
  obj.write(i);
  delayMicroseconds(2);
  }
  for(int i=angle;i>=90;i--)
  {
  obj.write(i);
  delayMicroseconds(2);
  }
  
}
  }
}
