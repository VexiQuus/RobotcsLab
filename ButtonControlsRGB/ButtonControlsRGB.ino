const int RGB_PIN = 48;
const int MY_BOOT_PIN = 0;
int Mode = 0;

void setup() {
  Serial.begin(115200);
  pinMode(MY_BOOT_PIN, INPUT_PULLUP);
}

void loop() {
  /*
  if (digitalRead(MY_BOOT_PIN) == LOW) {
    rgbLedWrite(RGB_PIN, 0, 32, 0);
    /*
    rgbLedWrite(RGB_PIN, 32, 0, 0); // Easy
    Serial.println("Pressed"); // Medium
    */
  //}
  /*
  else {
    rgbLedWrite(RGB_PIN, 32, 0, 0);
    /*
    rgbLedWrite(RGB_PIN, 0, 32, 0); // Easy
    Serial.println("Released"); // Medium
    */
  //}
  /*
  delay(20);
  */
  
  if (Mode == 0 && digitalRead(MY_BOOT_PIN) == LOW) {
     rgbLedWrite(RGB_PIN, 32, 0, 0);
     Mode++;
  }
    if (Mode == 1 && digitalRead(MY_BOOT_PIN) == LOW) {
     rgbLedWrite(RGB_PIN, 0, 32, 0);
     Mode--;
  }
  delay(100);
}

