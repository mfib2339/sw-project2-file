#define PIN_LED 7
int brightness = 1;
int fadeAmount = 1;

void setup() {
  pinMode(PIN_LED, OUTPUT);
}


void set_duty(int duty){
  while (true) {
    digitalWrite(PIN_LED, 0);
    delayMicroseconds(duty*20);
    digitalWrite(PIN_LED, 1);
    delayMicroseconds(2000-duty*20);
    return;
  }
}

void set_period(int period){
  set_duty(brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 100) {
    fadeAmount = -fadeAmount;
  }
  delayMicroseconds(period/200);
  return;
}

void loop() {
  set_period(100);
}
  
