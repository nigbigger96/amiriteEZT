#include "main.h"

void set_indexer(bool input) {
  indexer.set(input);
}

void indexer_opcontrol() {
  indexer.button_toggle(master.get_digital_new_press(DIGITAL_L2));
}