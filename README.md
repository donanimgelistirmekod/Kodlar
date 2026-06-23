# 🇹🇷 Republic of Turkiye - National Anthem (Istiklal Marsi)
*(Türkiye Cumhuriyeti - İstiklal Marşı)*

This project plays the Turkish National Anthem using an Arduino Uno, a passive buzzer, and 10 LEDs that animate in sync with the melody.
*(Bu proje, Arduino Uno, pasif buzzer ve melodi ile senkronize animasyon yapan 10 LED kullanarak Türkiye Cumhuriyeti İstiklal Marşı'nı çalar.)*

This code was prepared by the **@donanimgelistirme** channel.
*(Bu kod **@donanimgelistirme** kanalı tarafından hazırlanmıştır.)*

---

## 🔧 Components / *(Gerekli Malzemeler)*

- Arduino Uno
- 1x Passive Buzzer
- 10x LED (any color)
- 10x 220Ω Resistor
- Breadboard & Jumper Wires

---

## 📌 Pin Connections / *(Pin Bağlantıları)*

| Component / *(Bileşen)* | Arduino Pin |
|--------------------------|-------------|
| Passive Buzzer (+)       | 8           |
| LED 1                    | 2           |
| LED 2                    | 3           |
| LED 3                    | 4           |
| LED 4                    | 5           |
| LED 5                    | 6           |
| LED 6                    | 7           |
| LED 7                    | 9           |
| LED 8                    | 10          |
| LED 9                    | 11          |
| LED 10                   | 12          |

> All LED cathodes (short leg) and buzzer (−) connect to GND.
> *(Tüm LED katotları (kısa bacak) ve buzzer (−) GND'ye bağlanır.)*

---

## ⚙️ How It Works / *(Nasıl Çalışır)*

- On startup, the LEDs run a quick sweep animation left to right and back.
- During playback, LEDs bounce back and forth in sync with each note.
- The anthem plays in two verses, then waits 3 seconds before repeating.
- The YouTube channel link is printed to the Serial Monitor on startup (9600 baud).

*(Başlangıçta LED'ler soldan sağa ve geri hızlı bir tarama animasyonu yapar. Çalma sırasında LED'ler her nota ile birlikte ileri geri zıplar. Marş iki kıta olarak çalınır, ardından tekrar etmeden önce 3 saniye bekler. YouTube kanal bağlantısı, başlangıçta Serial Monitor'e yazdırılır (9600 baud).)*

📺 YouTube
[@donanimgelistirme](https://www.instagram.com/reel/DZ5lHN0oEXR/)

## 📺 YouTube / *(İzlemek için)*

**[@donanimgelistirme](https://www.youtube.com/@donanimgelistirme)**
