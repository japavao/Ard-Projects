

const int LED = 13;
const int ON = 1000;
const int OFF = 250;

void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  digitalWrite(LED,HIGH);
  delay(ON);
  digitalWrite(LED, LOW);
  delay(OFF);
  
}
