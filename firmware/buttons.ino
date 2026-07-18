void initButtons() {

  //Serial.begin(9615);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUTTON_2_PIN, INPUT_PULLUP);

}

bool page = true;

void buttons() {

  int buttonState = digitalRead(BUTTON_PIN);
  int button2State = digitalRead(BUTTON_2_PIN);
  
  //Serial.println(buttonState);

  if (buttonState == LOW) {
    lcd.clear();
    page = false;
  }

  if (button2State == LOW) {
    page = true;
  }

//-------------------------

  if (page == true) {
    dht11();
  }

  if (page == false) {
    water();
  }

}