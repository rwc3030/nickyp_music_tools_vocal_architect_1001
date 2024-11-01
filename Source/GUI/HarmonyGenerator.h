#ifndef HARMONY_GENERATOR_H
#define HARMONY_GENERATOR_H

#include <JuceHeader.h>

class HarmonyGenerator {
public:
    HarmonyGenerator();
    void setInputVocalTrack(const String& track);
    void generateHarmonies();
    bool validateHarmonyLevel(float level);
    bool handleAudioFileType(const String& track);

private:
    String inputVocalTrack;
    Slider harmonySlider;
};

#endif // HARMONY_GENERATOR_H
