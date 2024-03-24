int ledrojo = 13;

void setup() {
  pinMode(ledrojo, OUTPUT);
}

void loop() {
  digitalWrite(ledrojo, HIGH);
  delay(5000);
  digitalWrite(ledrojo, LOW);
  delay(5000);
}
