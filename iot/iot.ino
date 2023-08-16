#define BLYNK_TEMPLATE_ID           "TMPL66lCGWqRq"
#define BLYNK_DEVICE_NAME           "IotESP32"
#define BLYNK_AUTH_TOKEN            "2KLiaOI-L0uIbjeS0wmDIgUSZP96AJcj"

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "cuba";
char pass[] = "cubabarncahbaru";

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  Timer1.setInterval(1000, Timer1_TimerEvent);
}

void loop() {
}
