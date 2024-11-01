#ifndef HARMONY_GENERATOR_H
#define HARMONY_GENERATOR_H

#include <JuceHeader.h>

class HarmonyGenerator : public Component {
public:
    HarmonyGenerator();
    void setInputVocalTrack(const String& track);
    void generateHarmonies();
    bool validateHarmonyLevel(float level); // Declaration for validateHarmonyLevel
    bool handleAudioFileType(const String& track); // Declaration for handleAudioFileType
    String getInputVocalTrack() const { return inputVocalTrack; } // Getter for input vocal track

private:
    String inputVocalTrack; // Stores the input vocal track
    Slider harmonySlider; // Slider for adjusting harmony level
    // Additional members...
};

#endif // HARMONY_GENERATOR_H
