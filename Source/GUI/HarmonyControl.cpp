#include "HarmonyControl.h"

HarmonyControl::HarmonyControl(HarmonyGenerator& generator) : harmonyGenerator(generator) {
    addAndMakeVisible(harmonySlider);
    harmonySlider.setRange(0.0, 1.0); // Set the range for harmony level
    harmonySlider.setValue(0.5); // Default value for harmony level
    harmonySlider.onValueChange = [this] { harmonyGenerator.generateHarmonies(); }; // Trigger harmony generation
}

void HarmonyControl::resized() {
    harmonySlider.setBounds(10, 10, getWidth() - 20, 20); // Set bounds for the slider
}
