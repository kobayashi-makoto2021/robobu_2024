//ライブラリの読み込み
//フォルダ内のライブラリの読み込み
#include "pin_setup.h"
#include "motor.h"
#include "init_GPIO.h"
#include "obstacle_sensor.h"
#include "buzzer.h"

//パラメータの設定
#define speed_foward 100 //前進するスピード
#define speed_back 100 //バックするスピード
#define speed_turn 100 //向きを変えるスピード
#define time_back 500 //バックする時間
#define time_turn 300 //向きを変える時間


void setup(){
  // setup()は起動時に1回だけ実行されるプログラムです。
  init_GPIO();
  alarm_A();
  delay(1000);
  alarm_B();
}

void loop() {
  //loop()はsetup()が実行された後、繰り返し実行されるプログラムです。
  //今回は後ろ向きに進むロボットなのでパワーのマイナスが前進になります。
  turn(-1 *speed_foward, -1 *speed_foward);//何もないときは前進
  if(check_obstacle()=="11"){ //両方のセンサーで物体を感知したとき
    stop_Stop();
    alarm_B();
    turn(speed_back, speed_back, time_back);
    turn(speed_turn, -1*speed_turn, time_turn); 
  };
  if(check_obstacle()=="10"){ //左のセンサーで物体を感知したとき
    stop_Stop();
    alarm_B();
    turn(speed_back, speed_back, time_back);
    turn(speed_turn, -1*speed_turn, time_turn);
  }
  if(check_obstacle()=="01"){ //右のセンサーで物体を感知したとき
    stop_Stop();
    alarm_B();
    turn(speed_back, speed_back, time_back);
    turn(-1*speed_turn, speed_turn, time_turn);
  }
} 

//注意点
//直射日光の下ではうまく作動しないので注意。障害物センサーが太陽光を感知してしまう。
