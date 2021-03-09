#define triggerL 2
#define echoL 3
#define ledL 4
#define triggerR 7
#define echoR 6
#define ledR 8
float time=0,distance=0;
void setup()
{
 Serial.begin(9600);
 pinMode(triggerL,OUTPUT);
 pinMode(echoL,INPUT);
 pinMode(triggerR,OUTPUT);
 pinMode(echoR,INPUT);
 pinMode(ledL,OUTPUT);
 pinMode(ledR,OUTPUT);
}
 
void loop()
{
 digitalWrite(triggerL,LOW);
 delayMicroseconds(2);
 digitalWrite(triggerL,HIGH);
 delayMicroseconds(10);
 digitalWrite(triggerL,LOW);
 delayMicroseconds(2);
 time=pulseIn(echoL,HIGH);
 distance=time*340/20000;
 if(distance<=30)
 {
  Serial.println("1");
  digitalWrite(ledL,HIGH);
  delay(100);
  digitalWrite(ledL,LOW);
 }
 digitalWrite(triggerR,LOW);
 delayMicroseconds(2);
 digitalWrite(triggerR,HIGH);
 delayMicroseconds(10);
 digitalWrite(triggerR,LOW);
 delayMicroseconds(2);
 time=pulseIn(echoR,HIGH);
 distance=time*340/20000;
 if(distance<=30)
 {
  Serial.println("0");
  digitalWrite(ledR,HIGH);
  delay(100);
  digitalWrite(ledR,LOW);
 }
 delay(200);
}
