#include <LiquidCrystal.h>

// Initialize LCD: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(13, 11, 5, 4, 7, 1);

const int sensorPin = A0;
float temperatureC;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temp: ");
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  temperatureC = sensorValue * (5.0 / 1023.0) * 100;

  lcd.setCursor(6, 0);
  lcd.print("      ");              // clear area
  lcd.setCursor(6, 0);
  lcd.print(temperatureC, 1);       // one decimal place
  lcd.print(" C");

  delay(1000);
}
