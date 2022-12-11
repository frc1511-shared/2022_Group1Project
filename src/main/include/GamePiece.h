#pragma once

#include <Mechanism.h>
#include <Cargo.h>
#include <HatchPanel.h>

// Handles the state of the gamepiece.
class GamePiece : public Mechanism {
public:
    GamePiece(Cargo* cargo, HatchPanel* hatchPanel);
    ~GamePiece();

    void process() override;
    void resetToMode(MatchMode mode) override;
    void sendFeedback() override;

private:
    Cargo* cargo;
    HatchPanel* hatchPanel;

};