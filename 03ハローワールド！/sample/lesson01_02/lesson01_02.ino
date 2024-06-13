void setup() {
  // put your setup code here, to run once:
  // (日本語訳)最初に一度だけ動かすプログラムはここに書く
  Serial.begin(9600); // シリアルポートを使うための準備
  Serial.println("テキストにある計算結果を表示してみるよ！");
  Serial.print("2 + 3 * 2) = ");
  Serial.println(2 + 3 * 2);
  Serial.print("2 * 3) = ");
  Serial.println(2 * 3);
  Serial.print("((1 + 2) *3) / 3 = ");
  Serial.println(((1 + 2) *3) / 3);



}
void loop() {
  // put your main code here, to run repeatedly:
  // (日本語訳)繰り返して動かすプログラムはここに書く
  Serial.println("できたかな？");
  //シリアルは「Hello World！」という文字列を出力します
  delay(5000);
  // 5秒待機させます（この数値を変更して時間を設定することができます）
}
