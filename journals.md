# Plant Watering System Build Journal

## Jul 18, 2026, 12:35 PM

I added the main components to my setup, and have tested the LCD and RGB LED module so they work! I use the I2C converter for the LCD to keep wiring clean. 

I also put a button on the breadboard and made a Ground row as intended on the breadboard.

---

## Jul 18, 2026, 1:48 PM

Finally got buttons to work and now, the display shows what button is pressed with a quick pop up message. Working on the physical circuit to make sure all the components have an organised GND on the GND rail.

---

## Jul 18, 2026, 2:14 PM

Setup GND rail and 5V rail. Buttons work now, after they stopped working then I was doing the breadboard setup. Going to start getting the temperature/humidity sensor to work now!

---

## Jul 18, 2026, 2:52 PM

Got the LCD to print both the Humidity and Temperature readings from the DHT11 sensor, which also works.

---

## Jul 18, 2026, 3:21 PM

Uploaded code for the water/moisture sensor that updates the value to the LCD. It also shows whether the amount is high, low, medium, or none/very, very little.

---

## Jul 18, 2026, 3:35 PM

Got the water sensor to output correctly as a percentage instead of a   3 digit value which it previously showed.

---

## Jul 18, 2026, 4:08 PM

The RGB LED now also shows the value of the water moisture through a traffic light scale.

---

## Jul 18, 2026, 4:37 PM

The buttons now successfully switch view and stay on the view, also allowing the values to update. Everything works and it is all done!