/* Blink12Show1
 * 
 * Custom sequences for 12 LEDs to be used as "eyes"
 * to appear "random" without actually being random.
 * Sequences loop after 72.5 seconds
 * 
 * Based on "Blink" by Arduino
 *
 * Published Dec 17 with LED sequences 1-6
 * Updated Dec 22 with LED sequences 7-12
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
  digitalWrite(1, off);  //sets 12 LEDS to on or off at beginning of loop
  digitalWrite(2, on);
  digitalWrite(3, off);
  digitalWrite(4, on);
  digitalWrite(5, off);
  digitalWrite(6, on);
  digitalWrite(7, off);
  digitalWrite(8, on);
  digitalWrite(9, off);
  digitalWrite(10, off);
  digitalWrite(11, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(12, off);
  delay(500);
  digitalWrite(5, on);
  digitalWrite(12, on);
  delay(250);           //1 seconds
  digitalWrite(12, off);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(5, on);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(12, off);
  delay(250);           //2 seconds
  digitalWrite(5, on);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(5, on);
  delay(250);
  digitalWrite(12, off);
  delay(250);           //3 seconds
  digitalWrite(10, on);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(10, off);
  delay(250);
  digitalWrite(10, on);
  delay(250);           //4 seconds
  digitalWrite(12, off);
  delay(250);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(10, off);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(10, on);
  delay(250);           //5 seconds
  digitalWrite(2, off);
  digitalWrite(10, off);
  delay(250);
  digitalWrite(2, on);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(2, off);
  delay(250);
  digitalWrite(2, on);
  delay(250);           //6 seconds
  digitalWrite(10, off);
  delay(250);
  digitalWrite(2, off);
  delay(250);
  digitalWrite(2, on);
  delay(250);
  digitalWrite(2, off);
  digitalWrite(4, off);
  delay(250);           //7 seconds
  digitalWrite(2, on);
  digitalWrite(4, on);
  delay(500);
  digitalWrite(4, off);
  delay(250);
  digitalWrite(2, off);
  digitalWrite(4, on);
  delay(250);           //8 seconds
  digitalWrite(4, off);
  delay(250);
  digitalWrite(4, on);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(8, off);
  delay(250);           //9 seconds
  digitalWrite(8, on);
  delay(250);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(4, on);
  delay(250);           //10 seconds
  digitalWrite(6, off);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(4, on);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(6, off);
  delay(250);           //11 seconds
  digitalWrite(6, on);
  delay(250);
  digitalWrite(6, off);
  delay(750);           //12 seconds
  digitalWrite(1, on);
  delay(500);
  digitalWrite(1, off);
  delay(250);
  digitalWrite(1, on);
  delay(500);           //13.25 seconds
  digitalWrite(1, off);
  delay(250);
  digitalWrite(1, on);
  delay(250);
  digitalWrite(1, off);
  delay(250);           //14 seconds
  digitalWrite(1, on);
  delay(250);
  digitalWrite(1, off);
  delay(500);
  digitalWrite(7, on);
  delay(500);           //15.25 seconds
  digitalWrite(7, off);
  delay(250);
  digitalWrite(7, on);
  delay(500);           //16 seconds
  digitalWrite(7, off);
  delay(250);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(7, on);
  delay(250);           //17 seconds
  digitalWrite(7, off);
  delay(250);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(5, on);
  delay(250);
  digitalWrite(5, off);
  delay(250);           //18 seconds
  digitalWrite(5, on);
  delay(500);
  digitalWrite(5, off);
  delay(250);
  digitalWrite(5, on);
  delay(250);           //19 seconds
  digitalWrite(5, off);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(5, on);
  delay(250);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(8, on);
  delay(500);           //20.25 seconds
  digitalWrite(8, off);
  delay(250);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(8, off);
  delay(250);           //21 seconds
  digitalWrite(8, on);
  delay(750);
  digitalWrite(7, off);
  digitalWrite(8, off);
  delay(250);           //22 seconds
  digitalWrite(7, on);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(6, off);
  delay(250);           //23 seconds
  digitalWrite(6, on);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(6, off);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(4, on);
  delay(250);           //24 seconds
  digitalWrite(4, off);
  delay(250);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(4, on);
  delay(250);
  digitalWrite(4, off);
  delay(250);           //25 seconds
  digitalWrite(4, on);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(12, on);
  delay(250);           //26 seconds
  digitalWrite(5, on);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(5, on);
  delay(500);           //27 seconds
  digitalWrite(1, on);
  digitalWrite(5, off);
  delay(250);
  digitalWrite(1, off);
  delay(250);
  digitalWrite(1, on);
  delay(250);
  digitalWrite(10, on);
  delay(250);           //28 seconds
  digitalWrite(1, off);
  digitalWrite(4, on);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(4, on);
  digitalWrite(10, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(8, on);
  digitalWrite(10, on);
  digitalWrite(12, off);
  delay(250);           //29 seconds
  digitalWrite(4, off);
  digitalWrite(8, off);
  digitalWrite(10, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(8, on);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(10, off);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(10, on);
  delay(250);           //30 seconds
  digitalWrite(8, off);
  delay(250);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(8, off);
  digitalWrite(10, off);
  delay(250);
  digitalWrite(8, on);
  digitalWrite(10, on);
  delay(250);           //31 seconds
  digitalWrite(10, off);
  delay(250);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(6, on);
  delay(250);           //32 seconds
  digitalWrite(11, on);
  delay(250);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(6, off);
  digitalWrite(11, on);
  delay(250);           //33 seconds
  digitalWrite(11, off);
  delay(250);
  digitalWrite(11, on);
  delay(500);
  digitalWrite(1, on);
  digitalWrite(11, off);
  delay(500);           //34.25 seconds
  digitalWrite(1, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(1, off);
  delay(500);           //35.25 seconds
  digitalWrite(1, on);
  delay(500);
  digitalWrite(1, on);
  delay(250);           //36 seconds
  digitalWrite(1, off);
  delay(250);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(8, on);
  delay(500);           //37 seconds
  digitalWrite(8, off);
  delay(250);
  digitalWrite(7, on);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(7, on);
  digitalWrite(8, off);
  delay(250);           //38 seconds
  digitalWrite(8, on);
  delay(250);
  digitalWrite(7, off);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(3, on);
  digitalWrite(7, on);
  delay(500);           //39 seconds
  digitalWrite(7, off);
  delay(250);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(3, off);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(3, on);
  delay(500);           //40.25 seconds
  digitalWrite(3, off);
  delay(250);
  digitalWrite(3, on);
  delay(500);           //41 seconds
  digitalWrite(3, off);
  delay(250);
  digitalWrite(3, on);
  delay(250);
  digitalWrite(3, off);
  digitalWrite(10, on);
  delay(500);           //42 seconds
  digitalWrite(10, off);
  delay(250);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(10, off);
  delay(250);
  digitalWrite(3, on);
  digitalWrite(10, on);
  delay(250);           //43 seconds
  digitalWrite(3, off);
  delay(250);
  digitalWrite(3, on);
  delay(250);
  digitalWrite(10, off);
  delay(250);
  digitalWrite(3, off);
  digitalWrite(10, on);
  delay(250);           //44 seconds
  digitalWrite(3, on);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(3, off);
  delay(250);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(11, on);
  delay(250);           //45 seconds
  digitalWrite(11, off);
  delay(250);
  digitalWrite(11, on);
  delay(750);           //46 seconds
  digitalWrite(11, off);
  delay(250);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(11, off);
  delay(500);           //47 seconds
  digitalWrite(10, off);
  delay(250);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(10, off);
  delay(250);
  digitalWrite(2, on);
  digitalWrite(10, on);
  delay(250);           //48 seconds
  digitalWrite(2, off);
  delay(250);
  digitalWrite(2, on);
  digitalWrite(10, off);
  delay(500);
  digitalWrite(2, off);
  delay(250);           //49 seconds
  digitalWrite(2, on);
  delay(500);
  digitalWrite(2, off);
  delay(250);
  digitalWrite(2, on);
  delay(250);           //50 seconds
  digitalWrite(2, off);
  delay(250);
  digitalWrite(9, on);
  delay(750);           //51 seconds
  digitalWrite(9, off);
  delay(250);
  digitalWrite(9, on);
  delay(750);           //52 seconds
  digitalWrite(9, off);
  delay(250);
  digitalWrite(9, on);
  delay(250);
  digitalWrite(9, off);
  delay(250);
  digitalWrite(9, on);
  delay(250);           //53 seconds
  digitalWrite(9, off);
  delay(250);
  digitalWrite(4, on);
  digitalWrite(9, on);
  delay(250);
  digitalWrite(4, off);
  delay(250);
  digitalWrite(4, on);
  delay(250);           //54 seconds
  digitalWrite(6, on);
  delay(250);
  digitalWrite(9, off);
  delay(500);
  digitalWrite(4, off);
  digitalWrite(6, off);
  delay(250);           //55 seconds
  digitalWrite(1, on);
  delay(250);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(8, on);
  delay(250);           //56 seconds
  digitalWrite(1, off);
  digitalWrite(2, on);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(1, off);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(2, off);
  delay(250);           //57 seconds
  digitalWrite(2, on);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(1, off);
  digitalWrite(2, off);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(2, on);
  digitalWrite(8, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(11, off);
  delay(250);           //58 seconds
  digitalWrite(2, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(2, on);
  delay(250);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(11, on);
  delay(250);           //59 seconds
  digitalWrite(11, off);
  delay(250);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(5, on);
  delay(250);
  digitalWrite(5, off);
  delay(250);           //60 seconds
  digitalWrite(5, on);
  delay(250);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(5, on);
  digitalWrite(11, off);
  delay(250);           //61 seconds
  digitalWrite(4, on);
  delay(250);
  digitalWrite(5, off);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(5, on);
  delay(250);
  digitalWrite(4, on);
  digitalWrite(5, off);
  delay(250);           //62 seconds
  digitalWrite(2, off);
  digitalWrite(5, on);
  delay(250);
  digitalWrite(2, on);
  digitalWrite(4, off);
  delay(250);
  digitalWrite(4, on);
  digitalWrite(5, off);
  delay(250);
  digitalWrite(2, off);
  digitalWrite(4, off);
  delay(250);           //63 seconds
  digitalWrite(2, on);
  delay(250);
  digitalWrite(2, off);
  delay(250);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(7, off);
  delay(250);           //64 seconds
  digitalWrite(7, on);
  delay(500);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(7, on);
  delay(250);           //65 seconds
  digitalWrite(6, on);
  delay(250);
  digitalWrite(7, off);
  delay(500);
  digitalWrite(6, off);
  delay(250);           //66 seconds
  digitalWrite(6, on);
  delay(250);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(6, on);
  delay(750);           //67.5 seconds
  digitalWrite(8, on);
  delay(250);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(8, off);
  delay(250);           //68 seconds
  digitalWrite(8, on);
  delay(250);
  digitalWrite(6, on);
  delay(750);           //69 seconds
  digitalWrite(8, off);
  delay(250);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(6, off);
  delay(250);           //70 seconds
  digitalWrite(6, on);
  delay(250);
  digitalWrite(2, on);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(2, off);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(2, on);
  delay(250);           //71 seconds
  digitalWrite(1, on);
  delay(250);
  digitalWrite(1, off);
  digitalWrite(2, off);
  digitalWrite(4, on);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(2, on);
  delay(250);
  digitalWrite(4, off);
  delay(250);           //72 seconds
  digitalWrite(1, off);
  digitalWrite(2, off);
  digitalWrite(4, on);
  delay(250);
  digitalWrite(2, on);
  delay(250);          //72.5 seconds
}
