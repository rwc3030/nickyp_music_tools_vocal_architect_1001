#include "HarmonyControl.h"
#include "HarmonyGenerator.h"

void HarmonyControl::resized() {
    harmonySlider.setBounds(10, 10, getWidth() - 20, 20); // Set bounds for the slider
    // Additional UI layout logic...
}

void HarmonyControl::setHarmonyGenerator(HarmonyGenerator* generator) {
    harmonyGenerator = generator; // Link the HarmonyGenerator instance
    harmonySlider.onValueChange = [this] {
        if (harmonyGenerator != nullptr) {
            harmonyGenerator->generateHarmonies(); // Trigger harmony generation on slider change
        }
    };
}
