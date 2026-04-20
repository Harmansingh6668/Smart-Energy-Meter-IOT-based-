#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL3e69uAMBW"
#define BLYNK_TEMPLATE_NAME "energy meter"
#define BLYNK_AUTH_TOKEN "nTpvivxu4-IuvJrSB-5EF_VhDfu8JAIZ"


#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "nTpvivxu4-IuvJrSB-5EF_VhDfu8JAIZ";
char ssid[] = "Sachin";
char pass[] = "13032002";

#define VOLT_PIN 34
#define CURR_PIN 35
#define RELAY_PIN 26

float voltage, current, power;
float energy = 0;

unsigned long lastTime;

BlynkTimer timer;

// Relay control from app
BLYNK_WRITE(V4) {
  int state = param.asInt();
  digitalWrite(RELAY_PIN, state);
}

void sendData() {
  int vRaw = analogRead(VOLT_PIN);
  int cRaw = analogRead(CURR_PIN);

  voltage = (vRaw / 4095.0) * 230.0;
  current = (cRaw / 4095.0) * 20.0;

  power = voltage * current;

  unsigned long now = millis();
  float hours = (now - lastTime) / 3600000.0;
  energy += power * hours;
  lastTime = now;

  Blynk.virtualWrite(V0, voltage);
  Blynk.virtualWrite(V1, current);
  Blynk.virtualWrite(V2, power);
  Blynk.virtualWrite(V3, energy);

  Serial.println("Data Sent to Blynk");
}

void setup() {
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);

  Blynk.begin(auth, ssid, pass);

  lastTime = millis();

  timer.setInterval(1000L, sendData);
}

void loop() {
  Blynk.run();
  timer.run();
}