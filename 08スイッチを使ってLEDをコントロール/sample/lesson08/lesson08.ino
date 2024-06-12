#define LedPin 2
#define SwitchPin 3

int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedPin, OUTPUT);
  pinMode(SwitchPin, INPUT);
  digitalWrite(LedPin,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(SwitchPin);
  Serial.print(val);
  if(val == 1){
    Serial.println(" : スイッチが押されました");
    } else {
    Serial.println(" : スイッチが押されていません");  
    };
    digitalWrite(LedPin,val);
    delay(500);
}
