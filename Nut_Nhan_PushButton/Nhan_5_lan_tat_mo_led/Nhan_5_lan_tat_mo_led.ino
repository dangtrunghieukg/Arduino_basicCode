/* Nhấn 5 lần đèn sáng, nhấn nút nhấn 5 lần nữa đèn sẽ tắt */

int pushButton = 7;
int ledPin = 6;

void setup() {
  Serial.begin(115200);
  pinMode(pushButton, INPUT);
  pinMode(ledPin, OUTPUT);

}

int demSoLanNhan = 0;
bool daNhanOk = false;
int buttonState;
bool ledState = 0;

void loop() {
  buttonState = digitalRead(pushButton);

  while (buttonState == 1) {
    buttonState = digitalRead(pushButton);
    if (buttonState == 0) {
      demSoLanNhan++;
      daNhanOk = true;
    }
  }
  if (daNhanOk == true) {
    Serial.println("Đã nhấn " + String(demSoLanNhan) + " lần");
    daNhanOk = false;
  }
  if (demSoLanNhan >= 5) {
    ledState = !ledState;
    demSoLanNhan = 0;
  }
  digitalWrite(ledPin, ledState);
  delay(10);
}
