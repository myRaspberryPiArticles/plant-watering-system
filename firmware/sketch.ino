#include <LiquidCrystal_I2C.h>

const int BUTTON_PIN = 8;
const int BUTTON_2_PIN = 4;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  init_rgb_led();
  initButtons();
  initDHT();
  initWater();
}


void loop() {

  /*lcd.clear(); 
  lcd.setCursor(0, 0);
  lcd.print(String(i));
  delay(2000);
  i += 1;*/
  buttons();
  //dht11();
  //water();
}