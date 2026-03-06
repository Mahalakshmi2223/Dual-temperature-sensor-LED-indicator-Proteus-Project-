#include <LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() 
{

lcd.begin(16, 2);
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("analog Read");
delay(1000);

}

void loop() 
{
 
float a = analogRead(A0);
a=(a/1023)*5;
a=a*100;

float b = analogRead(A1);
b=(b/1023)*5;
b=b*100;
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("Analog1:");
lcd.print(a);
lcd.setCursor(0, 1);
lcd.print("Analog2:");
lcd.print(b);
delay(1000);
if(a>b)
{
  digitalWrite(3,HIGH);

}
else
{
  digitalWrite(3,LOW);

}


}