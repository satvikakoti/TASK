//#include<SoftwareSerial.h>
//int txpin1,rxpin1;
//SoftwareSerial obj=SoftwareSerial(rxpin,txpin);

void setup() {
  // put your setup code here, to run once:
Serial1.begin(38400);
Serial.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()!=0)
{
   //char ch=Serial.read();
  //Serial1.write("Hello");
  Serial1.write(Serial.read());
}

while(Serial1.available()!=0)
{
   //char ch1=Serial1.read();
  //Serial.write("How r u?");
    Serial.print((char)Serial1.read());
  }
}
