#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

inline pros::Motor intake1(7);  // Make this number negative if you want to reverse the motor
inline pros::Motor intake2(8);

void set_intake(int input);
void intake_opcontrol();