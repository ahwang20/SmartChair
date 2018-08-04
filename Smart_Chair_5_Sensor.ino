# include <SoftwareSerial.h>
SoftwareSerial btSerial(7,8);

int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;
int ledPin5 = 9;
int sensor1 = A0;
int sensor2 = A1;
int sensor3 = A2;
int sensor4 = A3;
int sensor5 = A5;
int sensorValue1;
int sensorValue2;
int sensorValue3;
int sensorValue4;
int sensorValue5;

void setup()
{
  Serial.begin(9600);
  btSerial.begin(9600);
  pinMode(ledPin1 = 13, OUTPUT);
  pinMode(ledPin2 = 12, OUTPUT);
  pinMode(ledPin3 = 11, OUTPUT);
  pinMode(ledPin4 = 10, OUTPUT);
  pinMode(ledPin5 = 9, OUTPUT);
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
  
  if(sensorValue1>150)
  {
    digitalWrite(ledPin1, HIGH);
  }
  else
  {
    digitalWrite(ledPin1, LOW);
  }


  if(sensorValue2>150)
  {
    digitalWrite(ledPin2, HIGH);
  }
  else 
  {
    digitalWrite(ledPin2, LOW);
  }
  
  if(sensorValue3>150)
  {
    digitalWrite(ledPin3, HIGH);
  }
  else
  {
    digitalWrite(ledPin3, LOW);
  }

  if(sensorValue4>150)
  {
    digitalWrite(ledPin4, HIGH);
  }
  else
  {
    digitalWrite(ledPin4, LOW);
  }

  if(sensorValue5>150)
  {
    digitalWrite(ledPin5, HIGH);
  }
  else
  {
    digitalWrite(ledPin5, LOW);
  }
}

