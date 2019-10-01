int inputPin1  = 4;  
 int inputPin2  = 5;   
 int inputPin3  = 6;  
 int inputPin4  = 7;   
int enable=8;

void setup() 
{
  Serial.begin(9600);
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
    pinMode(inputPin3, OUTPUT);
    pinMode(inputPin4, OUTPUT); 
  digitalWrite(enable,HIGH);
}

void loop() 
{
  while(Serial.available()!=0)
  {
  char ch=Serial.read();
  if(ch=='f')
  {
    digitalWrite(inputPin1, HIGH);
    digitalWrite(inputPin2, LOW);
    digitalWrite(inputPin3, HIGH);
    digitalWrite(inputPin4, LOW);
  }
  else if(ch=='b')
  {  
    digitalWrite(inputPin1, LOW);
    digitalWrite(inputPin2, HIGH);
    digitalWrite(inputPin3, LOW);
    digitalWrite(inputPin4, HIGH);
  }
  else if(ch=='s')
  {
    digitalWrite(inputPin1, LOW);
    digitalWrite(inputPin2, LOW);
    digitalWrite(inputPin3, LOW);
    digitalWrite(inputPin4, LOW);
  }
  }
}
