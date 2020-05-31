int trigPin=8,echoPin=10;
double echodist=0.0;
int time=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  pinMode(trigPin,INPUT);
digitalWrite(trigPin,LOW);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
time=pulseIn(echoPin,HIGH);
//v=d/t;d=2*echo
//v*t=2*echo
//echo=((347m/s)*t)/2=(0.0347/2)*t=t/58;
echodist=(0.0347/2.0)*time;
Serial.print("Distance is: ");
Serial.print(echodist);
Serial.println(" cm");
}
