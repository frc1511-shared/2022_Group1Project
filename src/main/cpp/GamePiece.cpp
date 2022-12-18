
#include <GamePiece.h>

GamePiece::GamePiece(Cargo* cargo, HatchPanel* hatchPanel)
: cargo(cargo), hatchPanel(hatchPanel) {

}

GamePiece::~GamePiece() {

}

void GamePiece::process() {
    if (grabbyChooser == GrabbyChooser::CARGO){
        cargo -> setCargoDir(cargoDir);
    }
    else if (grabbyChooser == GrabbyChooser::IDLE){
        cargo -> setCargoDir(Cargo::CargoDir::NOTTAKE);
    }
}

void GamePiece::resetToMode(MatchMode mode) {
    cargoDir = Cargo::CargoDir::NOTTAKE;
}

void GamePiece::sendFeedback() {

}

void GamePiece::SetCargoMode(Cargo::CargoDir dir) {
    grabbyChooser = GrabbyChooser::CARGO;
    if (dir==Cargo::CargoDir::NOTTAKE){
        grabbyChooser = GrabbyChooser::IDLE;
    }
    cargoDir = dir;
}