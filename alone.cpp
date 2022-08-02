#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);

String Cau1;
int i;
String cau1_2;
String cau2;
String cau2_2;
String cau3;
String cau3_1;
String cau4;
String cau4_1;
String cau5;
String cau6;
String cau6_1;
String cau7;
String cau7_1;

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
   while (1) {
    Cau1 = (String)("The wind steals");
    for (i = 0; i <= 14; i++) {
      lcd.setCursor(i,0);
      lcd.print(Cau1[i]);
      delay(80);
    }
    cau1_2 = (String)("plants");
    for (i = 0; i <= 5; i++) {
      lcd.setCursor(6+i,1);
      lcd.print(cau1_2[i]);
      delay(80);
    }
    delay(300);
    lcd.clear();
    cau2 = (String)("Hands hold the");
    for (i = 0; i <= 13; i++) {
      lcd.setCursor(1+i,0);
      lcd.print(cau2[i]);
      delay(60);
    }
    cau2_2 = (String)("pedals of love");
    for (i = 0; i <= 13; i++) {
      lcd.setCursor(i,1);
      lcd.print(cau2_2[i]);
      delay(60);
    }
    delay(1500);
    lcd.clear();
    cau3 = (String)("Though hunderd");
    for (i = 0; i <= 13; i++) {
      lcd.setCursor(1+i,0);
      lcd.print(cau3[i]);
      delay(60);
    }
    cau3_1 = (String)("years");
    for (i = 0; i <= 4; i++) {
      lcd.setCursor(6+i,1);
      lcd.print(cau3_1[i]);
      delay(60);
    }
    delay(1150);
    lcd.clear();
    cau4 = (String)("Love still goes");
    for (i = 0; i <= 14; i++) {
      lcd.setCursor(i,0);
      lcd.print(cau4[i]);
      delay(40);
    }
    cau4_1 = (String)("back with tears");
    for (i = 0; i <= 14; i++) {
      lcd.setCursor(i,1);
      lcd.print(cau4_1[i]);
      delay(40);
    }
    delay(2200);
    lcd.clear();
    cau5 = (String)("Boats out to sea");
    for (i = 0; i <= 15; i++) {
      lcd.setCursor(i,0);
      lcd.print(cau5[i]);
      delay(90);
    }
    delay(900);
    lcd.clear();
    cau6 = (String)("catch invisible");
    for (i = 0; i <= 12; i++) {
      lcd.setCursor(1+i,0);
      lcd.print(cau6[i]);
      delay(80);
    }
    delay(200);
    cau6_1 = (String)("waves");
    for (i = 0; i <= 4; i++) {
      lcd.setCursor(6+i,1);
      lcd.print(cau6_1[i]);
      delay(90);
    }
    delay(2000);
    lcd.clear();
    cau7 = (String)("At a place,");
    for (i = 0; i <= 10; i++) {
      lcd.setCursor(3+i,0);
      lcd.print(cau7[i]);
      delay(200);
    }
    cau7_1 = (String)("far and far away...");
    for (i = 0; i <= 15; i++) {
      lcd.setCursor(i,1);
      lcd.print(cau7_1[i]);
      delay(200);
    }
    lcd.clear();
    lcd.setCursor(6,0);
    lcd.print(".....");
    delay(7000);
    lcd.clear();
  }

}