/*  Connects to the home WiFi network
 *  Asks some network parameters
 *  Sends and receives message from the server in every 2 seconds
 *  Communicates: wifi_server_01.ino
 */ 
#include <SPI.h>
#include <ESP8266WiFi.h>
#define CAYENNE_PRINT Serial
#include <CayenneMQTTESP8266.h>

byte ledPin = 2;
char ssid[] = "Wifi";                   // SSID of your home WiFi
char pass[] = "kwertie942";             // password of your home WiFi

unsigned long askTimer = 0;

char username[] = "521fe200-d090-11e9-b49d-5f4b6757b1bf";
char password[] = "73e0effb24b5dfffdfd4ed696db15637e3019440";
char clientID[] = "edecadd0-d090-11e9-84bb-8f71124cfdfb";

long a = 0;
String x = "0";
String data;
void setup() {
  Serial.begin(115200);               // only for debug
  Cayenne.begin(username, password, clientID, ssid, pass);
/*  Serial.println("Connected to wifi");
  Serial.print("Status: "); Serial.println(WiFi.status());    // Network parameters
  Serial.print("IP: ");     Serial.println(WiFi.localIP());
  Serial.print("Subnet: "); Serial.println(WiFi.subnetMask());
  Serial.print("Gateway: "); Serial.println(WiFi.gatewayIP());
  Serial.print("SSID: "); Serial.println(WiFi.SSID());
  Serial.print("Signal: "); Serial.println(WiFi.RSSI());*/
  pinMode(ledPin, OUTPUT);
}

void loop () {
  static int a = 0;
   Cayenne.virtualWrite(1,a++);
   delay(1000);
}
CAYENNE_IN(0)
{
  // Write value to turn the relay switch on or off. This code assumes you wire your relay as normally open.
  if (getValue.asInt() == 0) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
