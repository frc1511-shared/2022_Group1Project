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

    if (gameController.GetRawAxis(2)>0.1){
        gamepiece -> SetCargoMode(Cargo::CargoDir::INTAKE);
    }
    else if (gameController.GetRawButton(5)){
        gamepiece -> SetCargoMode(Cargo::CargoDir::OUTTAKE);
    }
    else{
        gamepiece -> SetCargoMode(Cargo::CargoDir::NOTTAKE);
    }
}

void Controls::resetToMode(MatchMode mode) {

}

void Controls::sendFeedback() {

}
