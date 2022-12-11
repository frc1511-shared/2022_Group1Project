#pragma once

#include <Mechanism.h>

class HatchPanel : public Mechanism {
public:
    HatchPanel();
    ~HatchPanel();

    void process() override;
    void resetToMode(MatchMode mode) override;
    void sendFeedback() override;
};