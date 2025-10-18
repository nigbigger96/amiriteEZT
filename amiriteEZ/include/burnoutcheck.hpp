#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern bool unlocked;
extern bool tempCheckEnabled;

void monitorMotorTemps();
void confirmRumble(bool enabled);