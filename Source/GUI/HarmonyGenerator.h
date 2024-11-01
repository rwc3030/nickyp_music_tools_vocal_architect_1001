#ifndef HARMONYGENERATOR_H
#define HARMONYGENERATOR_H

#include <JuceHeader.h>

// HarmonyGenerator class handles the generation of vocal harmonies based on input vocal tracks.
class HarmonyGenerator : public Component {
public:
    HarmonyGenerator(); // Constructor to initialize the harmony generator
    void resized() override; // Override to handle component resizing
    void setInputVocalTrack(const String& track); // Set the input vocal track for harmony generation
    void generateHarmonies(); // Generate harmonies based on the input vocal track

private:
    Slider harmonySlider; // Slider to control the harmony level
    String inputVocalTrack; // Input vocal track string

    bool validateHarmonyLevel(float level); // Declaration for harmony level validation
};

#endif // HARMONYGENERATOR_H
