int count = 1;
//int count = 10;

void setup() {
  Serial.begin(115200);
  delay(2000);
}

void loop() {
  Serial.println(count);
  count++;
  delay(1000);
}