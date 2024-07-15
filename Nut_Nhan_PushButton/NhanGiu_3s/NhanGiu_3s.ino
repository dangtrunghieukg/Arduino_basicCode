/* Nhấn và giữ nút nhân 3 giây thì đèn led sáng, nhấn giữ 3 giây nữa thì nó tắt 
*/
int pinPushButton = 7;
int pinLED = 6;
bool LED_Ok = false;
int timePush = 0;

void setup() {
  pinMode(pinPushButton, INPUT);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  int pushButtonState = digitalRead(pinPushButton);
  while (pushButtonState == 1) {
    timePush += 10;
    pushButtonState = digitalRead(pinPushButton);
    if(timePush > 3000){
      LED_Ok = !LED_Ok;
      timePush = 0;
      break;
    }
    delay(10);
  }
  digitalWrite(pinLED, LED_Ok);
}