/*Copyright 2022 Anukriti Singh, Sanchit Tanwar, 
 Bharadwaj Chukkala & Shantanu Parab */

#include <algorithm>
#include <iostream>
#include "../include/PID.hpp"



int main() {
  // To do pair 2 - Done
  PID pid(0.1, 0.1, 0.1);
  double initial_temprature = 5;
  double final_temprature = 10;
  double dt = 0.01;
  for (size_t i = 0; i < 100; i++) {
    initial_temprature =
        pid.calculate(final_temprature, initial_temprature, dt);
    std::cout << "Updated Temprature after " << i * dt
              << " Seconds is :" << initial_temprature << std::endl;
  }
  return 0;
}
