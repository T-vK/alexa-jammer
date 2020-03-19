#define TRANSDUCER_PIN 9
#define FREQUENCY_MIN 39000
#define FREQUENCY_MAX 41000

void setup() {
  pinMode(TRANSDUCER_PIN, OUTPUT);
}

void loop() {
  tone(TRANSDUCER_PIN, random(FREQUENCY_MIN, FREQUENCY_MAX));
}
