#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
// Set these to run example.
#define FIREBASE_HOST "UR_FIREBASE_HOST"
#define FIREBASE_AUTH "UR_FIREBASE_SECRET_KEY"

#define WIFI_SSID "UR_SSID"
#define WIFI_PASSWORD "UR_PASSWORD"
void setup() {
  Serial.begin(9600);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.set("LED_STATUS", 0);
  Firebase.set("COFFEE_STATUS", 0);
}
int n = 0;
int i = 0;
void loop() {
  // get value
  n = Firebase.getInt("LED_STATUS");
  i = Firebase.getInt("COFFEE_STATUS");
  // handle error
  if (n == 1) {
    Serial.println("LED ON");
    digitalWrite(D1, HIGH);
    //return;
    delay(1000);
  }
  else {
    Serial.println("LED OFF");
    digitalWrite(D1, LOW);
    //return;
  }
  if (i == 1) {
    Serial.println("COFFEE ON");
    digitalWrite(D2, HIGH);
    //return;
    delay(1000);
  }
  else {
    Serial.println("COFFEE OFF");
    digitalWrite(D2, LOW);
   // return;
  }
}



