/* Blink12Show1
 * 
 * Custom sequences for 12 LEDs to be used as "eyes"
 * to appear "random" without actually being random.
 * Sequences loop after 72.5 seconds
 * 
 * Based on "Blink" by Arduino
 */
 
 void setup(){
  //set the digital pin as output
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop(){
  int on = HIGH;
  int off= LOW;
  digitalWrite(1, on);  //sets 12 LEDS to on or off at beginning of loop
  digitalWrite(2, on);
  digitalWrite(3, on);
  digitalWrite(4, off);
  digitalWrite(5, off);
  digitalWrite(6, on);
  digitalWrite(7, off);
  digitalWrite(8, on);
  digitalWrite(9, off);
  digitalWrite(10, off);
  digitalWrite(11, on);
  digitalWrite(12, on);
  delay(250);
  delay(250);
  delay(250);
  delay(250);           //1 seconds
    delay(250);
  delay(250);
  delay(250);
  delay(250);           //1 seconds
    delay(250);
  delay(250);
  delay(250);
  delay(250);           //1 seconds
    delay(250);
  delay(250);
  delay(250);
  delay(250);           //1 seconds
    delay(250);
  delay(250);
  delay(250);
  delay(250);           //1 seconds
    delay(250);
  delay(250);
  delay(250);
  delay(250);           //1 seconds
    delay(250);
  delay(250);
  delay(250);
  delay(250);           //1 seconds
    delay(250);
  delay(250);
  delay(250);
  delay(250);           //1 seconds
}
