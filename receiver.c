#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
String data;
void setup() {

  Serial.begin(4800);
  lcd.begin(16,2);

  lcd.clear();
  lcd.print("LIFI DATA");
  lcd.setCursor(0,1);
  lcd.print("RECEIVER");
  delay(1000);

}

void loop() {
 if(Serial.available()>0)
 {
  data=Serial.readString();
  data.trim();
  Serial.println(data);
  lcd.clear();
  lcd.print(data);
   delay(1000);
 }

}
