#include <ESP32Servo.h>
#include <MakerKit.h>

#define BLYNK_TEMPLATE_ID           "TMPL66lCGWqRq"
#define BLYNK_DEVICE_NAME           "IotESP32"
#define BLYNK_AUTH_TOKEN            "2KLiaOI-L0uIbjeS0wmDIgUSZP96AJcj"


#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "cuba";
char pass[] = "cubabarncahbaru";

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(13,OUTPUT);
  servo_23.attach(23);
  Timer1.setInterval(1000, Timer1_TimerEvent);
}

void loop() {
  Blynk.run();
  Timer1.run();
}
