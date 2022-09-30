#include <algorithm>
#include <iostream>

class PID {
private:
  double Kp, Ki, Kd;
  double prev_error = 0;
  const int min_temprature = 0;
  const int max_temprature = 100;
  double integral = 0;

public:
  double calculate(double target, double present, double dt);
};