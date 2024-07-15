/* Nhấn và giữ nhấn nút thì đèn sáng, buôn ra thì đèn tắt */

int pinPushButton = 7;
int pinLED = 6;

void setup() {
  Serial.begin(115200);
  pinMode(pinPushButton, INPUT);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  int pushButtonState = digitalRead(pinPushButton);
  while (pushButtonState == 1){
    digitalWrite(pinLED, HIGH);
    pushButtonState = digitalRead(pinPushButton);
  }
  digitalWrite(pinLED, LOW);
  delay(50);
}