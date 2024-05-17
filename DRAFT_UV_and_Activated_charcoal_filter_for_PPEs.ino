int uv = 6;
int led = 7;
int airIn = 9;
int airOut = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}

void initiateOn(){
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(100);
}

void motorsOn(){
  digitalWrite(uv,HIGH);
  digitalWrite(led,LOW);
  digitalWrite(airIn,HIGH);
  digitalWrite(airOut,HIGH);
  delay(3000);
  digitalWrite(led,HIGH);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int x = 0; x < 20; x++){
  initiateOn();
  }
start:
motorsOn();
goto start;
}
