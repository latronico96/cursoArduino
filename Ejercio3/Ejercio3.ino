int ledrojo = 13;
int ledverde = 7;

void setup() {
  pinMode(ledrojo, OUTPUT);
  pinMode(ledverde, OUTPUT);
}

void loop() {
  digitalWrite(ledrojo, HIGH);
  digitalWrite(ledverde, LOW);
  delay(5000);
  digitalWrite(ledrojo, LOW);
  digitalWrite(ledverde, HIGH);
  delay(5000);
}
