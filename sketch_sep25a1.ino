const int led=13;
const int ldr=A10;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(ldr,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int brightness=analogRead(ldr);
if(brightness>=200)
{
  Serial.println("LED is OFF");
  digitalWrite(led,OUTPUT);
}
else
{
  Serial.println("LED is ON");
  digitalWrite(led,INPUT);
}
}
