const int ledPin = 32;
const int bootBtn = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(bootBtn, INPUT_PULLUP);
  digitalWrite(ledPin, LOW);
}

void loop() {
  if (digitalRead(bootBtn) == LOW) {
    digitalWrite(ledPin, HIGH);
    delay(10000);
    digitalWrite(ledPin, LOW);
  }
}