#include <ESP8266WiFi.h>
WiFiClient client;
WiFiServer server(80);
const char* ssid = "espcontroller"; //router ssid
const char* password = "engrpandaece"; //router pw
String  command = ""; // Command received from Android device

// Set led Pins
int led1 = 16;
int led2 = 5;
int led3 = 4;

void setup()
{
  Serial.begin(115200);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);

  connectWiFi();
  server.begin();
}

void loop()
{
  client = server.available();
  if (!client) return;
  command = checkClient ();
  Serial.println(command);

  if (command == "B"  || command == "Red on")
  {
    digitalWrite(led1, LOW);
  }
  else if (command == "b" || command == "Red on")
  {
    digitalWrite(led1, HIGH);
  }
  else if (command == "C"  || command == "Green on")
  {
    digitalWrite(led2, HIGH);
  }
  else if (command == "c" || command == "Green off")
  {
    digitalWrite(led2, LOW);
  }
  else if (command == "D"  || command == "Blue on")
  {
    digitalWrite(led3, LOW);
  }
  else if (command == "d" || command == "blue")
  {
    digitalWrite(led3, HIGH);
  }
  else if (command == "all on")
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  else if (command == "alloff")
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  sendBackEcho(command); // send command echo back to android device
  command = "";
}
/* connecting WiFi */
void connectWiFi()
{
  Serial.println("Connecting to WIFI");
  WiFi.begin(ssid, password);
  while ((!(WiFi.status() == WL_CONNECTED)))
  {
    delay(300);
    Serial.print("..");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("NodeMCU Local IP is : ");
  Serial.print((WiFi.localIP()));
}

/* check command received from Android Device */
String checkClient (void)
{
  while (!client.available()) delay(1);
  String request = client.readStringUntil('\r');
  request.remove(0, 5);
  request.remove(request.length() - 9, 9);
  return request;
}

/* send command echo back to android device */
void sendBackEcho(String echo)
{
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println("");
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
  client.println(echo);
  client.println("</html>");
  client.stop();
  delay(1);
}
