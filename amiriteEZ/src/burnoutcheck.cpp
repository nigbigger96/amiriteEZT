#include "main.h"

bool unlocked = true;
bool tempCheckEnabled = true;

void monitorMotorTemps() {
  const double tempLimit = 55.0;
  bool alertSent = false;

  while (true) {
    std::vector<Motor*> motors;

    for (auto& m : chassis.left_motors)
      motors.push_back(&m);
    for (auto& m : chassis.right_motors)
      motors.push_back(&m);

    bool overheated = false;
    for (auto m : motors) {
      if (m->get_temperature() >= tempLimit) {
        overheated = true;
        break;
      }
    }
    // if (!competition::is_connected()) {
    if (overheated && !alertSent) {
      for (int i = 0; i < 3; i++) {
        master.rumble("--");
        delay(670);
        master.rumble(".");
        delay(150);
      }
      alertSent = true;
      unlocked = false;
    } else if (!overheated && alertSent) {
      alertSent = false;
      unlocked = true;
    }
    // }

    delay(500);
  }
}
