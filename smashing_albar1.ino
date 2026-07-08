
/*
// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
    pinMode(2, OUTPUT);

}


void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);

  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);   */
  
  //delay(1000); }// Wait for 1000 millisecond(s)



#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(9);
  servo2.attach(11);
  servo3.attach(6);
  servo4.attach(10);

  // Sweep لمدة ثانيتين تقريبًا
  for (int pos = 0; pos <= 180; pos++) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    delay(11);
  }

  // تثبيت كل السيرفوهات على 90 درجة
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {
  // فاضي عشان ما يعيد الحركة
}

