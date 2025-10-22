#include "main.h"

void set_tongue(bool input) {
  tongue.set(input);
}

void tongue_opcontrol() {
  tongue.button_toggle(master.get_digital_new_press(DIGITAL_B));
}