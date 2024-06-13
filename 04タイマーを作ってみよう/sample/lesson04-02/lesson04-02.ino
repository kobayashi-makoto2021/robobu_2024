// 少数で秒を数えるタイマー
float count = 0; //変数の設定 :整数の入る（float）名前「count」という変数を値を0で作る
char ch ; //変数の設定 :文字の入る（char）名前「ch」という変数を作る。値はなし。

void setup() {
  Serial.begin(9600);
  Serial.println("Yを押してタイマースタート");
}
void loop() {
  if (Serial.available()) {
    ch = Serial.read();   
    if (ch == 'y' ||  ch == 'Y') {
      Serial.println("タイマーON");
      Serial.println("タイマーを止めるにはNを押してください");
      count = 0;
    }
    if (ch == 'n' ||  ch == 'N') {
      Serial.println("タイマーOFF");
      Serial.print(count);
      Serial.println(" 秒");
      Serial.println("Yを押してタイマースタート");
      count = 0;
    }
  }
  delay(10);// 0.01秒待つ
  count += 0.01; // countを0.01ずつ増加
}
