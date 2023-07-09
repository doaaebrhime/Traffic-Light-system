int RED=1;
int GREEN=2;
int YELLOW=3;
void setup() {
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(YELLOW,OUTPUT);
}
void loop() {
  digitalWrite(RED,HIGH);
  delay(500);
  digitalWrite(YELLOW,HIGH);
  delay(1000);
   digitalWrite(YELLOW,LOW);
  delay(500);
  digitalWrite(YELLOW,HIGH);
  delay(1000); 
  digitalWrite(YELLOW,LOW);
  delay(500);
  digitalWrite(YELLOW,HIGH);
  delay(1000);
  digitalWrite(YELLOW,LOW);
  delay(500);
  digitalWrite(GREEN,HIGH);
  delay(1500);
  digitalWrite(GREEN,LOW);
  delay(1500);
}
