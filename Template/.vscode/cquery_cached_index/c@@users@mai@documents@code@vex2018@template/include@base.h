#include "main.h"

// This is start of the header guard.
#ifndef BASE_H
#define BASE_H

// This is the content of the .h file, which is where the declarations go

void turn();
void moveStraight();

extern pros::ADIGyro gyro;
extern pros::ADIEncoder leftEnc;
extern pros::ADIEncoder rightEnc;

// This is the end of the header guard
#endif
