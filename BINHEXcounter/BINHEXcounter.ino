// DEC-BIN-HEX counter by Ruslan Abdulin

int holder = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print((String)"Decimal: " + holder + " binary: ");
  Serial.print(holder, BIN);
  Serial.print(" hexadecimal: ");
  Serial.println(holder, HEX);
  delay(500);
  holder++;

}
