#include <Cargo.h>

Cargo::Cargo() {

}

Cargo::~Cargo() {

}

void Cargo::process() {
    if (cargoDir == CargoDir::INTAKE){
        LeftCargo.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, .25);
        RightCargo.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, -.25);
    }
    else if ( cargoDir == CargoDir::NOTTAKE){
        LeftCargo.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, 0);
        RightCargo.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, 0);
    }
    else{
        LeftCargo.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, -.25);
        RightCargo.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, .25);
    }
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