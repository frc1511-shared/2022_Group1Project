#pragma once

#include <frc/TimedRobot.h>
#include <Controls.h>
#include <Drive.h>
#include <Cargo.h>
#include <HatchPanel.h>
#include <GamePiece.h>

class Robot : public frc::TimedRobot {
public:
    void RobotInit() override;
    void RobotPeriodic() override;
    void AutonomousInit() override;
    void AutonomousPeriodic() override;
    void TeleopInit() override;
    void TeleopPeriodic() override;
    void DisabledInit() override;
    void DisabledPeriodic() override;
    void TestInit() override;
    void TestPeriodic() override;

private:
    Drive drive;
    Controls controls { &drive };

    HatchPanel hatchPanel;
    Cargo cargo;
    GamePiece gamePiece { &cargo, &hatchPanel };
};
