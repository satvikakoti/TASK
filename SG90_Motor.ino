#include<Servo.h>
Servo obj;
int pin=11;

void setup() {
  // put your setup code here, to run once:
obj.attach(pin);
obj.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=90;i<=180;i++)
{
  obj.write(i);
  delayMicroseconds(2);
}
for(int i=180;i>=90;i--)
{
  obj.write(i);
  delayMicroseconds(2);
}
for(int i=90;i>=0;i--)
{
  obj.write(i);
  delayMicroseconds(2);
}
}
