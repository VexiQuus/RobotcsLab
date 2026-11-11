void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("Type a or b:");
}

void loop() {
  if (Serial.available() > 0) {
    char ch = Serial.read();
    if (ch == '\r' || ch == '\n') return;
    if (ch == 'a') {
      Serial.println("Selected A");
    } 
    else if (ch == 'b') {
      Serial.println("Selected B");
    } 
    //else if (ch == 'h') {
    //  Serial.println("Hello from ESP32!");
    //}
    else {
      Serial.println("Unknow command");
    }
  }
}
