#pragma once

#include <Drive.h>
#include <Mechanism.h>
#include <frc/GenericHID.h>


class Controls : public Mechanism {
public:
    Controls(Drive* drive);
    ~Controls();

    void process() override;
    void resetToMode(MatchMode mode) override;
    void sendFeedback() override;

private:
    Drive* drive;

    // Variables here!
    frc::GenericHID gameController { 0 };
};