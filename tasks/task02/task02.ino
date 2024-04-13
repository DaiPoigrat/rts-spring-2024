#include <TaskManagerIO.h>

long times[5] = {10000, 1000, 500, 100, 50}; //10мс 1мс 500мкс 100мкс 50мкс
int* state = new int[5];
int pins[5] = {3, 5, 6, 9, 10};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 5; i++) 
  {
    state[i] = LOW;
    pinMode(pins[i], OUTPUT);
  }
  // Create a task that's scheduled every times[0]
  taskid_t task0 = taskManager.scheduleFixedRate(times[0], [] {
      if (state[0] == LOW) 
      {
        state[0] = HIGH;
      }
      else {
        state[0] = LOW;
      }

      digitalWrite(pins[0], state[0]);
    }, TIME_MICROS);

  taskid_t task1 = taskManager.scheduleFixedRate(times[1], [] {
      if (state[1] == LOW) 
      {
        state[1] = HIGH;
      }
      else {
        state[1] = LOW;
      }

      digitalWrite(pins[1], state[1]);
    }, TIME_MICROS);

  taskid_t taskId2 = taskManager.scheduleFixedRate(times[2], [] {
      if (state[2] == LOW) 
      {
        state[2] = HIGH;
      }
      else {
        state[2] = LOW;
      }

      digitalWrite(pins[2], state[2]);
    }, TIME_MICROS);

  taskid_t task3 = taskManager.scheduleFixedRate(times[3], [] {
      if (state[3] == LOW) 
      {
        state[3] = HIGH;
      }
      else {
        state[3] = LOW;
      }

      digitalWrite(pins[3], state[3]);
    }, TIME_MICROS);

  taskid_t task4 = taskManager.scheduleFixedRate(times[4], [] {
      if (state[4] == LOW) 
      {
        state[4] = HIGH;
      }
      else {
        state[4] = LOW;
      }

      digitalWrite(pins[4], state[4]);
    }, TIME_MICROS);

  taskid_t task5 = taskManager.scheduleFixedRate(times[5], [] {
      if (state[5] == LOW) 
      {
        state[5] = HIGH;
      }
      else {
        state[5] = LOW;
      }

      digitalWrite(pins[5], state[5]);
    }, TIME_MICROS);
}

void loop() {
  // put your main code here, to run repeatedly:
  taskManager.runLoop();
}
