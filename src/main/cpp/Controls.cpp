#include <Controls.h>

Controls::Controls(Drive* drive, GamePiece* gamepiece)
: drive(drive), gamepiece(gamepiece) {

}

Controls::~Controls() {

}


void Controls::process() {
    double joystickLeft = -gameController.GetRawAxis(1);
    double joystickRight = -gameController.GetRawAxis(5);
    drive->tankDrive(joystickLeft, joystickRight);

    if (gameController.GetRawButton(4)){
        gamepiece -> SetCargoMode(Cargo::CargoDir::INTAKE);
    }
}

void Controls::resetToMode(MatchMode mode) {

}

void Controls::sendFeedback() {

}
