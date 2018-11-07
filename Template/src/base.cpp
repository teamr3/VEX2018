#include "debug.h"

using namespace std;
int debug_base = 1;

void turn(){
  if (debug_base){
    cout << "turn() invoked \nStarting gyro angle: " << gyro.get_value();
  }
}

void moveStraight(){
  if (debug_base){
    cout << "moveStraight() invoked";
  }
}
