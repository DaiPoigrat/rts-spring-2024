const long intervalPin3 = 10000; //мкс
const long intervalPin5 = 1000;
const long intervalPin6 = 500;
const long intervalPin9 = 100;
const long intervalPin10 = 50;

int ledStatePin3 = LOW;
int ledStatePin5 = LOW;
int ledStatePin6 = LOW;
int ledStatePin9 = LOW;
int ledStatePin10 = LOW;

unsigned long previousMksPin3 = 0;
unsigned long previousMksPin5 = 0;
unsigned long previousMksPin6 = 0;
unsigned long previousMksPin9 = 0;
unsigned long previousMksPin10 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();

  if (currentMillis * 1000 - previousMksPin3 >= intervalPin3) {
      previousMksPin3 = currentMillis * 1000;
      if (ledStatePin3 == LOW) {
        ledStatePin3 = HIGH;
      } else {
        ledStatePin3 = LOW;
      }
      digitalWrite(3, ledStatePin3);
   }

  if (currentMillis * 1000 - previousMksPin5 >= intervalPin5) {
    previousMksPin5 = currentMillis * 1000;
    if (ledStatePin5 == LOW) {
      ledStatePin5 = HIGH;
    } else {
      ledStatePin5 = LOW;
    }
    digitalWrite(5, ledStatePin5);
  }

  if (currentMillis * 1000 - previousMksPin6 >= intervalPin6) {
    previousMksPin6 = currentMillis * 1000;
    if (ledStatePin6 == LOW) {
      ledStatePin6 = HIGH;
    } else {
      ledStatePin6 = LOW;
    }
    digitalWrite(6, ledStatePin6);
  }

  if (currentMillis * 1000 - previousMksPin9 >= intervalPin9) {
    previousMksPin9 = currentMillis * 1000;
    if (ledStatePin9 == LOW) {
      ledStatePin9 = HIGH;
    } else {
      ledStatePin9 = LOW;
    }
    digitalWrite(9, ledStatePin9);
  }

  if (currentMillis * 1000 - previousMksPin10 >= intervalPin10) {
    previousMksPin10 = currentMillis * 1000;
    if (ledStatePin10 == LOW) {
      ledStatePin10 = HIGH;
    } else {
      ledStatePin10 = LOW;
    }
    digitalWrite(10, ledStatePin10);
  }
}
