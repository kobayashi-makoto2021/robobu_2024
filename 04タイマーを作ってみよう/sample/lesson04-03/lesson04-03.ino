// 少数で秒を数えるタイマー
// 途中経過も表示する
float count = 0; //変数の設定 :整数の入る（float）名前「count」という変数を値を0で作る
char ch ; //変数の設定 :文字の入る（char）名前「ch」という変数を作る。値はなし。
bool flg = false; //変数の設定:計時をしているかどうかのフラグ。してるならtrue。してないならfalse。ブーリアン型(bool)

void setup() {
  Serial.begin(9600);
  Serial.println("Yを押してタイマースタート");
}
void loop() {
  if(flg == true){
    // Serial.print(ch);
    Serial.print(count);
    Serial.println(" 秒");
  }
    if (Serial.available()) {
      ch = Serial.read();   
      if (ch == 'y' ||  ch == 'Y') {
        Serial.println("タイマーON");
        Serial.println("タイマーを止めるにはNを押してください");
        count = 0;
        flg = true; //フラグの切り替え
      }
      if (ch == 'n' ||  ch == 'N') {
        Serial.println("タイマーOFF");
        Serial.println("Yを押してタイマースタート");
        Serial.print(count);
        Serial.println(" 秒");
        count = 0;
        flg =false; //フラグの切り替え
      }
    // }
  // } else {
  //   ch = '+';
  }
  delay(10);// 0.01秒待つ
  count += 0.01; // countを0.01ずつ増加
}
