#include <Controls.h>

Controls::Controls(Drive* drive)
: drive(drive) {

}

Controls::~Controls() {

}


void Controls::process() {
    double joystickLeft = -gameController.GetRawAxis(1);
    double joystickRight = -gameController.GetRawAxis(5);
    drive->tankDrive(joystickLeft, joystickRight);
}

void Controls::resetToMode(MatchMode mode) {

}

void Controls::sendFeedback() {

}
