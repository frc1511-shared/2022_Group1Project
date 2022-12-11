#pragma once

#include <Mechanism.h>

class Cargo : public Mechanism {
public:
    Cargo();
    ~Cargo();

    void process() override;
    void resetToMode(MatchMode mode) override;
    void sendFeedback() override;

    enum class CargoDir {
        NOTTAKE,
        INTAKE,
        OUTTAKE,
    };

    void setCargoDir(CargoDir dir);
    CargoDir getCargoDir();

private:
    CargoDir cargoDir;

};