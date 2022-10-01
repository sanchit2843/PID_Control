# PID_Control



# Week 5: Test-Driven Development Assignment - ENPM 808X

## Overview

This repository pertains to the test driven development exercise. The group members of which are :

- Anukriti Singh
- Bharadwaj Chukkala
- Sanchit Tanwar
- Shantanu Parab

## Part 1 
The members of the first pair for Part 1 of this repository are :
 - Sanchit Tanwar(Driver)
 - Anukriti Singh (Navigator)

 ## Part 2 
The members of the first pair for Part 1 of this repository are :
 - Shantanu Parab (Driver)
 - Bharadwaj Chukkala (Navigator)
 
## Description
The design contains one class, PID. The main function takes the target velocity and present velocity as input and calls the calculate function of the PID class for 100 iterations.
The present voltage is updated with the controller output until it reaches within a margin of the target voltage. The UML class diagram is as follows : 


<img alt="UML" src="assets/uml.png" width="200" />
*Fig 1 :  UML class diagram*

The activity diagram is as follows : 


<img alt="Activity" src="assets/Activity.png" width="500" />
*Fig 2 :  Activity diagram*

### Steps to build 
```
    cd ...<path_to_directory>/
    mkdir build
    cd build
    cmake ..
    make
```    
### Steps to run
```
    ...<path_to_directory>/app/shell-app
```

### Steps to run cppcheck and cpplint
