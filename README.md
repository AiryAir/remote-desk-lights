# remote-desk-lights

Remote controlled RGB Overhead Desk Lights with Arduino

## How to make your own

### Contents:
* [Parts](https://github.com/AiryAir/remote-desk-lights#parts)
* [Circuit Diagram](https://github.com/AiryAir/remote-desk-lights#circuit-diagram)
* [Setup and Notes]()


### Parts:
1) Arduino Uno
2) Breadboard
3) Red, Green, Blue LEDs
4) IR Remote
5) IR Reciever
6) Resistor
7) Capacitor
8) Jumper Cables

### Circuit Diagram

![circuit diagram](https://github.com/AiryAir/remote-desk-lights/blob/main/images/circuit.png)

The resistor and capacitor are important here since it will stabilise the input voltage for the IR Reciever.
My IR Reciever stopped working randomly after a couple button presses on the remote. A user on stackoverflow with a similar project
had the exact same issue where the reciever stopped working.
You might wanna check it out: 
https://arduino.stackexchange.com/a/13259


### Setup and Notes

After you've hooked up the circuit as shown in the diagram, go ahead and download the .ino file in this repository.
Link: https://github.com/AiryAir/remote-desk-lights/blob/main/remote_desklights/remote_desklights.ino

Hook your Arduino up to your computer and upload the code to it.
Now you just gotta test it out!

If you used the exact same code as mine then here's some quick shortcuts on the remote:

0 -> all off

1 -> Blue LEDs on at low brightness
2 -> Blue LEDs on at medium brightness
3 -> Blue LEDs on at high brightness

4 -> Green LEDs on at low brightness
5 -> Green LEDs on at medium brightness
6 -> Green LEDs on at high brightness

7 -> Red LEDs on at low brightness
8 -> Red LEDs on at medium brightness
9 -> Red LEDs on at high brightness

### Potential Problems
