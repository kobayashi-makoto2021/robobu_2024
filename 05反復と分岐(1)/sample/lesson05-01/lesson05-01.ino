void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i=0; i<10; ++i){
    Serial.println(i);
  }
  int j;
  while(j<10){
    Serial.println(j);
    ++j;
    // if(j==7){
    //   break;
    // }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
