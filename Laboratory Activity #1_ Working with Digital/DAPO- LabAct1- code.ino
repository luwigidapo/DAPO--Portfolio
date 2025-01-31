int ledArray[] = {12, 11, 10, 9, 8}; 
int i = 0;

void setup() {
  for (int j = 0; j < sizeof(ledArray) / sizeof(int); j++) {
    pinMode(ledArray[j], OUTPUT);
  }
}

void loop() {
  // 1 by 1 led ON
  for (i = 0; i < sizeof(ledArray) / sizeof(int); i++) {
    digitalWrite(ledArray[i], HIGH); // Light on
    delay(1000);
  }

  // 1 by 1 led OFF
  for (i = 0; i < sizeof(ledArray) / sizeof(int); i++) {
    digitalWrite(ledArray[i], LOW); // Light off
    delay(1000); 
  }
}
