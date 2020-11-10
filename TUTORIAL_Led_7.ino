/*
   TUTORIAL LED PADA ARDUINO
   BLINK (LED BERKEDIP) TANPA PENGGUNAAN DELAY
   D4 -> Led Merah
   D5 -> Led Hijau (pin PWM)
   D6 -> Led Biru (pin PWM)
   D7 -> Led Kuning
*/

#define pinLed 4

int statusLed = LOW;
unsigned long millisSebelumnya = 0;
const long interval = 1000;

void setup() {
  pinMode(pinLed, OUTPUT); //set menjadi output
}

void loop() {
  unsigned long millisSekarang = millis();
  if(millisSekarang - millisSebelumnya >= interval){
    millisSebelumnya = millisSekarang;
    statusLed=!statusLed;
  }
  digitalWrite(pinLed, statusLed);
}
