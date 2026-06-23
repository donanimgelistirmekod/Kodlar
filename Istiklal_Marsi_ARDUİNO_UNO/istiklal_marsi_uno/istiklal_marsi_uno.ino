/*
 * Republic of Turkiye - National Anthem (Istiklal Marsi)
 * (Türkiye Cumhuriyeti - İstiklal Marşı)
 *
 * This code was prepared by the @donanimgelistirme channel.
 * You can use the following pin connections with Arduino Uno and a passive buzzer.
 * (Bu kod @donanimgelistirme kanalı tarafından hazırlanmıştır.
 * Aşağıdaki pin bağlantılarını kullanarak Arduino Uno ve pasif buzzer kullanabilirsiniz.)
 *
 * Pin Connections / (Pin Bağlantıları):
 *   Passive Buzzer (+) -> Pin 8
 *   LED 1  -> Pin 2
 *   LED 2  -> Pin 3
 *   LED 3  -> Pin 4
 *   LED 4  -> Pin 5
 *   LED 5  -> Pin 6
 *   LED 6  -> Pin 7
 *   LED 7  -> Pin 9
 *   LED 8  -> Pin 10
 *   LED 9  -> Pin 11
 *   LED 10 -> Pin 12
 */

#define PASSIVE_BUZZER 8

const int LED_PINS[10] = {2, 3, 4, 5, 6, 7, 9, 10, 11, 12};

#define NOTE_AS1  932
#define NOTE_B1   988
#define NOTE_C2   1046
#define NOTE_D2   1174
#define NOTE_DS2  1244
#define NOTE_E2   1318
#define NOTE_F2   1396
#define NOTE_G2   1568
#define NOTE_GS2  1660
#define NOTE_A3   1760
#define NOTE_AS3  1865
#define NOTE_C3   2093
#define NOTE_CS3  2217
#define NOTE_D3   2349
#define NOTE_DS3  2489
#define NOTE_F3   2794
#define REST      0

int  currentLed   = 0;
bool ledDirection = true;

void playNote(int freq, int dur) {
  for (int i = 0; i < 10; i++) {
    digitalWrite(LED_PINS[i], LOW);
  }

  digitalWrite(LED_PINS[currentLed], HIGH);

  if (ledDirection) {
    currentLed++;
    if (currentLed >= 10) { currentLed = 8; ledDirection = false; }
  } else {
    currentLed--;
    if (currentLed < 0) { currentLed = 1; ledDirection = true; }
  }

  if (freq == REST) {
    noTone(PASSIVE_BUZZER);
  } else {
    tone(PASSIVE_BUZZER, freq);
  }
  delay(dur);
}

void silence(int dur) {
  noTone(PASSIVE_BUZZER);
  for (int i = 0; i < 10; i++) digitalWrite(LED_PINS[i], LOW);
  delay(dur);
}

