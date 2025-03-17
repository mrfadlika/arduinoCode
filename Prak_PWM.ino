byte brightness, i;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  brightness = 0;
  for(i = 0; i < 20; i++) {
    brightness++;
    analogWrite(3, brightness);
    delay(400);
  }

}
