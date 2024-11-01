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

    // Check if the input vocal track is empty
    if (inputVocalTrack.isEmpty()) {
        DBG("Input vocal track is empty. Cannot generate harmonies.");
        return; // Exit if no input is provided
    }

    // Check for extreme values for harmony levels
    if (harmonyLevel < 0.0f || harmonyLevel > 1.0f) {
        DBG("Harmony level out of bounds. Must be between 0.0 and 1.0.");
        return; // Exit if harmony level is out of bounds
    }

    // Logic to generate harmonies based on the input vocal track and harmony level
}

void HarmonyGenerator::handleAudioFileType(const String& fileType) {
    // Check for supported audio file types
    if (fileType == ".wav" || fileType == ".mp3") {
        DBG("Supported audio file type: " + fileType);
    } else {
        DBG("Unsupported audio file type: " + fileType);
        // Handle unsupported file type
        throw std::invalid_argument("Unsupported audio file type: " + fileType);
    }
}
