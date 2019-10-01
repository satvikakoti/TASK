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
    digitalWrite(inputPin1, HIGH);
    digitalWrite(inputPin2, LOW);
    digitalWrite(inputPin3, HIGH);
    digitalWrite(inputPin4, LOW);  
}
