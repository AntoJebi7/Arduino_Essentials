#include <Servo.h>

Servo servost;

const int servopin = 9;
const int flexPin1 = A0;
int flexvalue;
int a;
void setup() {
  servost.attach(servopin);
  Serial.begin(9600);
  
}

void loop() {
  flexvalue = analogRead(flexPin1); 
  Serial.println(flexvalue);
  a = map(flexvalue, 50, 300, 0, 180);
  servost.write(a); 
  delay(1000);
}
