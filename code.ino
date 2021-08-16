//Project by Practical Creators
//Include the necessary libraries

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//You should get Auth Token in the Blynk App
//Go to the Project Settings (nut icon).

char auth[] = "Your Auth Token";

//Your Wifi Credentials
//Set password to "" for open networks

char ssid[] = "Your ssid";
char pass[] = "Your password";

//initializing void setup

void setup(){
 Serial.begin(9600);
 Blynk.begin(auth,ssid,pass);
}

//initializing void loop

void loop(){
 Blynk.run();
}
