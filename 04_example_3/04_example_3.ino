#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(LED_BUILTIN, toggle);
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(LED_BUILTIN, toggle);
  delay(1000);
}

int toggle_state(int toggle) {
  if (toggle == 0) return 1;
  else return 0;
}
