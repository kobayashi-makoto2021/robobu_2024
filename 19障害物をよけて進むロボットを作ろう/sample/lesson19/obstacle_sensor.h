//障害物センサーを扱う関数
String check_obstacle(){ 
  //左右の障害物センサーの完治した結果をテキストで返す関数
  //0:感知なし
  //1:障害物を感知
  int Obstacle_L = digitalRead(LeftObstacleSensor);
  int Obstacle_R = digitalRead(RightObstacleSensor);
  String result = "";
  if(Obstacle_L == LOW){
      result += "1";
    } 
    else 
    {
      result += "0";
    };
  if(Obstacle_R == LOW){
      result += "1";
    } 
    else 
    {
      result += "0";
    };
  Serial.println(result);
  return result;
}

bool is_obstacle(){
  String result = check_obstacle();
  if(result == "11"){return true;}
  else {return false;};
}
