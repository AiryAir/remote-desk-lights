# remote-desk-lights

Remote controlled RGB Overhead Desk Lights with Arduino

## How to make your own

### Contents:
* [Parts](https://github.com/AiryAir/remote-desk-lights#parts)
* [Circuit Diagram](https://github.com/AiryAir/remote-desk-lights#circuit-diagram)
* [Setup and Notes](https://github.com/AiryAir/remote-desk-lights#setup-and-notes)
* [Potential Problems](https://github.com/AiryAir/remote-desk-lights#potential-problems)


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

### Setup and Notes

IMPORTANT:

Setup the IR Remote Library in your Arduino IDE.

Link: https://www.arduino.cc/reference/en/libraries/irremote/

After you've hooked up the circuit as shown in the diagram, go ahead and download the .ino file in this repository.
Link: https://github.com/AiryAir/remote-desk-lights/blob/main/remote_desklights/remote_desklights.ino

Hook your Arduino up to your computer and upload the code to it.
Now you just gotta test it out!

If you used the exact same code as mine then here's some quick shortcuts on the remote:

0 -> all off
#### Blue
1 -> Blue LEDs on at low brightness

2 -> Blue LEDs on at medium brightness

3 -> Blue LEDs on at high brightness
#### Green
4 -> Green LEDs on at low brightness

5 -> Green LEDs on at medium brightness

6 -> Green LEDs on at high brightness
#### Red
7 -> Red LEDs on at low brightness

8 -> Red LEDs on at medium brightness

9 -> Red LEDs on at high brightness

Peel off the double sided tape on the back of your breadboard and slap in on any spot that is comfortable for you. You might wanna tape up the Arduino too. Its a little bulky and looks not-so-clean but if placed well, it will light your desk up really nicely and also doesnt show. 
Makes life simple and a little aethetic.

Also, dont forget to try all color combinations you can make with RGB LEDs! Try them all out for yourself. They look gooooooooooood.

### Potential Problems

#### 1) IR Reciever isnt picking anything up

Sometimes even when you have tried all troubleshooting tips but the IR Receiver still isnt working just
means one thing, ie, IR Receiver is hooked up the wrong way. Go ahead and google "IR Receiver Pins". It might help
if you have the part number with you. Just look up what the pins correspond and what you have connected it to and fix 
whatever is needed.

PS: Make sure the IR Receiver and Remote work in the same band of frequencies. Google the part numbers or try using
Google Lens to find the part number if you dont have it.

#### 2) Code is right, circuit is fine but the circuit still isnt working.

Solution:

IR Remotes have different "codes" for each of the button presses. They might vary from remote to remote.
So it might be possible your remote uses different "codes". 
Keep the circuit as it is but now upload this code to your arduino: 
https://github.com/AiryAir/IR-Remote-Values/blob/main/remote_val/remote_val.ino

Now, open the Serial Monitor on your Arduino IDE and hit the buttons on your remote. You will see some codes being
printed out on your serial monitor. Note down which button press generates what code on your Serial Monitor.

Now copy these values and replace them in the code (if (results.value == "replace here")). 

You might want to add a "0x" in front of each code that you replace.
For example the code for pressing "1" on my remote is "FF30CF" but in the code I have to write "0xFF30CF".

Note that there might be IR interference around you which might cause the serial monitor to print values even when you arent
pressing anything or even when you are pressing something but more than one value is being printed. If there's too much interference,
I suggest working in an isolated area or even turning off appliances like microwaves and bluetooth earphones around you.


#### 3) IR Receiver randomly stops working.

Solution:

The resistor and capacitor are important here since it will stabilise the input voltage for the IR Reciever.
My IR Reciever stopped working randomly after a couple button presses on the remote. A user on stackoverflow with a similar project
had the exact same issue where the reciever stopped working.
You might wanna check it out: 
https://arduino.stackexchange.com/a/13259


Feel free to hit me up on twitter if stuff still aint working. I might be able to help a little. The @ is on my GitHub profile.
