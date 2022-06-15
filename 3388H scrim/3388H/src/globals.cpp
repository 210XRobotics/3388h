#include "main.h"

//controller declarations
pros::Controller master(pros::E_CONTROLLER_MASTER);

//motor declarations
//pros::Motor (motorname)(port#, motor-cartridge, reversedmotor, motorencoders)
pros::Motor ltmotor(1, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor lbmotor(1, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor lfmotor(1, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);


pros::Motor rtmotor(1, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor rbmotor(1, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor rfmotor(1, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);


//piston declarations



//encoders, gyros, inertials, etc
