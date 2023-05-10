

const int redledPin = 7;              //red led pin
const int greenledPin = 13;            //green led pin


void setup() {
 pinMode(redledPin, OUTPUT);

}

void loop() {
  digitalWrite(redledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(redledPin, LOW);   // turn the LED off by making the voltage LOW
  delay(1000); 
}
