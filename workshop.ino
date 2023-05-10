//sketch_blink_2_sets_LEDs
//Blink 2 set of LEDs at different rates
//gammon.com.au/blink

const int redledPin = 7;              //red led pin
const int greenledPin = 13;            //green led pin

//time peroid of blink
const unsigned long redledPininterval = 400;
const unsigned long greenledPininterval = 1000;

//variablle holding the timer value

unsigned long redledPintimer;
unsigned long greenledPintimer;

void setup() {
 pinMode (redledPin, OUTPUT);
 pinMode (greenledPin, OUTPUT);
 
 redledPintimer = millis ();
 greenledPintimer = millis ();
}

 void toggleredledPin ()
 {
  if (digitalRead (redledPin) == LOW)
     digitalWrite (redledPin, HIGH);
  else
     digitalWrite (redledPin, LOW);

     redledPintimer = millis ();
 }

 void togglegreenledPin () {
  if (digitalRead (greenledPin) == LOW)
    digitalWrite (greenledPin, HIGH);
    else
    digitalWrite (greenledPin, LOW);

       greenledPintimer = millis ();
 }

  void loop ()     
  {     
  if ( (millis() - greenledPintimer) >= greenledPininterval)  //handling the blink of green led
  togglegreenledPin ();

  if ( (millis () - redledPintimer) >= redledPininterval)
  toggleredledPin ();


}
