//ブザー関係
void buzz_ON()   //ブザーを鳴らす
{
    for(int i=0;i<100;i++)
  {
   digitalWrite(buzzerPin,LOW);
   delay(2);//wait for 1ms
   digitalWrite(buzzerPin,HIGH);
   delay(2);//wait for 1ms
  }

}
void buzz_OFF()  //ブザーを止める
{
  digitalWrite(buzzerPin, HIGH);
}

void alarm_A(){ //追加のブザーの音色
  for(int i=0; i<4; ++i){
   buzz_ON();
   buzz_OFF();
   delay(200);    
  };
}
void alarm_B(){ //追加のブザーの音色
  for(int i=0; i<2; ++i){
    for(int i=0; i<2; ++i){
     digitalWrite(buzzerPin,LOW);
     delay(100);
     digitalWrite(buzzerPin,HIGH);
     delay(50);
    };
    delay(100);
  };
}
