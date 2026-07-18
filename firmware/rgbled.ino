// RGB LED Functions
const uint8_t R_PIN = 5;
const uint8_t G_PIN = 6;
const uint8_t B_PIN = 9;

void init_rgb_led() {
    pinMode(R_PIN, OUTPUT);
    pinMode(G_PIN, OUTPUT);
    pinMode(B_PIN, OUTPUT);
}

void set_rgb_led(uint8_t r, uint8_t g, uint8_t b) { // from 0 to 255
    analogWrite(R_PIN, r);
    analogWrite(G_PIN, g);
    analogWrite(B_PIN, b);
}