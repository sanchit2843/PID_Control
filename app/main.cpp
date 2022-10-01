#include "PID.hpp"
#include <algorithm>
#include <iostream>

// class PID {

// private:
//   double Kp, Ki, Kd;
//   double prev_error = 0;
//   const int min_temprature = 0;
//   const int max_temprature = 100;
//   double integral = 0;

// public:
//   PID(double Kp_, double Ki_, double Kd_) {
//     Kp = Kp_;
//     Ki = Ki_;
//     Kd = Kd_;
//   }
//   double calculate(double target, double present, double dt) { return 10; }
// };

int main() {
  PID pid(0.1, 0.1, 0.1);
  double initial_temprature = 5;
  double final_temprature = 10;
  double dt = 0.01;
  for (size_t i = 0; i < 100; i++) {
    initial_temprature =
        pid.calculate(final_temprature, initial_temprature, dt);
    std::cout << "Updated Temprature after " << i * dt
              << "Seconds is :" << initial_temprature << std::endl;
  }
  return 0;
}
