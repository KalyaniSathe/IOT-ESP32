void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  pinMode(16, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, cm;

  digitalWrite(4, LOW);
  delay(2);
  digitalWrite(4, HIGH);
  delay(10);
  digitalWrite(4, LOW);

  duration = pulseIn(5, HIGH);
  cm = (duration / 29 / 2);

  if (cm < 20)
  {
    digitalWrite(16, HIGH);
  }
  else
  {
    digitalWrite(16, LOW);
  }
  Serial.print(cm);
  Serial.println("cm");
  //delay(100);
}
