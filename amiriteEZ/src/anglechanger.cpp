#include "main.h"

void set_anglechanger(bool input) {
  anglechanger.set(input);
}

void anglechanger_opcontrol() {
  anglechanger.button_toggle(master.get_digital_new_press(DIGITAL_L1));
}