/*Copyright 2022 Anukriti Singh, Sanchit Tanwar, 
 Bharadwaj Chukkala & Shantanu Parab */

#include <algorithm>
#include <iostream>

class PID {
  
  /**
   * @brief Construct a new PID object
   *
   * @param Kp Proportional gain
   * @param Ki Integral gain
   * @param Kd Derivitive gain
   */
  
private:
  double Kp, Ki, Kd;
  double prev_error = 0;
  double min_temprature = 0;
  double max_temprature = 100;
  double integral = 0;
  
   /**
 * @brief A function which computes the PID controller output value. target_voltage is used to store the setpoint
 * present_voltage is used to store the present voltage value
 * Steps to calculate output :
 * 1) error is the difference between the target and the present voltage
 * 2) The proportional term is Kp times the error
 * 3) The error is multiplied with the time step dt and added to the integral variable
 * 4) The integral term is Ki times the integral variable
 * 5) The derivate term is Kd times the difference in present error and previous error divided by the time step
 * 6) Total output is the bounded (withing min and max) sum of the proportional, integral, and derivate term 
 * 
 * @param target_velocity Desired final velocity
 * @param present_velocity Current velocity
 * @return double Final velocity calculated by PID controller
 */

public:
  PID(double Kp_, double Ki_, double Kd_);
  double calculate(double target, double present, double dt);
};
