#include <Drive.h>

Drive::Drive() {

}

Drive::~Drive() {

}

void Drive::process() {
    LeftMotor.Set(LeftPercentage);
    RightMotor.Set(RightPercentage);
}

void Drive::resetToMode(MatchMode mode) {
    LeftPercentage = 0;
    RightPercentage = 0;
    LeftMotor.Set(0);
    RightMotor.Set(0);
}

void Drive::sendFeedback() {

}

void Drive::tankDrive(double left, double right) {
    // Tank drive stuff here!
    LeftPercentage = left;
    RightPercentage = right;
}
