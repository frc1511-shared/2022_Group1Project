#include "Robot.h"

#include <fmt/core.h>

void Robot::RobotInit() { }

void Robot::RobotPeriodic() { }

void Robot::AutonomousInit() { 
    Reset(Mechanism::MatchMode::AUTO);
}

void Robot::AutonomousPeriodic() { }

void Robot::TeleopInit() { 
    Reset(Mechanism::MatchMode::TELEOP);
}

void Robot::TeleopPeriodic() {
    controls.process();
    drive.process();
    hatchPanel.process();
    cargo.process();
    gamePiece.process();
}

void Robot::DisabledInit() { 
    Reset(Mechanism::MatchMode::DISABLED);
}

void Robot::DisabledPeriodic() { }

void Robot::TestInit() { 
    Reset(Mechanism::MatchMode::TEST);
}

void Robot::TestPeriodic() { }

void Robot::Reset(Mechanism::MatchMode Mode) {
    controls.resetToMode(Mode);
    drive.resetToMode(Mode);
    hatchPanel.resetToMode(Mode);
    cargo.resetToMode(Mode);
    gamePiece.resetToMode(Mode);
}

#ifndef RUNNING_FRC_TESTS
int main() {
    return frc::StartRobot<Robot>();
}
#endif
