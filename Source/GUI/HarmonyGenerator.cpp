#include "HarmonyGenerator.h"

// HarmonyGenerator constructor
HarmonyGenerator::HarmonyGenerator() {
    harmonySlider.setRange(0.0, 1.0);
    harmonySlider.setValue(0.5);
    harmonySlider.setTextValueSuffix(" Harmony Level");
    addAndMakeVisible(harmonySlider);
}

// Set input vocal track
void HarmonyGenerator::setInputVocalTrack(const String& track) {
    inputVocalTrack = track; // Store the input vocal track for harmony generation
}

// Generate harmonies
void HarmonyGenerator::generateHarmonies() {
    // Check if the input vocal track is empty
    if (inputVocalTrack.isEmpty()) {
        DBG("Input vocal track is empty. Please provide a valid track.");
        return; // Exit if the input vocal track is empty
    }

    float harmonyLevel = harmonySlider.getValue(); // Get the current harmony level from the slider

    // Validate harmony level
    if (!validateHarmonyLevel(harmonyLevel)) {
        DBG("Invalid harmony level. Please set a value between 0 and 1.");
        return; // Exit if the harmony level is invalid
    }

    // Notify that harmony generation is starting
    DBG("Starting harmony generation...");
    
    // Harmony generation logic goes here

    // Notify that harmony generation is complete
    DBG("Harmony generation complete.");
}

// Validate harmony level
bool HarmonyGenerator::validateHarmonyLevel(float level) {
    // Validate that the level is between 0 and 1
    return level >= 0.0f && level <= 1.0f; 
}

// Handle audio file type
bool HarmonyGenerator::handleAudioFileType(const String& track) {
    // Check the file extension and handle accordingly
    if (track.endsWith(".wav") || track.endsWith(".mp3")) {
        return true; // Supported formats
    }
    return false; // Unsupported formats
}
