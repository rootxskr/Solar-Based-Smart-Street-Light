// Pin Definitions
#define LDR_PIN A0       // LDR connected to Analog Pin A0
#define PIR_PIN 2        // PIR motion sensor connected to Digital Pin 2
#define LED_PIN 9        // LED connected to PWM Pin 9

// Thresholds
#define DAY_THRESHOLD 600  // Adjust this value based on ambient light levels
#define DARK_BRIGHTNESS 25 // 10% brightness (255 * 0.1)
#define FULL_BRIGHTNESS 255 // 100% brightness

void setup() {
    pinMode(PIR_PIN, INPUT);   // Set PIR sensor as input
    pinMode(LED_PIN, OUTPUT);  // Set LED as output
    Serial.begin(9600);        // Start Serial Monitor for debugging
}

void loop() {
    int ldrValue = analogRead(LDR_PIN);  // Read LDR value
    int motionDetected = digitalRead(PIR_PIN); // Read PIR sensor state

    Serial.print("LDR Value: ");
    Serial.print(ldrValue);
    Serial.print(" | Motion: ");
    Serial.println(motionDetected);

    // If it's dark (LDR value is low)
    if (ldrValue < DAY_THRESHOLD) {
        if (motionDetected == HIGH) {
            analogWrite(LED_PIN, FULL_BRIGHTNESS); // Full brightness when motion is detected
            Serial.println("Motion detected! Light at full brightness.");
        } else {
            analogWrite(LED_PIN, DARK_BRIGHTNESS); // 10% brightness when no motion
            Serial.println("No motion. Light at 10% brightness.");
        }
    } else {
        analogWrite(LED_PIN, 0); // Turn off light during the day
        Serial.println("It's daytime. Light is off.");
    }

    delay(100);  // Short delay for stability
}
