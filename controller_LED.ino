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
  //when dont press -> state = 1

  Serial.println(state);
  //handle logic, when dont press, state = 1, but i want led turn off
  if(state == HIGH){
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}