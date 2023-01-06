int sensor1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensor1 = analogRead(A0);
  Serial.println(sensor1);
  delay(1000);
}

// when exposed to air, value is 464
// when exposed to water, value is 196