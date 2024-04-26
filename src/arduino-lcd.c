#include "thingProperties.h"
#include <LiquidCrystal.h>
#define temp_sensor_pin A1
int Contrast = 0;

const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
//LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int pResistorPin = A0; // Photoresistor at Arduino analog pin A0
const int ledPin = 9; 
const int threshold = 300;  //Threshold for the photoresitor to compare to
int seconds = 0;
int value;          // Store value from photoresistor (0-1023)


void setup() {
  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  pinMode(ledPin, OUTPUT);  // Set ledPin - 9 pin as an output
  analogWrite(A3, Contrast);
  //lcd.begin(16, 2);
  pinMode(pResistorPin, INPUT);// Set pResistor - A0 pin as an input
  Serial.begin(9600);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  seconds += 1;
  delay(1000);
  
  value = analogRead(pResistorPin);
  if (value > threshold){
    digitalWrite(ledPin, LOW); 
  }
  else{
    digitalWrite(ledPin, HIGH);
  }
  
  int sensor_data = analogRead(temp_sensor_pin);
  temperature =  ( 4.4 * sensor_data * 26) / 1024.0;


  Serial.print("Current Temperature: ");
  Serial.println(temperature);

  delay(2000);
  
  Serial.println(value);
  
 //  lcd.setCursor(0, 0);
 // lcd.print(temperature);
  
  if (value > threshold){
    //lcd.setCursor(0, 1);
    //lcd.print("Lights ON     :)");
  }
  else{
    //lcd.setCursor(0, 1);
    //lcd.print("Lights OFF   ");
  }
  
}
/*
  Since Temperature is READ_WRITE variable, onTemperatureChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onTemperatureChange()  {
  // Add your code here to act upon Temperature change
}