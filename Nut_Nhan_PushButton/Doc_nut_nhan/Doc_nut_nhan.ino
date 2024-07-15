/* Nhấn nút thì cửa sổ Serial in ra số 1, còn không nhấn nút thì cửa sổ Serial in ra số 0 */

int pinPushButton = 7;

void setup() {
  Serial.begin(115200);
  pinMode(pinPushButton, INPUT);
}

void loop() {
  int buttonState = digitalRead(pinPushButton);
  Serial.println(buttonState);
  delay(50);
}