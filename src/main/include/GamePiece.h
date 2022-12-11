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

    void SetCargoMode(Cargo::CargoDir);

private:
    Cargo* cargo;
    HatchPanel* hatchPanel;
    enum class GrabbyChooser{
        CARGO,
        HATCH_PANEL,
        IDLE
    };
    GrabbyChooser grabbyChooser = GrabbyChooser::IDLE;
    Cargo::CargoDir cargoDir = Cargo::CargoDir::NOTTAKE;
};