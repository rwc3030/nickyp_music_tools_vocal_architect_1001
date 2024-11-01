#include "HarmonyGenerator.h"

class HarmonyControl : public Component
{
public:
    HarmonyControl(HarmonyGenerator& generator) : harmonyGenerator(generator) {
        addAndMakeVisible(harmonySlider);
        harmonySlider.setRange(0.0, 1.0);
        harmonySlider.setValue(0.5);
        harmonySlider.onValueChange = [this] { harmonyGenerator.generateHarmonies(); };
    }

    void resized() override {
        harmonySlider.setBounds(10, 10, getWidth() - 20, 20);
    }

private:
    Slider harmonySlider;
    HarmonyGenerator& harmonyGenerator;
};

