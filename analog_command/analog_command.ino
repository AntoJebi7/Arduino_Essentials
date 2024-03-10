int pn = 9;
int anh = 155;
int anh3 = 0;
int anh2 = 255;
int delayTime = 1000; // Set the delay time in milliseconds

void setup() {
  pinMode(pn, OUTPUT);
}

void loop() {
  analogWrite(pn, anh);
  delay(delayTime);
  analogWrite(pn, anh3);
  delay(delayTime);
  analogWrite(pn, anh2);
  delay(delayTime);
}
