#include <PID.hpp>

PID::PID(double Kp_, double Ki_, double Kd_) {
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
}

PID::calculate(double target, double present, double) { return 10; }