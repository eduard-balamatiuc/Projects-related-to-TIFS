#include "DHT.h"
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
byte degree_symbol[8] =
              {
                0b00111,
                0b00101,
                0b00111,
                0b00000,
                0b00000,
                0b00000,
                0b00000,
                0b00000
              };
#define DHTPIN1 5

#define DHTPIN2 9

#define DHTTYPE DHT11

DHT dht1(DHTPIN1, DHTTYPE);
DHT dht2(DHTPIN2, DHTTYPE);


void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht1.begin();
  dht2.begin();
}

void loop() {
 
float h = dht1.readHumidity();
float t = dht1.readTemperature();
 lcd.init();                       // initialize the lcd
 lcd.init();
 lcd.backlight();
 lcd.print("Temp out ");
  lcd.createChar(1, degree_symbol);
 lcd.setCursor(14,0);
 lcd.write(1);
 lcd.print("C");
 lcd.setCursor(0,1);
 lcd.print("Umid out  ");
 lcd.setCursor(14,1);
 lcd.print("%");

 
 lcd.setCursor(9,0);
 lcd.print(t);
 lcd.setCursor(9,1);
 lcd.print(h);
delay(2000);

h = dht2.readHumidity();
t = dht2.readTemperature();
 lcd.init();                       // initialize the lcd
 lcd.init();
 lcd.backlight();
 lcd.print("Temp int ");
 lcd.createChar(1, degree_symbol);
 lcd.setCursor(14,0);
 lcd.write(1);
 lcd.print("C");
 lcd.setCursor(0,1);
 lcd.print("Umid int  ");
 lcd.setCursor(14,1);
 lcd.print("%");

 
lcd.setCursor(9,0);
lcd.print(t);
lcd.setCursor(9,1);
lcd.print(h);
delay(2000);
}
