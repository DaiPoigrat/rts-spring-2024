#include <TaskManagerIO.h>

const long intervalPin3 = 10000; // мкс
const long intervalPin5 = 1000;
const long intervalPin6 = 500;
const long intervalPin9 = 100;
const long intervalPin10 = 50;

int ledStatePin3 = LOW;
int ledStatePin5 = LOW;
int ledStatePin6 = LOW;
int ledStatePin9 = LOW;
int ledStatePin10 = LOW;

TaskManagerIO taskManager;

void togglePin3() {
  if (ledStatePin3 == LOW) {
    ledStatePin3 = HIGH;
  } else {
    ledStatePin3 = LOW;
  }
  digitalWrite(3, ledStatePin3);
}

void togglePin5() {
  if (ledStatePin5 == LOW) {
    ledStatePin5 = HIGH;
  } else {
    ledStatePin5 = LOW;
  }
  digitalWrite(5, ledStatePin5);
}

void togglePin6() {
  if (ledStatePin6 == LOW) {
    ledStatePin6 = HIGH;
  } else {
    ledStatePin6 = LOW;
  }
  digitalWrite(6, ledStatePin6);
}

void togglePin9() {
  if (ledStatePin9 == LOW) {
    ledStatePin9 = HIGH;
  } else {
    ledStatePin9 = LOW;
  }
  digitalWrite(9, ledStatePin9);
}

void togglePin10() {
  if (ledStatePin10 == LOW) {
    ledStatePin10 = HIGH;
  } else {
    ledStatePin10 = LOW;
  }
  digitalWrite(10, ledStatePin10);
}

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  taskManager.StartTask(togglePin3, intervalPin3);
  taskManager.StartTask(togglePin5, intervalPin5);
  taskManager.StartTask(togglePin6, intervalPin6);
  taskManager.StartTask(togglePin9, intervalPin9);
  taskManager.StartTask(togglePin10, intervalPin10);
}

void loop() {
  taskManager.Loop();
}
