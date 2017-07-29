#define leftMotF 4
#define leftMotB 5
#define leftMotRPM 6

#define rightMotF 2
#define rightMotB 3
#define rightMotRPM 7

void setup() {
 Serial.begin(9600);
  pinMode(leftMotF,OUTPUT);
  pinMode(leftMotB,OUTPUT);
  pinMode(leftMotRPM,OUTPUT);
  pinMode(rightMotF,OUTPUT);
  pinMode(rightMotB,OUTPUT);
  pinMode(rightMotRPM,OUTPUT);
}

void loop() {  
  analogWrite(leftMotRPM, 0);
  analogWrite(rightMotRPM, 255);
  digitalWrite(leftMotF , HIGH);
  digitalWrite(leftMotB , LOW);
  digitalWrite(rightMotF , HIGH);
  digitalWrite(rightMotB , LOW); 
}
