#include "HarmonyGenerator.h"

HarmonyGenerator::HarmonyGenerator() {
    harmonySlider.setRange(0.0, 1.0);
    harmonySlider.setValue(0.5);
    harmonySlider.setTextValueSuffix(" Harmony Level");
    addAndMakeVisible(harmonySlider);
}

void HarmonyGenerator::setInputVocalTrack(const String& track) {
    inputVocalTrack = track; // Store the input vocal track for harmony generation
}

void HarmonyGenerator::generateHarmonies() {
    // Check if the input vocal track is empty
    if (inputVocalTrack.isEmpty()) {
        DBG("Input vocal track is empty. Please provide a valid track.");
        return; // Exit if the input vocal track is empty
    }

    float harmonyLevel = harmonySlider.getValue(); // Get the current harmony level from the slider

    // Validate harmony level
    if (!validateHarmonyLevel(harmonyLevel)) {
        DBG("Harmony level is out of bounds. Please set a value between 0 and 1.");
        return; // Exit if the harmony level is invalid
    }

    // Additional logic for generating harmonies...
}

bool HarmonyGenerator::validateHarmonyLevel(float level) {
    // Validate that the level is between 0 and 1
    return level >= 0.0f && level <= 1.0f; 
}

bool HarmonyGenerator::handleAudioFileType(const String& track) {
    // Check the file extension and handle accordingly
    if (track.endsWith(".wav") || track.endsWith(".mp3")) {
        return true; // Supported formats
    }
    return false; // Unsupported formats
}
