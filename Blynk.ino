#define BLYNK_TEMPLATE_ID "" 
#define BLYNK_TEMPLATE_NAME "" 
#define BLYNK_AUTH_TOKEN "" 
 
#define BLYNK_PRINT Serial
#include <gpio.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
 
char auth[] = BLYNK_AUTH_TOKEN;
 
char ssid[] = "Alien"; // Your Wifi Name
char pass[] = ""; 
{eAQ  W12zas SGJKL' 
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D0, LOW); 
    Serial.println("LED ON"); 
  }
  if(value == 0)
  {
     digitalWrite(D0, HIGH);
     Serial.println("LED OFF");
  }
}
 
BLYNK_WRITE(V2)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D1, LOW);
    Serial.println("LED ON");
  }
  if(value == 0)
  {
     digitalWrite(D1, HIGH);  
     Serial.println("LED OFF");
  }
}
 
BLYNK_WRITE(V3)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D2, LOW);
    Serial.println("LED ON");
  }
  if(value == 0)
  {
     digitalWrite(D2, HIGH);
     Serial.println("LED OFF");
  }
}
 
BLYNK_WRITE(V4)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D3, LOW);
    Serial.println("LED ON");
  }
  if(value == 0)
  {
     digitalWrite(D3, HIGH);
     Serial.println("LED OFF");
  }
}
 
 
void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  pinMode(D0,OUTPUT); 
  pinMode(D1,OUTPUT); 
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
}
 
void loop()
{
  Blynk.run();
}
