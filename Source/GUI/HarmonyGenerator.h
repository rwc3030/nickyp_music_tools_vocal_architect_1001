#ifndef HARMONYGENERATOR_H
#define HARMONYGENERATOR_H

#include <JuceHeader.h>

class HarmonyGenerator : public Component {
public:
    HarmonyGenerator();
    void resized() override;
    void setInputVocalTrack(const String& track);
    void generateHarmonies();

private:
    Slider harmonySlider;
    String inputVocalTrack;

    bool validateHarmonyLevel(float level); // Declaration for harmony level validation
};

#endif // HARMONYGENERATOR_H
