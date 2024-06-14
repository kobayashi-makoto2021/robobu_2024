#define BuzzerPin 13 //ブザーのピン設定

void setup() {
  // put your setup code here, to run once:
  pinMode(BuzzerPin, OUTPUT);
  digitalWrite(BuzzerPin, HIGH);
  Serial.begin(9600);
  for (int i=0; i<10; ++i){
    Serial.println(i);
    digitalWrite(BuzzerPin, LOW);
    delay(500);
    digitalWrite(BuzzerPin, HIGH);
    delay(500);
    digitalWrite(BuzzerPin, LOW);
  };
  digitalWrite(BuzzerPin, HIGH);
  // int j;
  // while(j<10){
  //   Serial.println(j);
  //   ++j;
  //   // if(j==7){
  //   //   break;
  //   // }
  // }
}

void loop() {
  // put your main code here, to run repeatedly:

}
