#ifndef HARMONY_GENERATOR_H
#define HARMONY_GENERATOR_H

#include <JuceHeader.h>

class HarmonyGenerator : public Component {
public:
    HarmonyGenerator();
    void setInputVocalTrack(const String& track);
    void generateHarmonies();
    bool validateHarmonyLevel(float level); // Declaration for validateHarmonyLevel

private:
    String inputVocalTrack;
    Slider harmonySlider;
    // Additional members...
};

#endif // HARMONY_GENERATOR_H
