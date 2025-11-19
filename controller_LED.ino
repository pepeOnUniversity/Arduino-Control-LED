//assign pin for list LED
int led[] = { 6, 5, 4 };

void setup() {
  //set list LED is OUTPUT
  for (int i = 0; i <= 2; i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i <= 2; i++) {
    digitalWrite(led[i], HIGH);
    delay(200);
    digitalWrite(led[i], LOW);
    delay(200);
  }
}
