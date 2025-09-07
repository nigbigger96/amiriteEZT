#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

inline ez::Piston indexer('B');

void set_indexer(bool input);
void indexer_opcontrol();