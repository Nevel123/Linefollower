int Array[8] = {22, 19, A5, A4, A3, A2, A1, A0};
int waarde;

void setup() {
  Serial.begin(9600);

  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
}

void loop() {
 for (int i = 0; i < 8; i++) 
  {
    waarde = analogRead(Array[i]);
    Serial.print(waarde);
    Serial.print(" ");
  }
  Serial.println();
  delay(500);
}