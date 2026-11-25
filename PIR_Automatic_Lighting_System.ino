// PIR Based Automatic Lighting System
// Project by Shivansh Nayak and Shivang Kumar Shrivas

const int PIR_PIN = 2;
const int RELAY_PIN = 8;
const int BUZZER_PIN = 9;
const int LED_PIN = 13;

const unsigned long HOLD_TIME = 10000; // 10 seconds

// Many 5V relay modules are active LOW.
// If your relay works in reverse, change this to false.
const bool RELAY_ACTIVE_LOW = true;

unsigned long lastMotionTime = 0;
bool motionDetected = false;

void relayOn() {
  digitalWrite(RELAY_PIN, RELAY_ACTIVE_LOW ? LOW : HIGH);
}

void relayOff() {
  digitalWrite(RELAY_PIN, RELAY_ACTIVE_LOW ? HIGH : LOW);
}

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  relayOff();
  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  Serial.begin(9600);

  Serial.println("PIR Automatic Lighting System");
  Serial.println("Sensor warming up...");

  delay(10000);

  Serial.println("System Ready!");
}

void loop() {
  int pirState = digitalRead(PIR_PIN);

  if (pirState == HIGH) {
    lastMotionTime = millis();

    if (!motionDetected) {
      motionDetected = true;

      Serial.println("Motion Detected!");
      digitalWrite(BUZZER_PIN, HIGH);
      delay(100);
      digitalWrite(BUZZER_PIN, LOW);
    }

    relayOn();
    digitalWrite(LED_PIN, HIGH);
  }

  if (motionDetected &&
      millis() - lastMotionTime >= HOLD_TIME) {

    motionDetected = false;

    relayOff();
    digitalWrite(LED_PIN, LOW);

    Serial.println("No Motion - Light OFF");
  }
}