#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT); 
  count = toggle =0;
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

void loop() {
  count += 1;
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(100);
  while (count >10);
  digitalWrite(PIN_LED, 1);
  
}

int toggle_state(int toggle) {
  return !toggle;
}
