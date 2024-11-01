#ifndef HARMONYGENERATOR_H
#define HARMONYGENERATOR_H

#include <JuceHeader.h>

class HarmonyGenerator : public Component {
public:
    HarmonyGenerator();
    void resized() override;
    void paint(Graphics& g) override;

    // Method to set the input vocal track
    void setInputVocalTrack(const String& input) { inputVocalTrack = input; }

private:
    void generateHarmonies();

    Slider harmonySlider;
    String inputVocalTrack; // Variable to hold the input vocal track
};

#endif // HARMONYGENERATOR_H
