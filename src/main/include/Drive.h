#pragma once

#include <Mechanism.h>
#include <frc/motorcontrol/Spark.h>


class Drive : public Mechanism {
public:
    Drive();
    ~Drive();

    void process() override;
    void resetToMode(MatchMode mode) override;
    void sendFeedback() override;

    void tankDrive(double left, double right);

private:
    // Variables here!
    frc::Spark LeftMotor { 0 };
    frc::Spark RightMotor { 1 };
    double LeftPercentage;
    double RightPercentage;
};