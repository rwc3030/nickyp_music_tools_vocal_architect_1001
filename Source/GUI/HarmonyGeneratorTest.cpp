#include "HarmonyGenerator.h"
#include <gtest/gtest.h>

class HarmonyGeneratorTest : public ::testing::Test {
protected:
    HarmonyGenerator harmonyGenerator;

    void SetUp() override {
        // Setup code here
    }
};

TEST_F(HarmonyGeneratorTest, EmptyInputVocalTrack) {
    harmonyGenerator.setInputVocalTrack(""); // Assuming a method to set the input
    EXPECT_NO_THROW(harmonyGenerator.generateHarmonies());
}

TEST_F(HarmonyGeneratorTest, ValidInputVocalTrack) {
    harmonyGenerator.setInputVocalTrack("Sample Vocal Track.wav"); // Assuming a method to set the 
    EXPECT_NO_THROW(harmonyGenerator.generateHarmonies());
}

TEST_F(HarmonyGeneratorTest, InvalidHarmonyLevel) {
    harmonyGenerator.setInputVocalTrack("Sample Vocal Track.wav");
    harmonyGenerator.harmonySlider.setValue(1.5); // Set an invalid harmony level
    EXPECT_NO_THROW(harmonyGenerator.generateHarmonies());
}

TEST_F(HarmonyGeneratorTest, SupportedAudioFileType) {
    EXPECT_TRUE(harmonyGenerator.handleAudioFileType("Sample.wav"));
    EXPECT_TRUE(harmonyGenerator.handleAudioFileType("Sample.mp3"));
}

TEST_F(HarmonyGeneratorTest, UnsupportedAudioFileType) {
    EXPECT_FALSE(harmonyGenerator.handleAudioFileType("Sample.txt"));
}

TEST_F(HarmonyGeneratorTest, HarmonyLevelBoundary) {
    harmonyGenerator.setInputVocalTrack("Sample Vocal Track.wav");
    harmonyGenerator.harmonySlider.setValue(0.0); // Set to minimum valid harmony level
    EXPECT_NO_THROW(harmonyGenerator.generateHarmonies());

    harmonyGenerator.harmonySlider.setValue(1.0); // Set to maximum valid harmony level
    EXPECT_NO_THROW(harmonyGenerator.generateHarmonies());
}
