const int RGB_PIN = 48;

void setup() {

}

void loop() {
  rgbLedWrite(RGB_PIN, 0, 32, 0);
  delay(600);
  //rgbLedWrite(RGB_PIN, 0, 0, 32;
  //delay(600);
  rgbLedWrite(RGB_PIN, 0, 0, 0);
  delay(600);
}
