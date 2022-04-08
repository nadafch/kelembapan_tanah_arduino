#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
const int sensorPin = A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Tancapkan");
  lcd.setCursor(0, 1);
  lcd.print("sensor");
  delay(1500);
}

void loop() {
  // put your main code here, to run repeatedly:
float kelembaban_tanah;
  int nilaiADC = analogRead(sensorPin);
  kelembaban_tanah = (100 - ((nilaiADC /1023.00)* 100));

  lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Kelembapan:");
    lcd.setCursor(0, 1);
    lcd.print(kelembaban_tanah);
    lcd.print("%");
    delay(1000);
//  Serial.print("Kelembaban tanah = ");
//  Serial.print();
//  Serial.print("%\n\n");
//  delay(1000);
}