void playMars() {
  playNote(NOTE_C2,  800);
  playNote(NOTE_F2,  800);
  playNote(NOTE_G2,  800);
  playNote(NOTE_GS2, 800);
  playNote(NOTE_E2,  400);
  playNote(NOTE_G2,  200);
  playNote(NOTE_F2, 1600);
  silence(300);

  playNote(NOTE_F2,  800);
  playNote(NOTE_AS3, 800);
  playNote(NOTE_C3,  800);
  playNote(NOTE_CS3, 800);
  playNote(NOTE_A3,  400);
  playNote(NOTE_C3,  200);
  playNote(NOTE_AS3,1600);

  playNote(NOTE_C3,  200);
  playNote(NOTE_AS3, 200);
  playNote(NOTE_C3,  200);
  playNote(NOTE_G2,  400);
  silence(100);
  playNote(NOTE_G2,  400);
  playNote(NOTE_AS1, 200);
  playNote(NOTE_GS2, 400);
  playNote(NOTE_E2,  200);
  playNote(NOTE_F2,  400);
  playNote(NOTE_G2,  200);
  playNote(NOTE_GS2, 400);
  playNote(NOTE_AS1, 200);
  playNote(NOTE_C3,  400);
  playNote(NOTE_CS3, 200);
  playNote(NOTE_DS3, 400);
  playNote(NOTE_F3,  200);
  playNote(NOTE_DS3, 400);

  playNote(NOTE_DS2, 200);
  playNote(NOTE_D2,  200);
  playNote(NOTE_DS2, 200);
  playNote(NOTE_C3,  800);
  playNote(NOTE_AS1, 800);
  playNote(NOTE_GS2,1600);

  playNote(NOTE_C2,  200);
  playNote(NOTE_B1,  200);
  playNote(NOTE_C2,  200);
  playNote(NOTE_G2,  800);
  playNote(NOTE_C2,  800);
  playNote(NOTE_C3,  800);
  playNote(NOTE_AS1, 200);
  playNote(NOTE_GS2, 200);
  playNote(NOTE_G2,  400);
  playNote(NOTE_GS2, 200);
  playNote(NOTE_F2,  800);

  playNote(NOTE_F3,  800);
  playNote(NOTE_DS3, 200);
  playNote(NOTE_CS3, 400);
  playNote(NOTE_C3,  200);
  playNote(NOTE_AS1, 400);
  playNote(NOTE_GS2, 200);
  playNote(NOTE_G2,  400);
  playNote(NOTE_F2,  200);
  playNote(NOTE_C3,  400);
  playNote(NOTE_C2,  800);
  playNote(NOTE_F2, 1600);

  silence(600);

  playNote(NOTE_C2,  800);
  playNote(NOTE_F2,  800);
  playNote(NOTE_G2,  800);
  playNote(NOTE_GS2, 800);
  playNote(NOTE_E2,  400);
  playNote(NOTE_G2,  200);
  playNote(NOTE_F2, 1600);
  silence(300);

  playNote(NOTE_F2,  800);
  playNote(NOTE_AS3, 800);
  playNote(NOTE_C3,  800);
  playNote(NOTE_CS3, 400);
  playNote(NOTE_AS3, 400);
  playNote(NOTE_A3,  400);
  playNote(NOTE_C3,  400);
  playNote(NOTE_AS3, 800);

  playNote(NOTE_C3,  200);
  playNote(NOTE_AS3, 200);
  playNote(NOTE_C3,  200);
  playNote(NOTE_G2,  400);
  silence(100);
  playNote(NOTE_G2,  400);
  playNote(NOTE_AS1, 200);
  playNote(NOTE_GS2, 400);
  playNote(NOTE_E2,  200);
  playNote(NOTE_F2,  400);
  playNote(NOTE_G2,  200);
  playNote(NOTE_GS2, 400);
  playNote(NOTE_AS1, 200);
  playNote(NOTE_C3,  400);
  playNote(NOTE_CS3, 200);
  playNote(NOTE_DS3, 400);
  playNote(NOTE_F3,  200);
  playNote(NOTE_DS3, 400);

  playNote(NOTE_DS2, 200);
  playNote(NOTE_D2,  200);
  playNote(NOTE_DS2, 200);
  playNote(NOTE_C3,  800);
  playNote(NOTE_AS1, 800);
  playNote(NOTE_GS2,1600);

  playNote(NOTE_C2,  200);
  playNote(NOTE_B1,  200);
  playNote(NOTE_C2,  200);
  playNote(NOTE_G2,  800);
  playNote(NOTE_C2,  800);
  playNote(NOTE_C3,  800);
  playNote(NOTE_AS1, 200);
  playNote(NOTE_GS2, 200);
  playNote(NOTE_G2,  400);
  playNote(NOTE_GS2, 200);
  playNote(NOTE_F2,  800);

  playNote(NOTE_F3,  800);
  playNote(NOTE_DS3, 200);
  playNote(NOTE_CS3, 400);
  playNote(NOTE_C3,  200);
  playNote(NOTE_AS1, 400);
  playNote(NOTE_GS2, 200);
  playNote(NOTE_G2,  400);
  playNote(NOTE_F2,  200);
  playNote(NOTE_C3,  400);
  playNote(NOTE_C2,  800);
  playNote(NOTE_F2, 1600);

  noTone(PASSIVE_BUZZER);
  for (int i = 0; i < 10; i++) digitalWrite(LED_PINS[i], LOW);
  delay(300);
}

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 10; i++) {
    pinMode(LED_PINS[i], OUTPUT);
    digitalWrite(LED_PINS[i], LOW);
  }
  pinMode(PASSIVE_BUZZER, OUTPUT);

  delay(500);

  for (int i = 0; i < 10; i++) { digitalWrite(LED_PINS[i], HIGH); delay(35); }
  for (int i = 9; i >= 0; i--) { digitalWrite(LED_PINS[i], LOW);  delay(35); }
  delay(500);

  Serial.println("donanimgelistirme YouTube: https://www.youtube.com/@donanimgelistirme");
}

void loop() {
  currentLed   = 0;
  ledDirection = true;
  playMars();
  delay(3000);
}
