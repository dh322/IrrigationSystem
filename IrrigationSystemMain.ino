// initialize variables
int sensor1;
int sensor2;
int waterPump1 = 1; // assign to digital pin 1
int waterPump2 = 2; // assign to digital pin 2

void setup() {
  serial.begin(9600); // set baud rate to 9600
  pinMode(waterPump1, OUTPUT); // assign to output signals
  pinMode(waterPump2, OUTPUT);
}

void loop() {
  sensor1 = analogRead(A0); // assign to receive signals from analog pin 0
  serial.println(sensor1); // print value of sensor in serial monitor
  if (sensor1 > 268) { // if value is greater than 268
    digitalWrite(waterPump1, HIGH); // associated water pump turns on for 10 seconds
    delay(10000);
    digitalWrite(waterPump1, LOW); // associated water pump turns off
  }
  // subsequent sensors and pumps follow the same process
  sensor2 = analogRead(A1); // assign to receive signals from analog pin 1
  serial.println(sensor2); 
  if (sensor2 > 268) {
    digitalWrite(waterPump2, High);
    delay(10000);
    digitalWrite(waterPump2, LOW);
  }
  delay(5000) // pause for 5 seconds, this is to allow the water to diffuse throughout the pot
}

// these values were tested using MoistureSensorTest
// when exposed to air, value is 464
// when exposed to water, value is 196
