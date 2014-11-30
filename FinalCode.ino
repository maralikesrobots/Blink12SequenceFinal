/* Blink12SequenceFinal
 * 
 * Custom sequences for 12 LEDs to be used as "eyes"
 * to appear "random" without actually being random.
 * Sequences loop after 81.5 seconds
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
  digitalWrite(7, on);
  digitalWrite(9, on);
  delay(250);
  digitalWrite(1, off);
  digitalWrite(8, off);
  digitalWrite(11, off);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(7, off);
  digitalWrite(8, on);
  digitalWrite(11, on);
  delay(250);            //1 Second
  digitalWrite(12, on);
  delay(250);
  digitalWrite(1, off);
  digitalWrite(8, off);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(8, on);
  digitalWrite(11, on);
  digitalWrite(12, off);
  delay(500);            //2 Seconds
  digitalWrite(1, off);
  digitalWrite(11, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(11, on);
  delay(500);
  digitalWrite(11, off);
  delay(250);            //3 Seconds
  digitalWrite(3, off);
  digitalWrite(5, on);
  digitalWrite(6, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(3, on);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(5, off);
  delay(250);
  digitalWrite(5, on);
  digitalWrite(11, off);
  delay(250);            //4 Seconds
  digitalWrite(7, off);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(7, on);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(12, on);
  delay(500);            //5 seconds
  digitalWrite(11, off);
  delay(500);
  digitalWrite(11, on);
  delay(750);            //6.25 seconds
  digitalWrite(3, off);
  digitalWrite(6, off);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(3, on);
  digitalWrite(6, on);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(11, on);
  delay(250);          //7 seconds
  digitalWrite(5, on);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(1, off);
  digitalWrite(6, on);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(7, on);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(6, off);
  digitalWrite(11, off);
  delay(250);          //8 seconds
  digitalWrite(1, off);
  digitalWrite(2, off);
  digitalWrite(7, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(2, on);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(7, off);
  delay(250);         //9 seconds
  digitalWrite(11, off);
  delay(250);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(12, off);
  delay(500);        //10 seconds
  digitalWrite(4, on);
  digitalWrite(5, off);
  delay(250);
  digitalWrite(5, on);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(11, off);
  delay(250);        //11 seconds
  digitalWrite(11, on);
  delay(250);
  digitalWrite(4, off);
  delay(250);
  digitalWrite(3, off);
  digitalWrite(4, on);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(3, on);
  digitalWrite(6, on);
  delay(250);        //12 seconds
  digitalWrite(7, off);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(7, on);
  digitalWrite(9, off);
  delay(250);        //1st page
  digitalWrite(4, on);
  digitalWrite(9, on);
  digitalWrite(11, off);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(11, on);
  delay(500);        //13.25 seconds
  digitalWrite(5, off);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(5, on);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(4, on);
  delay(500);        //14.25 seconds
  digitalWrite(11, off);
  delay(500);
  digitalWrite(6, off);
  delay(250);        //15 seconds
  digitalWrite(6, on);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(6, off);
  digitalWrite(7, on);
  digitalWrite(10, off);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(10, on);
  delay(250);         //16 seconds
  digitalWrite(7, off);
  delay(250);
  digitalWrite(2, off);
  digitalWrite(7, on);
  digitalWrite(10, off);
  delay(250);
  digitalWrite(2, on);
  digitalWrite(5, off);
  digitalWrite(10, on);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(5, on);
  delay(2000);        //18.75 seconds
  digitalWrite(3, off);
  digitalWrite(6, off);
  delay(250);        //19 seconds
  digitalWrite(3, on);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(3, off);
  digitalWrite(7, on);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(3, on);
  delay(750);        //20.5 seconds
  digitalWrite(12, on);
  delay(1000);       //21.5 seconds
  digitalWrite(8, off);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(8, on);
  delay(250);      //22 seconds
  digitalWrite(5, on);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(2, off);
  digitalWrite(7, off);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(2, on);
  digitalWrite(6, off);
  digitalWrite(7, on);
  delay(250);        //23 seconds
  digitalWrite(6, on);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(6, off);
  digitalWrite(7, on);
  digitalWrite(10, off);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(10, on);
  delay(250);        //24 seconds
  digitalWrite(4, on);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(7, on);
  digitalWrite(10, off);
  delay(250);
  digitalWrite(9, off);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(9, on);
  delay(250);      //25 seconds, 2nd page
  digitalWrite(5, off);
  delay(250);
  digitalWrite(5, on);
  delay(250);
  digitalWrite(12, off);
  delay(1000);        //26.5 seconds
  digitalWrite(10, off);
  digitalWrite(12, on);
  delay(500);        //27 seconds
  digitalWrite(4, off);
  delay(250);
  digitalWrite(4, on);
  digitalWrite(6, off);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(7, on);
  delay(1250);      //28.75 seconds
  digitalWrite(3, off);
  delay(250);      //29 seconds
  digitalWrite(3, on);
  delay(1250);     //30.25 seconds
  digitalWrite(4, off);
  digitalWrite(5, off);
  delay(250);
  digitalWrite(4, on);
  digitalWrite(5, on);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(8, on);
  delay(500);      //31.25 seconds
  digitalWrite(6, off);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(8, on);
  delay(500);      //32 seconds
  digitalWrite(1, on);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(1, off);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(2, off);
  delay(250);      //33 seconds
  digitalWrite(2, on);
  delay(250);
  digitalWrite(1, off);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(4, off);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(4, on);
  delay(250);      //34 seconds
  digitalWrite(1, off);
  delay(250);
  digitalWrite(1, on);
  delay(250);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(6, on);
  delay(250);      //35 seconds
  digitalWrite(7, off);
  delay(250);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(5, on);
  digitalWrite(7, on);
  delay(250);      //36 seconds
  digitalWrite(3, off);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(3, on);
  digitalWrite(7, off);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(8, off);
  digitalWrite(9, off);
  delay(250);      //37 seconds
  digitalWrite(2, off);
  digitalWrite(4, on);
  digitalWrite(8, on);
  digitalWrite(9, on);
  delay(250);
  digitalWrite(2, on);
  delay(250);    //37.5 3rd page
  digitalWrite(8, off);
  delay(250);
  digitalWrite(6, off);
  digitalWrite(8, on);
  delay(250);      //38 seconds
  digitalWrite(6, on);
  delay(500);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(6, on);
  delay(250);      //39 seconds
  digitalWrite(4, off);
  digitalWrite(5, on);
  delay(250);
  digitalWrite(1, off);
  digitalWrite(6, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(7, off);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(7, on);
  digitalWrite(11, on);
  delay(250);      //40 seconds
  digitalWrite(1, off);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(11, on);
  delay(500);      //41 seconds
  digitalWrite(11, off);
  delay(250);
  digitalWrite(3, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(3, on);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(11, off);
  delay(250);      //42 seconds
  digitalWrite(3, off);
  digitalWrite(5, off);
  digitalWrite(10, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(3, on);
  digitalWrite(5, on);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(7, off);
  digitalWrite(10, off);
  digitalWrite(11, on);
  delay(250);        //43 seconds
  digitalWrite(6, off);
  digitalWrite(7, on);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(7, off);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(6, off);
  digitalWrite(7, on);
  delay(250);        //44 seconds
  digitalWrite(6, on);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(2, off);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(2, on);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(11, off);
  delay(500);       //45.25 seconds
  digitalWrite(3, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(3, on);
  delay(500);      //46 seconds
  digitalWrite(11, off);
  delay(500);
  digitalWrite(11, on);
  delay(500);      //47 seconds
  digitalWrite(6, off);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(2, off);
  digitalWrite(5, on);
  digitalWrite(7, off);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(2, on);
  digitalWrite(7, on);
  digitalWrite(11, on);
  delay(250);        //48 seconds
  digitalWrite(5, off);
  delay(250);
  digitalWrite(5, on);
  delay(500);
  digitalWrite(11, off);
  delay(250);        //49 seconds
  digitalWrite(4, on);
  digitalWrite(9, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(9, on);
  delay(250);
  digitalWrite(4, off);
  delay(250);
  digitalWrite(4, on);
  delay(250);        //50 seconds 4th page
  digitalWrite(10, off);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(6, off);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(4, on);
  digitalWrite(6, on);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(7, off);
  digitalWrite(10, off);
  digitalWrite(11, on);
  delay(250);        //51 seconds
  digitalWrite(6, off);
  digitalWrite(7, on);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(4, on);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(6, off);
  digitalWrite(7, on);
  delay(500);        //52.25 seconds
  digitalWrite(11, off);
  delay(250);
  digitalWrite(3, off);
  digitalWrite(4, off);
  digitalWrite(6, on);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(3, on);
  digitalWrite(4, on);
  delay(250);        //53 seconds
  digitalWrite(10, off);
  delay(1000);      //54 seconds
  digitalWrite(11, off);
  delay(250);
  digitalWrite(5, on);
  delay(500);
  digitalWrite(5, off);
  digitalWrite(7, off);
  delay(250);        //55 seconds
  digitalWrite(5, on);
  digitalWrite(7, on);
  delay(500);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(6, on);
  delay(500);        //56.25 seconds
  digitalWrite(6, off);
  delay(1500);      //57.75 seconds
  digitalWrite(3, off);
  digitalWrite(8, off);
  delay(250);      //58 seconds
  digitalWrite(3, on);
  digitalWrite(5, off);
  digitalWrite(7, off);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(5, on);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(2, off);
  digitalWrite(7, off);
  digitalWrite(8, on);
  delay(250);      //59 seconds
  digitalWrite(2, on);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(2, off);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(7, on);
  delay(1500);    //61.25 seconds
  digitalWrite(5, off);
  digitalWrite(6, on);
  digitalWrite(9, off);
  delay(250);
  digitalWrite(5, on);
  digitalWrite(9, on);
  delay(1250);
  digitalWrite(4, off);
  digitalWrite(7, off);
  delay(250);      //63 seconds 5th page
  digitalWrite(4, on);
  digitalWrite(7, on);
  delay(500);
  digitalWrite(12, on);
  delay(500);     //64 seconds
  digitalWrite(12, off);
  delay(250);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(6, on);
  digitalWrite(12, on);
  delay(500);      //65 seconds
  digitalWrite(1, on);
  digitalWrite(5, on);
  digitalWrite(12, off);
  delay(500);
  digitalWrite(1, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(1, on);
  delay(250);       //66 seconds
  digitalWrite(4, off);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(1, off);
  digitalWrite(4, on);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(1, on);
  delay(250);
  digitalWrite(7, off);
  delay(250);         //67 seconds
  digitalWrite(1, off);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(6, off);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(8, off);
  delay(250);        //68 seconds
  digitalWrite(5, off);
  digitalWrite(8, on);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(5, on);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(8, off);
  digitalWrite(10, off);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(8, on);
  digitalWrite(10, on);
  delay(250);        //69 seconds
  digitalWrite(3, off);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(3, on);
  digitalWrite(4, off);
  digitalWrite(10, off);
  delay(250);
  digitalWrite(4, on);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(3, off);
  digitalWrite(6, on);
  delay(250);        //70 seconds
  digitalWrite(3, on);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(12, off);
  delay(1000);      //71.5 seconds
  digitalWrite(12, on);
  delay(250);
  digitalWrite(8, off);
  delay(250);      //72 seconds
  digitalWrite(8, on);
  delay(250);
  digitalWrite(1, off);
  delay(250);
  digitalWrite(1, on);
  digitalWrite(4, off);
  delay(250);
  digitalWrite(4, on);
  digitalWrite(6, off);
  delay(250);        //73 seconds
  digitalWrite(1, off);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(7, off);
  delay(250);
  digitalWrite(5, on);
  digitalWrite(7, on);
  digitalWrite(9, off);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(9, on);
  delay(250);        //74 seconds
  digitalWrite(7, off);
  delay(250);
  digitalWrite(7, on);
  delay(250);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(7, off);
  delay(250);        //75 seconds 6th page
  digitalWrite(7, on);
  digitalWrite(8, off);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(4, on);
  delay(250);
  digitalWrite(8, off);
  digitalWrite(9, off);
  delay(250);        //76 seconds
  digitalWrite(6, off);
  digitalWrite(8, on);
  delay(250);
  digitalWrite(6, on);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(10, off);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(5, on);
  digitalWrite(10, on);
  delay(250);        //77 seconds
  digitalWrite(8, off);
  delay(250);
  digitalWrite(10, off);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(10, on);
  delay(250);
  digitalWrite(5, on);
  delay(250);        //78 seconds
  digitalWrite(7, off);
  delay(500);
  digitalWrite(4, off);
  delay(250);
  digitalWrite(4, on);
  delay(250);        //79 seconds
  digitalWrite(3, off);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(3, on);
  digitalWrite(6, off);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(6, on);
  digitalWrite(10, off);
  digitalWrite(11, on);
  digitalWrite(12, on);
  delay(250);
  digitalWrite(3, off);
  digitalWrite(8, on);
  digitalWrite(10, on);
  delay(250);        //80 seconds
  digitalWrite(3, on);
  digitalWrite(6, off);
  delay(250);
  digitalWrite(8, off);
  digitalWrite(10, off);
  digitalWrite(11, off);
  delay(250);
  digitalWrite(10, on);
  digitalWrite(12, off);
  delay(250);
  digitalWrite(4, off);
  digitalWrite(6, on);
  delay(250);        //81 seconds
  digitalWrite(4, on);
  digitalWrite(7, on);
  digitalWrite(11, on);
  delay(250);
  digitalWrite(5, off);
  digitalWrite(6, off);
  digitalWrite(11, off);
  delay(250);        //81.5 seconds
}
  