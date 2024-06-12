//初期化
//setup()の中で実行してピンの設定をArduinoに読み込ませます。
void init_GPIO()
{
//シリアルモニターの初期化
  Serial.begin(9600);
//モーター関連のピン設定
  //右のモーター
  pinMode(RightMotorDirPin1, OUTPUT);
  pinMode(RightMotorDirPin2, OUTPUT);
  pinMode(speedPinL, OUTPUT);
  //左のモーター
  pinMode(LeftMotorDirPin1, OUTPUT);
  pinMode(LeftMotorDirPin2, OUTPUT);
  pinMode(speedPinR, OUTPUT);
  stop_Stop();
//障害物センサーのピン設定
  pinMode(RightObstacleSensor,INPUT); 
  pinMode(LeftObstacleSensor,INPUT);
//ブザーのピン設定
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, HIGH);
}
