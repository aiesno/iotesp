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

char ssid[] = "Noh";
char pass[] = "12345678";
#include <Adafruit_NeoPixel.h>
 Adafruit_NeoPixel pixels = Adafruit_NeoPixel(5, 4, NEO_GRB + NEO_KHZ800);

BLYNK_WRITE(V0)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(13,HIGH);
    digitalWrite(14,LOW);
    analogWrite(25,200);
    digitalWrite(18,HIGH);
    digitalWrite(19,LOW);
    analogWrite(15,200);
    pixels.setPixelColor(0, 0xff0000);
    pixels.setPixelColor(1, 0xff0000);
    pixels.setPixelColor(2, 0xff0000);
    pixels.setPixelColor(3, 0xff0000);
    pixels.setPixelColor(4, 0xff0000);
    pixels.show();
    pixels.show();

  } else {
    digitalWrite(13,HIGH);
    digitalWrite(14,LOW);
    analogWrite(25,0);
    digitalWrite(18,HIGH);
    digitalWrite(19,LOW);
    analogWrite(15,0);
    pixels.setPixelColor(0, 0x000000);
    pixels.setPixelColor(1, 0x000000);
    pixels.setPixelColor(2, 0x000000);
    pixels.setPixelColor(3, 0x000000);
    pixels.setPixelColor(4, 0x000000);
    pixels.show();
    pixels.show();

  }
}

BLYNK_WRITE(V1)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(13,LOW);
    digitalWrite(14,HIGH);
    analogWrite(25,200);
    digitalWrite(18,LOW);
    digitalWrite(19,HIGH);
    analogWrite(15,200);
    pixels.setPixelColor(0, 0x3366ff);
    pixels.setPixelColor(1, 0x3366ff);
    pixels.setPixelColor(2, 0x3366ff);
    pixels.setPixelColor(3, 0x3366ff);
    pixels.setPixelColor(4, 0x3366ff);
    pixels.show();
    pixels.show();

  } else {
    digitalWrite(13,LOW);
    digitalWrite(14,HIGH);
    analogWrite(25,0);
    digitalWrite(18,LOW);
    digitalWrite(19,HIGH);
    analogWrite(15,0);
    pixels.setPixelColor(0, 0x000000);
    pixels.setPixelColor(1, 0x000000);
    pixels.setPixelColor(2, 0x000000);
    pixels.setPixelColor(3, 0x000000);
    pixels.setPixelColor(4, 0x000000);
    pixels.show();
    pixels.show();

  }
}

BLYNK_WRITE(V2)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(13,LOW);
    digitalWrite(14,HIGH);
    analogWrite(25,200);
    digitalWrite(18,HIGH);
    digitalWrite(19,LOW);
    analogWrite(15,200);
    pixels.setPixelColor(0, 0x33ff33);
    pixels.setPixelColor(1, 0x33ff33);
    pixels.setPixelColor(2, 0x33ff33);
    pixels.setPixelColor(3, 0x33ff33);
    pixels.setPixelColor(4, 0x33ff33);
    pixels.show();
    pixels.show();

  } else {
    digitalWrite(13,LOW);
    digitalWrite(14,HIGH);
    analogWrite(25,0);
    digitalWrite(18,HIGH);
    digitalWrite(19,LOW);
    analogWrite(15,0);
    pixels.setPixelColor(0, 0x000000);
    pixels.setPixelColor(1, 0x000000);
    pixels.setPixelColor(2, 0x000000);
    pixels.setPixelColor(3, 0x000000);
    pixels.setPixelColor(4, 0x000000);
    pixels.show();
    pixels.show();

  }
}

BLYNK_WRITE(V3)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(13,HIGH);
    digitalWrite(14,LOW);
    analogWrite(25,200);
    digitalWrite(18,LOW);
    digitalWrite(19,HIGH);
    analogWrite(15,200);
    pixels.setPixelColor(0, 0xffff00);
    pixels.setPixelColor(1, 0xffff33);
    pixels.setPixelColor(2, 0xffff33);
    pixels.setPixelColor(3, 0xffff33);
    pixels.setPixelColor(4, 0xffff33);
    pixels.show();
    pixels.show();

  } else {
    digitalWrite(13,HIGH);
    digitalWrite(14,LOW);
    analogWrite(25,0);
    digitalWrite(18,LOW);
    digitalWrite(19,HIGH);
    analogWrite(15,0);
    pixels.setPixelColor(0, 0x000000);
    pixels.setPixelColor(1, 0x000000);
    pixels.setPixelColor(2, 0x000000);
    pixels.setPixelColor(3, 0x000000);
    pixels.setPixelColor(4, 0x000000);
    pixels.show();
    pixels.show();

  }
}

Servo servo_23;
BLYNK_WRITE(V9)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    servo_23.write(90);

  } else {

  }
}

BLYNK_WRITE(V6)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    servo_23.write(0);

  } else {

  }
}

BlynkTimer Timer1;

void Timer1_TimerEvent()
{
  Blynk.virtualWrite(V4, ultrasonic(12,27));
}


void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(13,OUTPUT);
 pinMode(14,OUTPUT);
 pinMode(25,OUTPUT);
  pinMode(18,OUTPUT);
 pinMode(19,OUTPUT);
 pinMode(15,OUTPUT);
  pixels.begin();

  servo_23.attach(23);
  Timer1.setInterval(1000, Timer1_TimerEvent);

}

void loop() {
  Blynk.run();
  "".length();

  Timer1.run();
}