/* Chương trình dưới đây sẽ đếm xem bạn nhấn nút nhấn bao nhiêu lần */

int pushButton = 7;

void setup() {
  Serial.begin(115200);
  pinMode(pushButton, INPUT);

}

int demSoLanNhan = 0;
bool daNhanOk = false;
int buttonState;

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
  delay(10);
}
