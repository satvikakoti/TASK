int pin=9;

void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<=255;i++)
{
analogWrite(pin,i);
delay(1500/255);
}
for(int j=255;j>=0;j--)
{analogWrite(pin,j);
delay(1000/255);
}
}
