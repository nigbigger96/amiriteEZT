#include "main.h"

void set_trapdoor(bool input) {
  trapdoor.set(input);
}

void trapdoor_opcontrol() {
  trapdoor.button_toggle(master.get_digital_new_press(DIGITAL_RIGHT));
}