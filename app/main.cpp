#include <PID.h>
#include <algorithm>
#include <iostream>

int main() {
  PID pid(0.1, 0.1, 0.1);
  int initial_temprature = 5;
  int final_temprature = 10;
  double dt = 0.01;
  for (size_t i = 0; i < 100; i++) {
    initial_temprature =
        pid.calculate(final_temprature, initial_temprature, dt);
    std::cout << "Updated Temprature after " << i * dt
              << "Seconds is :" << initial_temprature << std::endl;
  }
  return 0;
}
