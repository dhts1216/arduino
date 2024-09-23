const int LED = 7;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, LOW);
  delay(1000);
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
  }
  digitalWrite(LED, HIGH);
  while(1) {}
}
