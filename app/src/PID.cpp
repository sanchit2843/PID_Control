/*Copyright 2022 Anukriti Singh, Sanchit Tanwar, 
 Bharadwaj Chukkala & Shantanu Parab */
#include "../../include/PID.hpp"
#include <algorithm>

/**
 * @brief Starting point for PID execution. Instantiate a PID object with initial and target velocities.
 * call the function calculate of PID class for 100 iterations
 * 
 * @return int 
 */

PID::PID(double Kp_, double Ki_, double Kd_) {
  
  prev_error =0;
  integral=0;
 

  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
}

double PID::calculate(double target, double present, double dt) { 
   double error = target -present;
  double p_term = Kp * error;

  integral=integral + (error * dt);
  double i_term = Ki * integral;

  double d_term = Kd * (error-prev_error)/dt;

  double output =p_term+i_term+d_term;
  prev_error=error;
  output=std::max(min_temprature,std::min(max_temprature,output));
  return output;
 }