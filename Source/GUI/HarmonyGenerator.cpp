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
    inputVocalTrack = track;
}

void HarmonyGenerator::generateHarmonies() {
    float harmonyLevel = harmonySlider.getValue();

    if (inputVocalTrack.isEmpty()) {
        DBG("Input vocal track is empty. Cannot generate harmonies.");
        return;
    }

    // Logic to generate harmonies based on the input vocal track and harmony level
    // This is a placeholder for the actual harmony generation logic
}

void HarmonyGenerator::handleAudioFileType(const String& fileType) {
    if (fileType == ".wav" || fileType == ".mp3") {
        DBG("Supported audio file type: " + fileType);
    } else {
        DBG("Unsupported audio file type: " + fileType);
    }
}
