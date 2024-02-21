
//SER_Temperature_MCP9701_UNO_1


//インクルド
#include <Arduino.h>
#include "Temperature_MCP9701.h"


//初期化処理
void setup()
{

  //シリアルの初期化
  Serial.begin(9600);

} //setup


//メインループ
void loop()
{

  //センサーの値を読み込む
  int Sensor = analogRead(A0); // センサーの読み取り値

  //温度の表示
  float Voltage = Sensor * ( 5.0 / 1024.0 );
  float Temperature = Temperature_MCP9701(Voltage);
  Serial.println(Temperature);

  //1秒の待ち
  delay(1000);

} //loop
