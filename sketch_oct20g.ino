#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte mFace[8] = {
    B00000,B01010,B10101,B00000,B00100,B10001,B01110,B00000,
  };

void setup() {
  // put your setup code here, to run once:
  lcd.createChar(0, mFace);
  lcd.begin(16,2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.setCursor(7,0);
  
}
