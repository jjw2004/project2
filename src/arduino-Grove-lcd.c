#include "thingProperties.h"
//#include <LiquidCrystal.h>
#define temp_sensor_pin A1
#include <Wire.h>
#include "rgb_lcd.h"


rgb_lcd lcd;


const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
//LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int pResistorPin = A0; // Photoresistor at Arduino analog pin A0
const int ledPin = 9; 
const int threshold = 300; 
const int tempThreshold = 20;//
int seconds = 0;
int value;  // Store value from photoresistor (0-1023)


void setup() {
  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  pinMode(ledPin, OUTPUT);  // Set ledPin - 9 pin as an output
  //analogWrite(A3,);
  lcd.begin(16, 2);
  pinMode(pResistorPin, INPUT);// Set pResistor - A0 pin as an input (optional)
  Serial.begin(9600);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  seconds += 1;
  delay(1000);
  
  lightValue = analogRead(pResistorPin);
  if (lightValue > threshold){
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
  
  Serial.println(lightValue);
  
  
  
  if (temperature > tempThreshold){
    lcd.setCursor(0, 0);
    lcd.print(temperature);
    int r = 255;    // get r
    int g = 0;
    int b = 0;
    
    lcd.setRGB(r, g, b);
  }
  else if(temperature = tempThreshold){
    lcd.setCursor(0, 0);
    lcd.print(temperature);
    int r = 0;    // get r
    int g = 255;
    int b = 0;
  }
  else{
    lcd.setCursor(0, 0);
    lcd.print(temperature);
    int r = 0;    // get r
    int g = 0;
    int b = 255;
  }
  
  
  if (lightValue > threshold){
    light = true;
    lcd.setCursor(0,1);
    lcd.print("lights are on      ");
    int r = 255;    // get r
    int g = 0;
    int b = 0;
    
    lcd.setRGB(r, g, b);
  }
  else{
    light = false;
    lcd.setCursor(0,1);
    lcd.print("lights are off");
  }
  
}
/*
  Since Temperature is READ_WRITE variable, onTemperatureChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onTemperatureChange()  {
  // Add your code here to act upon Temperature change
}
/*
  Since LightValue is READ_WRITE variable, onLightValueChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onLightValueChange()  {
  // Add your code here to act upon LightValue change
}
/*
  Since Light is READ_WRITE variable, onLightChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onLightChange()  {
  // Add your code here to act upon Light change
}