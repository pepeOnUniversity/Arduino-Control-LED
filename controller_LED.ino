//assign pin 6 for LED
int LED = 6;

void setup() {
  //set LED is OUTPUT
  pinMode(LED, OUTPUT);
}

void loop() {
  //turn on LED
  digitalWrite(LED, HIGH);
  //delay 200ms
  delay(200);
  //turn off LED
  digitalWrite(LED, LOW);
  //delay 200ms
  delay(200);
}


