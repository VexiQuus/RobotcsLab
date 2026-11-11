const int MY_BOOT_PIN = 0;

void setup() {
  Serial.begin(115200);
  pinMode(MY_BOOT_PIN, INPUT_PULLUP);
  delay(2000);
}

void loop() {
  if (digitalRead(MY_BOOT_PIN) == LOW) {
    Serial.println("Pressed");
  }
  else {
    Serial.println("Released");
  }
  delay(2000);
}
