#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

inline ez::Piston anglechanger('A');

void set_anglechanger(bool input);
void anglechanger_opcontrol();