/*Copyright 2022 Anukriti Singh, Sanchit Tanwar, 
 Bharadwaj Chukkala & Shantanu Parab */



#include "PID.hpp"

/**
 * @brief Starting point for PID execution. Instantiate a PID object with initial and target velocities.
 * call the function calculate of PID class for 100 iterations
 * 
 * @return int 
 */

PID::PID(double Kp_, double Ki_, double Kd_) {
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
}

double PID::calculate(double target, double present, double dt) { return 10.0; }
