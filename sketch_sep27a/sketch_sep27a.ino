int pin[8]={3,4,5,6,7,9,10,11};
int value=0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
for(int j=0;j<8;j++)
pinMode(pin[j],INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<8;i++)
  {
digitalRead(pin[i]);
delayMicroseconds(5);
value=digitalRead(pin[i]);
delayMicroseconds(2);
if(value==HIGH)
Serial.println("White");
else
Serial.println("Others");

  }
}
