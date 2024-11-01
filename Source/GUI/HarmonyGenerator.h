#ifndef HARMONYGENERATOR_H
#define HARMONYGENERATOR_H

#include <JuceHeader.h>

class HarmonyGenerator : public Component {
public:
    HarmonyGenerator();
    void resized() override;
    void paint(Graphics& g) override;

private:
    void generateHarmonies();

    Slider harmonySlider;
};

#endif // HARMONYGENERATOR_H
