#include <IRremote.h>                                 //load the IRremote library

int RECV_PIN = 2;                                     //Set the IRreceiver on pin 2 on the Arduino

IRrecv irrecv(RECV_PIN);                              //Create an instance for irrecv
decode_results results;                                //Create an instance to store the collected data in

int BLED = 9;                                         //Assign the red LED to pin 8
int GLED = 10;                                         //Assign the blue LED to pin 9

void setup() {
  // put your setup code here, to run once:
  irrecv.enableIRIn();                          //start the reciever
        pinMode(BLED, OUTPUT);                        //set the pin 8 to output
        pinMode(GLED, OUTPUT);                        //set the pin 12 to output
}

void loop() {
  // put your main code here, to run repeatedly:

   if (irrecv.decode(&results)){

     
      //  BLUE

      
      if (results.value == 0xFF30CF){ // button 1: blue low
        analogWrite(BLED, 20);
      }
       irrecv.resume();
      if (results.value == 0xFF18E7){ // button 2: blue mid
        analogWrite(BLED, 127);
      }
       irrecv.resume();
      if (results.value == 0xFF7A85){ // button 3: blue high
        analogWrite(BLED, 230);
      }
       irrecv.resume();


      //  GREEN

      
      if (results.value == 0xFF10EF){ // button 4: green low
        analogWrite(GLED, 20);
      }
      irrecv.resume();
      if (results.value == 0xFF38C7){ // button 5: green mid
        analogWrite(GLED, 127);
      }
      irrecv.resume();
      if (results.value == 0xFF5AA5){ // button 6: green high
        analogWrite(GLED, 230);
      }
      irrecv.resume();

      // TOGGLE OFF

      if (results.value == 0xFF42BD){ // button 7: blue off
        analogWrite(BLED, 0);
      }
      irrecv.resume();

      if (results.value == 0xFF4AB5){ // button 8: green off
        analogWrite(GLED, 0);
      }
     irrecv.resume();

     
      if (results.value == 0xFF6897){ // button 0: turn of all
        analogWrite(BLED, 0);
        analogWrite(GLED, 0);
      }
   irrecv.resume(); 
   }
}
