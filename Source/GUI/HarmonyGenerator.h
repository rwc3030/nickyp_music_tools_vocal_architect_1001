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

private:
    Slider harmonySlider;
    String inputVocalTrack;
};

#endif // HARMONYGENERATOR_H
