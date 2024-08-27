#define LED9 5
#define LED8 6
#define LED7 7
#define LED6 15
#define LED5 16
#define LED4 17
#define LED3 18
#define LED2 8
#define LED1 3

int arraytest[] = {LED9, LED8, LED7, LED6, LED5, LED4, LED3, LED2, LED1};

void setup() {
  pinMode(LED9, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED1, OUTPUT);
  Serial.begin(115200);
  Serial.println("Hello, ESP32-S3!");
}

void loop() {
  for (int i = 0; i < 9; i++) {
    digitalWrite(arraytest[i], HIGH);
    Serial.print("An ");
    Serial.println(i+1);
    delay(100);
  }
  delay(500); 
  for (int i = 0; i < 9; i++) {
    digitalWrite(arraytest[i], LOW);
    Serial.print("Aus ");
    Serial.println(i+1);
    delay(100);
  }
}
