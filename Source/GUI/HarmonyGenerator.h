#ifndef HARMONYGENERATOR_H
#define HARMONYGENERATOR_H

#include <JuceHeader.h>

class HarmonyGenerator : public Component
{
public:
    HarmonyGenerator();
    void resized() override;
    void generateHarmonies();
    void setInputVocalTrack(const String& track);
    void handleAudioFileType(const String& fileType); // New method to handle different audio file types
    bool validateHarmonyLevel(float level); // New method to validate harmony level

private:
    Slider harmonySlider; // Slider to control harmony level
    String inputVocalTrack; // Input vocal track for harmony generation
};

#endif // HARMONYGENERATOR_H
