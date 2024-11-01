#include "HarmonyGenerator.h"

HarmonyGenerator::HarmonyGenerator() {
    harmonySlider.setRange(0.0, 1.0);
    harmonySlider.setValue(0.5);
    harmonySlider.setTextValueSuffix(" Harmony Level");
    harmonySlider.onValueChange = [this] { generateHarmonies(); };
    addAndMakeVisible(harmonySlider);
}

void HarmonyGenerator::resized() {
    harmonySlider.setBounds(10, 10, getWidth() - 20, 20);
}

void HarmonyGenerator::setInputVocalTrack(const String& track) {
    inputVocalTrack = track; // Store the input vocal track for harmony generation
}

void HarmonyGenerator::generateHarmonies() {
    float harmonyLevel = harmonySlider.getValue(); // Get the current harmony level from the slider

    // Validate harmony level
    if (!validateHarmonyLevel(harmonyLevel)) {
        DBG("Invalid harmony level. Must be between 0 and 1.");
        return; // Exit if the harmony level is invalid
    }

    // Check if the input vocal track is empty
    if (inputVocalTrack.isEmpty()) {
        DBG("Input vocal track is empty. Cannot generate harmonies.");
        return; // Exit if no input is provided
    }

    // Check for extreme values for harmony levels
    if (harmonyLevel < 0.0f || harmonyLevel > 1.0f) {
        DBG("Harmony level out of bounds. Must be between 0 and 1.");
        return; // Exit if the harmony level is out of bounds
    }

    // Harmony generation logic goes here
}

bool HarmonyGenerator::validateHarmonyLevel(float level) {
    return level >= 0.0f && level <= 1.0f; // Validate that the level is between 0 and 1
}
