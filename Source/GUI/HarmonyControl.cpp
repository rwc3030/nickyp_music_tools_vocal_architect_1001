#include "HarmonyGenerator.h"

class HarmonyControl : public Component
{
public:
    HarmonyControl(HarmonyGenerator& generator) : harmonyGenerator(generator) {
        addAndMakeVisible(harmonySlider);
        harmonySlider.setRange(0.0, 1.0); // Set the range for harmony level
        harmonySlider.setValue(0.5); // Default value for harmony level
        harmonySlider.onValueChange = [this] { harmonyGenerator.generateHarmonies(); }; // Trigger harmony generation on value change
    }

    void resized() override {
        harmonySlider.setBounds(10, 10, getWidth() - 20, 20); // Set bounds for the slider
    }

    void resetHarmonyLevel() {
        harmonySlider.setValue(0.5); // Reset to default value
    }

private:
    Slider harmonySlider; // Slider for adjusting harmony level
    HarmonyGenerator& harmonyGenerator; // Reference to the HarmonyGenerator instance
};
