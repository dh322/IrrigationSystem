int sensor1;
int sensor2;
int waterPump1 = 1;
int waterPump2 = 2;

void setup() {
  serial.begin(9600);
  pinMode(waterPump1, OUTPUT);
  pinMode(waterPump2, OUTPUT);
}

void loop() {
  sensor1 = analogRead(A0);
  if (sensor1 > 268) {
    digitalWrite(waterPump1, HIGH);
    delay(10000);
    digitalWrite(waterPump1, LOW);
  }
  sensor2 = analogRead(A1);
  if (sensor 2 > 268) {
    digitalWrite(waterPump2, High);
    delay(10000);
    digitalWrite(waterPump2, LOW);
  }
  delay(5000)
}

// when exposed to air, value is 464
// when exposed to water, value is 196