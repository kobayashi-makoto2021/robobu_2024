// Arduinoにはたくさんのピンを指す穴があります。
// この穴から配線をして様々な電子機器を動かすことができます。
// これらのピンの約束事を「GPIO」と呼びます。
// 英語では「"General-purpose input/output"」といい、この頭文字を取ってGPIOというのですね。
// ArduinoのGPIOは5Vほどの電圧をかけるOUTPUTモードと回路の電圧の情報を取り出すINPUTモードがあります。
// 今回のレッスンではそのピンの設定をブザーとArduino本体付属のLEDを使って学んでいきましょう。

// レッスンで使うAruduino UNOには13個のデジタルピンと10個のアナログピンが組み込まれています。
// 今回のレッスンではデジタルピンについて学んでいきます。

// デジタルとは？
// デジタル品のデジタルとは電圧がかかっているかいないかで表す、ということです。
// 電圧には中途半端な3.2Vとか0.2Vとかの数値として測定されるわけですが、
// これを単純化して電圧がかかっているかいないかの2つの値で受け取るということになります。
// デジタルピンには0Vから5Vの電圧がかかりますが、LOWであればゼロV、HIGHであれば5Vの電圧が
// 掛かっていると考えて良いです。

// ブザーについて
// 教材に付属しているのブザーは「パッシブブザー」という種類のブザーで、電圧がかかると音が止まり、
// 電圧はかからないときに音がなるという種類のブザーになります。+

// pinMode(ピン番号, [ OUTPUT/INPUT ]);
// Aruduinoにピンの設定をする。一回だけ実行すればいいのでsetup()の中で行う


int BuzzerPin = 13; // ブザーピンの設定

void setup() {
  // put your setup code here, to run once:
  pinMode(BuzzerPin, OUTPUT);
  digitalWrite(BuzzerPin, HIGH); // ブザーの音を止める
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(BuzzerPin, LOW); // ブザーの音を鳴らす
  delay(500);
  digitalWrite(BuzzerPin, HIGH); // ブザーの音を止める
  delay(500);
}
