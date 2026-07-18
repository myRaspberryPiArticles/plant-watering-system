#include "DHT.h"

#define DHTPIN 2 
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void initDHT() {
  Serial.begin(9615);
  dht.begin();
}

void dht11() {
  // Wait a few seconds between measurements.
  delay(2000);

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;

  }
  lcd.clear(); 
  lcd.setCursor(0, 0);
  lcd.print(F("Humidity: "));

  lcd.setCursor(10, 0);
  lcd.print(h * 2);

  lcd.setCursor(15, 0);
  lcd.print("%");
//_______________________________
  lcd.setCursor(0, 1);
  lcd.print(F("Temp: "));

  lcd.setCursor(6, 1);
  lcd.print(t * 2);

  lcd.setCursor(12, 1);
  lcd.print("C");

}