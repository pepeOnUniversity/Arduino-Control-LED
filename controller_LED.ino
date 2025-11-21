//declear
int led = 6;
int button = 2;


void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  //read value of button
  int state = digitalRead(button);

  Serial.println(state);
  //check value of state
  if(state == LOW){
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}