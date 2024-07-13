#include <Servo.h>
#define servoPin 9 //サーボモーターのピンを設定
Servo myservo; //サーボモーターのインスタンスを作成

void setup()
{
  myservo.attach(servoPin); //サーボモーターのピンをインスタンスに設定
}

void loop() {
  myservo.write(45);  // サーボモータの角度を指定 ※無限回転サーボの場合は速度と向きの指定 90を停止、0と180度で逆回転の最高速
  delay(1000);
  myservo.write(135); //サーボモータの角度を指定　同上
  delay(1000);
}