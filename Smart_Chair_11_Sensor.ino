# include <SoftwareSerial.h>
SoftwareSerial btSerial(7,8);

int sensor1 = A0;
int sensor2 = A1;
int sensor3 = A2;
int sensor4 = A3;
int sensor5 = A5;
int sensor6 = A6;
int sensor7 = A7;
int sensor8 = A8;
int sensor9 = A9;
int sensor10 = A10;
int sensor11 = A11;
int sensorValue1;
int sensorValue2;
int sensorValue3;
int sensorValue4;
int sensorValue5;
int sensorValue6;
int sensorValue8;
int sensorValue9;
int sensorValue10;
int sensorValue11;

void setup()
{
  Serial.begin(9600);
  btSerial.begin(9600);
 
}
void loop()
{
  sensorValue1 = analogRead(sensor1); // read the sensorValue A0
  btSerial.println(sensorValue1); // print the A0 signal
  Serial.print("     sensorValue1 : ");
  Serial.print(sensorValue1);
  delay(500);
  
  sensorValue2 = analogRead(sensor2); 
  btSerial.println(sensorValue2);
  Serial.print("     sensorValue2 : ");
  Serial.print(sensorValue2);
  delay(500);

  sensorValue3 = analogRead(sensor3);
  btSerial.println(sensorValue3);
  Serial.print("     sensorValue3 : ");
  Serial.print(sensorValue3);
  delay(500);

  sensorValue4 = analogRead(sensor4);
  btSerial.println(sensorValue4);
  Serial.print("     sensorValue4 : ");
  Serial.print(sensorValue4);
  delay(500);

  sensorValue5 = analogRead(sensor5);
  btSerial.println(sensorValue5);
  Serial.print("     sensorValue5 : ");
  Serial.println(sensorValue5);
  delay(500);
  
  sensorValue6 = analogRead(sensor6);
  btSerial.println(sensorValue6);
  Serial.print("     sensorValue6 : ");
  Serial.println(sensorValue6);
  delay(500);

  sensorValue7 = analogRead(sensor7);
  btSerial.println(sensorValue7);
  Serial.print("     sensorValue7 : ");
  Serial.println(sensorValue7);
  delay(500);

  sensorValue8 = analogRead(sensor8);
  btSerial.println(sensorValue8);
  Serial.print("     sensorValue8 : ");
  Serial.println(sensorValue8);
  delay(500);

  sensorValue9 = analogRead(sensor9);
  btSerial.println(sensorValue9);
  Serial.print("     sensorValue9 : ");
  Serial.println(sensorValue9);
  delay(500);

  sensorValue10 = analogRead(sensor10);
  btSerial.println(sensorValue10);
  Serial.print("     sensorValue10 : ");
  Serial.println(sensorValue10);
  delay(500);

  sensorValue11 = analogRead(sensor11);
  btSerial.println(sensorValue11);
  Serial.print("     sensorValue11 : ");
  Serial.println(sensorValue11);
  delay(500);
}

