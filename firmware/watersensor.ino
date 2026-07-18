void initWater() {
 
}

void water() {
  int value = analogRead(A2);  // Reading the analog value from pin A2

  value = value / 10;
  
  if (value < 20) {
      lcd.clear();

      lcd.setCursor(0, 0);
      lcd.print("Water: ");

      lcd.setCursor(7, 0);
      lcd.print(value);

      lcd.setCursor(10, 0);
      lcd.print("%");

      lcd.setCursor(0, 1);
      lcd.print("No water");
      set_rgb_led(255, 0, 0); // red
      delay(200);
    // Displaying the text "No water"

  } else if (value >= 20 && value < 50) {
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Water: ");

    lcd.setCursor(7, 0);
    lcd.print(value);

    lcd.setCursor(10, 0);
    lcd.print("%");

    lcd.setCursor(0, 1);
    lcd.print("Low water");
    set_rgb_led(255, 128, 0); // orange
    delay(200);
    // Displaying the text "Low"
  
  } else if (value >= 50 && value < 80) {
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Water: ");

    lcd.setCursor(7, 0);
    lcd.print(value);

    lcd.setCursor(10, 0);
    lcd.print("%");

    lcd.setCursor(0, 1);
    lcd.print("Medium water");
    set_rgb_led(255, 255, 0); // yellow
    delay(200);
   // Displaying the text "Medium"

  } else if (value >= 80) {
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Water: ");

    lcd.setCursor(7, 0);
    lcd.print(value - 2);

    lcd.setCursor(10, 0);
    lcd.print("%");

    lcd.setCursor(0, 1);
    lcd.print("High water");  
    set_rgb_led(0, 255, 0); // green
    delay(200);
    // Displaying the text "High"
    }
}