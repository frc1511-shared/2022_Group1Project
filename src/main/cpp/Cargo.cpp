#include <Cargo.h>

Cargo::Cargo() {

}

Cargo::~Cargo() {

}

void Cargo::process() {

}

void Cargo::resetToMode(MatchMode mode) {

}

void Cargo::sendFeedback() {

}

void Cargo::setCargoDir(CargoDir dir) {
    cargoDir = dir;
}

Cargo::CargoDir Cargo::getCargoDir() {
    return cargoDir;
}