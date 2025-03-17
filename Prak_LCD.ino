#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2); 
}

void loop() {
  lcd.clear(); 
  lcd.setCursor(0, 0); 
  lcd.print("Raffi Fadlika");
  lcd.setCursor(0, 1); 
  lcd.print("42623002");

  // delay(2000);

  // lcd.clear();
  // lcd.setCursor(0, 0);
  // lcd.print("Andrew Nathanael");
  // lcd.setCursor(0, 1);
  // lcd.print("42623005");

  delay(2000);
}
