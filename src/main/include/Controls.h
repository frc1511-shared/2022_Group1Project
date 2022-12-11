#pragma once

#include <Drive.h>
#include <Mechanism.h>
#include <frc/GenericHID.h>
#include <GamePiece.h>

class Controls : public Mechanism {
public:
    Controls(Drive* drive, GamePiece* gamepiece);
    ~Controls();

    void process() override;
    void resetToMode(MatchMode mode) override;
    void sendFeedback() override;

private:
    Drive* drive;
    GamePiece* gamepiece;

    // Variables here!
    frc::GenericHID gameController { 0 };
};