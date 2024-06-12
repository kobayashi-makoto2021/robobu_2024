//モーターの制御
//モーターを制御してロボットカーを走らせる関数たちです


void set_Motorspeed(int speed_L, int speed_R)
//モーター速度の設定
//第一引数 speed_L: 左のモーターの速度。最大値255
//第二引数 speed_R: 右のモーターの速度。最大値255
{
  analogWrite(speedPinL, speed_L);
  analogWrite(speedPinR, speed_R);
}

void stop_Stop(int time = 0)
//ロボットを止める。引数を設定すると止まっている時間をミリ秒で設定できます。
{
  digitalWrite(RightMotorDirPin1, LOW);
  digitalWrite(RightMotorDirPin2, LOW);
  digitalWrite(LeftMotorDirPin1, LOW);
  digitalWrite(LeftMotorDirPin2, LOW);
  delay(time);
}

void go_Advance(int speed = 200, int time = 0)  
//前に進む関数
//第一引数 speed: モーターの回転の速さ。最大値 255
//第二引数 time : モーターを動かし続ける時間。0を設定すると無制限で動き続ける。
{
  digitalWrite(RightMotorDirPin1, HIGH);
  digitalWrite(RightMotorDirPin2, LOW);
  digitalWrite(LeftMotorDirPin1, HIGH);
  digitalWrite(LeftMotorDirPin2, LOW);
  set_Motorspeed(speed, speed);
  if (time == 0) {
    ;
  } else {
    delay(time);
    stop_Stop();
  }
}
void go_Left(int speed = 200, int time = 0) //左に旋回する関数
//第一引数 speed: モーターの回転の速さ。最大値 255
//第二引数 time : モーターを動かし続ける時間。0を設定すると無制限で動き続ける。
{
  digitalWrite(RightMotorDirPin1, HIGH);
  digitalWrite(RightMotorDirPin2, LOW);
  digitalWrite(LeftMotorDirPin1, LOW);
  digitalWrite(LeftMotorDirPin2, HIGH);
  set_Motorspeed(speed, speed);
  if (time == 0) {
    ;
  } else {
    delay(time);
    stop_Stop();
  }
}
void go_Right(int speed = 200, int time = 0) //右に旋回する関数
//第一引数 speed: モーターの回転の速さ。最大値 255
//第二引数 time : モーターを動かし続ける時間。0を設定すると無制限で動き続ける。
{
  digitalWrite(RightMotorDirPin1, LOW);
  digitalWrite(RightMotorDirPin2, HIGH);
  digitalWrite(LeftMotorDirPin1, HIGH);
  digitalWrite(LeftMotorDirPin2, LOW);
  set_Motorspeed(speed, speed);
  if (time == 0) {
    ;
  } else {
    delay(time);
    stop_Stop();
  }
}
void go_Back(int speed = 200, int time = 0) //後ろに下がる関数
//第一引数 speed: モーターの回転の速さ。最大値 255
//第二引数 time : モーターを動かし続ける時間。0を設定すると無制限で動き続ける。
{
  digitalWrite(RightMotorDirPin1, LOW);
  digitalWrite(RightMotorDirPin2, HIGH);
  digitalWrite(LeftMotorDirPin1, LOW);
  digitalWrite(LeftMotorDirPin2, HIGH);
  set_Motorspeed(speed, speed);
  if (time == 0) {
    ;
  } else {
    delay(time);
    stop_Stop();
  }
}

void turn(int speed_L, int speed_R, int time=0){
//第一引数 speed_L : 左のモーターの速さ。範囲は-255から255
//第二引数 speed_R : 右のモーターの速さ。範囲は-255から255
  if(speed_L >= 0){
    digitalWrite(LeftMotorDirPin1, HIGH);
    digitalWrite(LeftMotorDirPin2, LOW);    
  } else {
    digitalWrite(LeftMotorDirPin1, LOW);
    digitalWrite(LeftMotorDirPin2, HIGH);
    speed_L = - speed_L;
  };
  if(speed_R >= 0){
    digitalWrite(RightMotorDirPin1, HIGH);
    digitalWrite(RightMotorDirPin2, LOW);    
  } else {
    digitalWrite(RightMotorDirPin1, LOW);
    digitalWrite(RightMotorDirPin2, HIGH);
    speed_R = - speed_R;
  };  
  set_Motorspeed(speed_L, speed_R);
  if (time == 0) {
    ;
  } else {
    delay(time);
    stop_Stop();
  }
}
