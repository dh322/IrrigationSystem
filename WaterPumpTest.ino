// This was code written to test the functionality of the water pumps

void setup() {
  pinMode(2, OUTPUT); // assign digital pin 2 to output signals
}

void loop() {
  digitalWrite(2, HIGH); // turn on water pump for 2 seconds
  delay(2000); 
  digitalWrite(2, LOW); // turn off water pump for 2 seconds
  delay(2000);
}
