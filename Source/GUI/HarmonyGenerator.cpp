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

    // Handle different audio file types and generate harmonies
    if (!handleAudioFileType(inputVocalTrack)) {
        DBG("Unsupported audio file type.");
        return; // Exit if the audio file type is unsupported
    }

    // Logic to generate harmonies based on the input vocal track
    // (Implementation of harmony generation logic goes here)
}

bool HarmonyGenerator::validateHarmonyLevel(float level) {
    return level >= 0.0f && level <= 1.0f; // Validate that the level is between 0 and 1
}

bool HarmonyGenerator::handleAudioFileType(const String& track) {
    // Check the file extension and handle accordingly
    if (track.endsWith(".wav") || track.endsWith(".mp3")) {
        return true; // Supported formats
    }
    return false; // Unsupported formats
}
