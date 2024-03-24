int ledrojo = 13;
int ledverde = 7;
int buzzer = 5;

void setup() {
  pinMode(ledrojo, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(ledrojo, HIGH);
  digitalWrite(ledverde, LOW);
  digitalWrite(buzzer, LOW);
  delay(5000);
  digitalWrite(ledrojo, LOW);
  digitalWrite(ledverde, HIGH);
  digitalWrite(buzzer, LOW);
  delay(5000);
  digitalWrite(ledrojo, LOW);
  digitalWrite(ledverde, LOW);
  digitalWrite(buzzer, HIGH);
  delay(2000);
}
