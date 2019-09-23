/*
 * digitalWrite(pinNumer,LOW/HIGH)
 * delay(TimeInms)
 * pinMode(pinNumber,INPUT/OUTPUT)
 */
 int pin=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,LOW);
  delay(1500);
  digitalWrite(8,HIGH);
  delay(1000);
}
