#include "HarmonyGenerator.h"

HarmonyGenerator::HarmonyGenerator() {
    harmonySlider.setRange(0.0, 1.0);
    harmonySlider.setValue(0.5);
    harmonySlider.setTextValueSuffix(" Harmony Level");
    harmonySlider.onValueChange = [this] { generateHarmonies(); };
    addAndMakeVisible(harmonySlider);
}

void HarmonyGenerator::setInputVocalTrack(const String& track) {
    inputVocalTrack = track; // Store the input vocal track for harmony generation
}

void HarmonyGenerator::generateHarmonies() {
    if (inputVocalTrack.isEmpty()) {
        DBG("Input vocal track is empty. Please provide a valid track.");
        return; // Exit if the input vocal track is empty
    }

    float harmonyLevel = harmonySlider.getValue(); // Get the current harmony level from the slider

    // Validate harmony level
    if (!validateHarmonyLevel(harmonyLevel)) {
        DBG("Invalid harmony level. Must be between 0 and 1.");
        return; // Exit if the harmony level is invalid
    }

    // Additional harmony generation logic goes here
}

bool HarmonyGenerator::validateHarmonyLevel(float level) {
    return level >= 0.0f && level <= 1.0f; // Validate that the level is between 0 and 1
}

// Additional methods and logic...
