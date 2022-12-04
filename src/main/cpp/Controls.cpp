#include <Controls.h>

Controls::Controls(Drive* drive)
: drive(drive) {

}

Controls::~Controls() {

}


void Controls::process() {
    double joystickLeft = gameController.GetRawAxis(0);
    double joystickRight = gameController.GetRawAxis(0);
    drive->tankDrive(joystickLeft, joystickRight);
}

void Controls::resetToMode(MatchMode mode) {

}

void Controls::sendFeedback() {

}
