# ESP8266 CONTROLLER PLUS ULTRA
app version: 1.3


3 Modes: SWITCH ON/OFF MODE, GAMEPAD MODE ,VOICE RECOGNITION MODE (more modes in progress).


For ESP8266 NODEMCU 12 E

- ok why plus ultra? first im a fan of all might(Plus ultra means go beyond your limit). :) 





This app makes you control your Arduino projects like RC car or any IOT applications using your mobile phone thru WIFI.

All the files (apk, circuit, program, codes) are all provided) :)



# Compatible with android 4.4.4 (API 19) to android 9(API 28). 

This app is under beta test.  Any bugs or error can be reported or send to my email. (engrpandaece@gmail.com) 


Check the provided Schematic Fritzing for connections. 

![screen1](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/plus_ultra.jpg)
![screen1](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/1.jpg)
#
You can choose from Switch ON/OFF mode, Gamepad mode, Voice Recognition mode. (will update more mode soon).

![menu](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/2.jpg)


# NOTE: Important. 
Before uploading to arduino disconnect first any connection in PIN D0 & D1 (TX,RX).

#
# 1.) SWITCH ON/OFF MODE
PARTS REQUIRED: 
- ESP8266 or similar
- Anything Digital OUTPUT i.e LED's, Relay etc.
- Some resistors
- Connecting wires
- Breadboard

Labels(D0, D1, D2 etc) can be Rename. i.e Light1, LED1, Relay1, .

Digital pins GPIO PINS can be used.

![2](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/3.jpg)

#
# Sample Connection of Simple LED-Bluetooth control connection. 

You can add LED up to 18LEDs (D2-A5) to control.


![hc06 led_bb](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/Schematic%20fritzing%20diagram/esp1.jpg)

#
# Sample Connection of Relay-Bluetooth control connection. 

Up to 13 channels D2-A5Relay can be used. Using relay you can control your lights i.e bulbs or any appliances for IOT applications.

![hc06 relay_bb](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/Schematic%20fritzing%20diagram/esp2.jpg)



#
# Serial Code to ESP

 Switch ON/OFF Serial code to ESP
 
![SWITCH_CODE](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/SWITCH_CODE.png)

#
# 2.) GAMEPAD MODE
PARTS REQUIRED: 
- ROBOT CAR CHASIS WITH DC MOTORS
- ESP or similar
- L298N MOTOR DRIVER
- Connecting wires

![1](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/4.jpg)

#
# Sample Connection of RC Car-ESP control connection. 

Using this controller you can control your RC car forward, Turnleft, turnright, backward etc. 


![hc06 car_bb](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/Schematic%20fritzing%20diagram/esp3.jpg)


#
# Serial Code to Arduino

 Gamepad Serial code to Arduino
 
 NOTE: UP, LEFT, RIGHT, DOWN, SQUARE, TRIANGLE, CIRCLE, EXS Buttons can be hold. not holding serial value is "S".

![GAMEPAD_CODE](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/GAMEPAD_CODE.png)


#
# 3.) VOICE RECOGNITION MODE

This mode use google tts & speech recognition. Make sure the device has it. This mode lets the user control IOT applications using voice command thru arduino.

![voice](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/5.jpg)



