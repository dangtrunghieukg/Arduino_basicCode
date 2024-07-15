/* Nhấn nút 1 lần thì đèn sáng, nhấn 1 lần nữa thì đèn tắt */
int pinPushButton = 7;
int pinLED = 6;
bool LED_Ok = false;

void setup() {
  pinMode(pinPushButton, INPUT);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  int pushButtonState = digitalRead(pinPushButton);
  while (pushButtonState == 1) {
    pushButtonState = digitalRead(pinPushButton);
    if (pushButtonState == 0){
      LED_Ok = !LED_Ok;
    }
  }
  digitalWrite(pinLED, LED_Ok);
  delay(100);
}