/*
  NEON BLINK
  https://forum.arduino.cc/index.php?topic=52470.0
*/

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {               
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
  delay(random(50,150));
  digitalWrite(led, LOW);
  delay(random(200,400));
  digitalWrite(led, HIGH);
  delay(random(100,300));
  digitalWrite(led, LOW);
  delay(random(20,70));
  digitalWrite(led, HIGH);
  delay(random(100,300));
  digitalWrite(led, LOW);
  delay(random(500,900));
  digitalWrite(led, LOW);
  delay(random(50,150));
  digitalWrite(led, HIGH);
  delay(random(100,300));
  digitalWrite(led, LOW);
  delay(random(50,150));
  digitalWrite(led, HIGH);
  delay(random(500,800));
  digitalWrite(led, LOW);
  delay(random(50,150));
    
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);

  /*
  digitalWrite(led, HIGH);
  delay(random(100,300));
  digitalWrite(led, LOW);
  delay(random(50,150));
  delay(random(400,900));
  digitalWrite(led, HIGH);
  delay(random(100,300));
  digitalWrite(led, LOW);
  delay(random(400,900));
  digitalWrite(led, HIGH);
  delay(90000000);
 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(12);
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(75);               
   digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(12);   

  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(75);     
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(12);
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(75);
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90000000); 
  */            
}
