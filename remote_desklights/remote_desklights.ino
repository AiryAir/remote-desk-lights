#include <IRremote.h>                                 //load the IRremote library

int RECV_PIN = 2;                                     //Set the IRreceiver on pin 2 on the Arduino

IRrecv irrecv(RECV_PIN);                              //Create an instance for irrecv
decode_results results;                                //Create an instance to store the collected data in

int BLED = 9;                                         //Assign the red LED to pin 8
int GLED = 10;   
int RLED = 6;                                      //Assign the blue LED to pin 11

void setup() {
  // put your setup code here, to run once:
  irrecv.enableIRIn();                          //start the reciever
        pinMode(BLED, OUTPUT);                        //set the pin 9 to output
        pinMode(GLED, OUTPUT);                        //set the pin 10 to output
        pinMode(RLED, OUTPUT);                        //set the pin 11 to output
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


      //    RED


      if (results.value == 0xFF42BD){ // button 7: red low
        analogWrite(RLED, 20);
      }
      irrecv.resume();

      if (results.value == 0xFF4AB5){ // button 8: red mid
        analogWrite(RLED, 127);
      }
     irrecv.resume();

     if (results.value == 0xFF52AD){ // button 9: red high
        analogWrite(RLED, 230);
      }
     irrecv.resume();

     
      if (results.value == 0xFF6897){ // button 0: turn off all
        analogWrite(BLED, 0);
        analogWrite(GLED, 0);
        analogWrite(RLED, 0);
      }
   irrecv.resume(); 
   }
}
