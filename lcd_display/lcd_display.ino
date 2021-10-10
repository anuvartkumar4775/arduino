

#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
// en-3, rs-2, Db11-4, Db12-5, Db13-6, Db14-7

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("hello");
  lcd.setCursor(0,1);
  lcd.print("ANUVART KUMAR");
  delay(5000);
  lcd.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("ANUVART");
  lcd.setCursor(0,1);
  delay(1000);
  lcd.println("KUMAR");
  lcd.setCursor(1,1);
  delay(1000);
  lcd.clear();
  }
