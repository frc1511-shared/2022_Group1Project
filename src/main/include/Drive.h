#pragma once

#include <Mechanism.h>

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
};