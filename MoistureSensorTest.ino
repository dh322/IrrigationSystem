// This was code written to find the values of the moisture sensors when exposed to air and water

// initialize sensor
int sensor1;

void setup() {
  Serial.begin(9600); // set baud rate to 9600
}

void loop() {
  sensor1 = analogRead(A0); // assign to receive signals from analog pin 1
  Serial.println(sensor1); // print value of sensor in serial monitor
  delay(1000); // pause for 1 second, to slow down the rate of values that will be printed
}

// when exposed to air, value is 464
// when exposed to water, value is 196
