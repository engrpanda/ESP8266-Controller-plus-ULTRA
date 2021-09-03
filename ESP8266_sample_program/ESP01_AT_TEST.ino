#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);  //RX,TX

//  Arduino pin 10 (RX) to ESP8266 TX
//  Arduino pin 11 to voltage divider then to ESP8266 RX
//  Connect GND from the Arduiono to GND on the ESP8266
//  Pull ESP8266 CH_PD/EN HIGH
//
// When a command is entered in to the serial monitor on the computer 
// the Arduino will relay it to the ESP8266
/*
“AT” This will check if the module is connected properly and its functioning, the module will reply with an acknowledgment.
“AT+RST” This will reset the wifi module. Its good practice to reset it before or after it has been programmed.
“AT+GMR” This will mention the firmware version installed on the ESP8266. (Optional)
“AT+CWLAP” This will detect the Access points and their signal strengths available in the area.
AT+CWJAP=”SSID”,”PASSWORD” This connects the ESP8266 to the specified SSID in the AT command mentioned in the previous code.
“AT+CIFSR” This will display the ESP8266’s obtained IP address. If the user wants to disconnect from any access point then use the following AT command AT+CWJAP=””,””
“AT+CWMODE=1” This sets the Wifi mode. It should be always set to Mode 1 if the module is going to be used as a node (Like our mobile’s connection to the access points)
After this step is done, repeat step 2 to reset the Wifi Module. “AT+RST”
Now you can connect your ESP8266 to the internet and get started with IoT.

 */
int LEDPIN = 13;
 
void setup() 
{
    pinMode(LEDPIN, OUTPUT);
 
    Serial.begin(9600);     // communication with the host computer
    //while (!Serial)   { ; }
 
    // Start the software serial for communication with the ESP8266
    mySerial.begin(115200);  
 
    Serial.println("");
    Serial.println("Remember to to set Both NL & CR in the serial monitor.");
    Serial.println("Ready");
    Serial.println("");    
}
 
void loop() 
{
    // listen for communication from the ESP8266 and then write it to the serial monitor
    if ( mySerial.available() )   {  Serial.write( mySerial.read() );  }
 
    // listen for user input and send it to the ESP8266
    if ( Serial.available() )       {  mySerial.write( Serial.read() );  }
}
