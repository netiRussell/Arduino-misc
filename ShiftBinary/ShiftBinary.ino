int latchPin = 11;
int clockPin = 10;
int dataPin = 12;
byte LEDs = 0b01010000;

void setup() {
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
  digitalWrite(latchPin, HIGH);

  // Shift to the right (explicit)
  // if(LEDs >= 0b10000000){
  //   LEDs = LEDs * 0b00000010;
  //   LEDs += 0b00000001;
  // } else {
  //   LEDs = LEDs * 0b00000010;
  // }

  // Shif to the left (explicit)
  // if(LEDs % 0b00000010 != 0){
  //   LEDs = LEDs / 0b00000010;
  //   LEDs += 0b10000000;
  // } else {
  //   LEDs = LEDs / 0b00000010;
  // }

  // Shift to the right (math)
  //LEDs = LEDs/128+LEDs*2;

  // Shift to the right (math)
  LEDs = LEDs*128+LEDs/2;

  

  delay(500);

}
