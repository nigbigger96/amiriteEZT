#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

inline ez::Piston trapdoor('C');

void set_trapdoor(bool input);
void trapdoor_opcontrol();