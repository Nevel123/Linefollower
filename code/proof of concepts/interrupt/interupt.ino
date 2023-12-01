const int buttonPin = 2;
const int ledPin = 13;

volatile bool ledState = false;
volatile unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonInterrupt, RISING);
}
void loop(){

}
void buttonInterrupt() {
  int buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (buttonState == HIGH) {
      ledState = !ledState;
      digitalWrite(ledPin, ledState);
    }
    lastDebounceTime = millis();
  }
}