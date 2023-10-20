const int LED = 8;
const int BUTTON = 9;
bool StatusLed = false;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  
  pinMode(BUTTON, INPUT);
  
  attachInterrupt(digitalPinToInterrupt(BUTTON),buttonPress,RISING);
}

void loop() {
 digitalWrite(LED, StatusLed);
}

void buttonPress(){
  Serial.println("Interrupt");
  StatusLed = !StatusLed;
}