#include <TaskManagerIO.h>
 
const int led_pin = 3;
const int led_pin2 = 5;
const int led_pin3 = 6;
const int led_pin4 = 9;
const int led_pin5 = 10;


int led_state = LOW; 
int led_state2 = LOW;
int led_state3 = LOW;
int led_state4 = LOW;
int led_state5 = LOW;


unsigned long previous_millis = 0; 
unsigned long previous_millis2 = 0; 
unsigned long previous_millis3 = 0; 
unsigned long previous_millis4 = 0; 
unsigned long previous_millis5 = 0;  


const long interval = 10000;
const long interval2 = 1000;
const long interval3 = 500;
const long interval4 = 100;
const long interval5 = 50;  

void blink()
{
  if (led_state == LOW) {
      led_state = HIGH;
    } else {
      led_state = LOW;
    }
  digitalWrite(led_pin, led_state);
}
void blink2()
{
  if (led_state2 == LOW) {
      led_state2 = HIGH;
    } else {
      led_state2 = LOW;
    }
  digitalWrite(led_pin2, led_state2);
}
void blink3()
{
  if (led_state3 == LOW) {
      led_state3 = HIGH;
    } else {
      led_state3 = LOW;
    }
  digitalWrite(led_pin3, led_state3);
}
void blink4()
{
  if (led_state4 == LOW) {
      led_state4 = HIGH;
    } else {
      led_state4 = LOW;
    }
  digitalWrite(led_pin4, led_state4);
}
void blink5()
{
  if (led_state5 == LOW) {
      led_state5 = HIGH;
    } else {
      led_state5 = LOW;
    }
  digitalWrite(led_pin5, led_state5);
}


void setup() {

  pinMode(led_pin, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(led_pin3, OUTPUT);
  pinMode(led_pin4, OUTPUT);
  pinMode(led_pin5, OUTPUT);
  
  taskManager.schedule(repeatMicros(interval), blink);
  taskManager.schedule(repeatMicros(interval2), blink2);
  taskManager.schedule(repeatMicros(interval3), blink3);
  taskManager.schedule(repeatMicros(interval4), blink4);
  taskManager.schedule(repeatMicros(interval5), blink5);
}

void loop() {
  taskManager.runLoop();
}
