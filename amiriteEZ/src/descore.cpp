#include "main.h"

void set_descore(bool input) {
  descore.set(input);
}

void descore_opcontrol() {
  descore.button_toggle(master.get_digital_new_press(DIGITAL_DOWN));
}