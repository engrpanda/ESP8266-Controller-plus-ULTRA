# ESP8266 CONTROLLER PLUS ULTRA
For ESP8266 NODEMCU 12 E

# 3 MODES
  - SWITCH ON/OFF MODE
  - GAMEPAD MODE 
    - Arrow button 
    - Analog joystick button
    - IP CAM Video VIEWER
  - VOICE RECOGNITION MODE



- ok why plus ultra? first im a fan of all might(Plus ultra means go beyond your limit). :) 

# code: 
https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/tree/master/ESP8266_sample_program

# fritzing:
https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/tree/master/Schematic%20fritzing%20diagram

# app:
https://play.google.com/store/apps/details?id=com.Espwifi.panda&hl=en_US

https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/releases


This app makes you control your ESP's projects like RC car or any IOT applications using your mobile phone thru WIFI.

All the files (apk, circuit, program, codes) are all provided) :)

# NEW to ESP? check this link to get started:

https://www.instructables.com/id/Programming-ESP8266-ESP-12E-NodeMCU-Using-Arduino-/

https://tttapa.github.io/ESP8266/Chap01%20-%20ESP8266.html

#
# Compatible with android 4.4.4 (API 19) to android 9(API 28). 

This app is under beta test.  Any bugs or error can be reported or send to my email. (engrpandaece@gmail.com) 


Check the provided Schematic Fritzing for connections. 

![screen1](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/plus_ultra.jpg)
![screen1](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/1.jpg)
#
You can choose from Switch ON/OFF mode, Gamepad mode, Voice Recognition mode. (will update more mode soon).

![menu](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/2.jpg)


#
# 1.) SWITCH ON/OFF MODE
PARTS REQUIRED: 
- ESP8266 or similar
- Anything Digital OUTPUT i.e LED's, Relay etc.
- Some resistors
- Connecting wires
- Breadboard

Labels(D0, D1, D2 etc) can be Rename. i.e Light1, LED1, Relay1, .


![2](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/3.jpg)

#
# Sample Connection of Simple LED-ESP control connection. 

You can add LED up to 13LEDs.


![hc06 led_bb](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/Schematic%20fritzing%20diagram/esp1.jpg)

# Type your Router SSID and Password
a. Upload and open the serial monitor and copy the ESP IP address to the app.

![hc06 led_bb](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/esp.png)

b. alternatively you can use "FING" to search your IP address.
https://www.fing.com/products/fing-app


#
![hc06 led_bb](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/esp1.png)



# Sample Connection of Relay-ESP control connection. 

Up to 13 channels can be used. Using relay you can control your lights i.e bulbs or any appliances for IOT applications.

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
![1](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/ipcam.jpg?raw=true)

# IP CAM VIEWER

Using 3rd party IP CAM (copy the IP address) - Must be the same network

link:https://play.google.com/store/apps/details?id=com.pas.webcam&hl=en_US

#
# Sample Connection of RC Car-ESP control connection. 

Using this controller you can control your RC car forward, Turnleft, turnright, backward etc. 


![hc06 car_bb](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/Schematic%20fritzing%20diagram/esp3.jpg)


#
# Serial Code to ESP

 Gamepad Serial code to ESP
 
 NOTE: UP, LEFT, RIGHT, DOWN, SQUARE, TRIANGLE, CIRCLE, EXS Buttons can be hold. not holding serial value is "S" ,"s".

![GAMEPAD_CODE](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/GAMEPAD_CODE.png)


#
# 3.) VOICE RECOGNITION MODE

This mode use google tts & speech recognition. Make sure the device has it. This mode lets the user control IOT applications using voice command thru ESP.

![voice](https://github.com/engrpanda/ESP8266-Controller-plus-ULTRA/blob/master/APP%20PICS/5.jpg)



