#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
  lcd.init();
  lcd.backlight();
  
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Today : 150kW");
  lcd.setCursor(0,1);
  lcd.print("Ave : 140kW");
}
