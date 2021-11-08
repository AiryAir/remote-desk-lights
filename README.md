# remote-desk-lights

Remote controlled RGB Overhead Desk Lights with Arduino

## How to make your own

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

![circuit diagram](https://github.com/AiryAir/remote-desk-lights/blob/main/images/remote_ir_circuit.png)

The resistor and capacitor are important here since it will stabilise the input voltage for the IR Reciever.
My IR Reciever stopped working randomly after a couple button presses on the remote. A user on stackoverflow with a similar project
had the exact same issue where the reciever stopped working.
You might wanna check it out: 
https://arduino.stackexchange.com/a/13259


### Final Setup and Notes