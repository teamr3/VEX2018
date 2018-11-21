#include "debug.h"
#include "base.h"

#define TICKS_PER_ROTATION 360
#define WHEEL_DIAMETER 4 //inches
#define WHEEL_CIRCUMFERENCE WHEEL_DIAMETER*3.1415

using namespace std;
int debug_base = 1;


// +ve degrees clockwise turn
// -ve counter clockwise
void turn(int targetDegrees){
  if (debug_base){
    cout << "turn() invoked \nStarting gyro angle: " << gyro.get_value();
  }
}

void moveStraight(float inches){
  float wheelCircumference = WHEEL_DIAMETER * 3.1415;
  float targetRotations = inches/wheelCircumference;
  float targetTicks = TICKS_PER_ROTATION*targetRotations;
  if (debug_base){
    cout << "Encoder Values (L R): " << leftEnc.get_value() << rightEnc.get_value();
  }



}
