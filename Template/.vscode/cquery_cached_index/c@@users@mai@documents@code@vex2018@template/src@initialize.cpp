#include "main.h"

#define LEFT_PORT_TOP 1
#define LEFT_PORT_BOT 2
#define RIGHT_PORT_TOP 3
#define RIGHT_PORT_BOT 4

int debug_init = 1;

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {
    //Initializing the gyro as 'gyro' with a 1 second calibration delay.
    pros::ADIGyro gyro ('A');
    pros::ADIEncoder leftEnc (LEFT_PORT_TOP, LEFT_PORT_BOT, false);
    pros::ADIEncoder rightEnc (RIGHT_PORT_TOP, RIGHT_PORT_BOT, false);
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}
