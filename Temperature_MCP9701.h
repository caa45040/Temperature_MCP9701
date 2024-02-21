
// Temperature_MCP9701.h 
//
// ex 3.3V analogReadResolution(12);
//         float Sensor = analogRead(A2);
//         float Voltage = Sensor * ( 3.3 / 4096.0 );
//         float Temperature = Temperature_MCP9701(Voltage);
//
float Temperature_MCP9701(float Voltage){

  return((Voltage - 0.4) * (1.0 / 0.0195));

}//Temperature_MCP9701
