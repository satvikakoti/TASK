int pin=8;

void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<=255;i=i+5)
analogWrite(pin,i);

for(int j=255;j>=0;j=j-5)
analogWrite(pin,j);

}
