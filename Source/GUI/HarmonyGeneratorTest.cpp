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
    harmonyGenerator.setInputVocalTrack("Sample Vocal Track"); // Assuming a method to set the input
    EXPECT_NO_THROW(harmonyGenerator.generateHarmonies());
}

TEST_F(HarmonyGeneratorTest, UnsupportedAudioFileType) {
    EXPECT_THROW(harmonyGenerator.handleAudioFileType(".txt"), std::invalid_argument);
}

TEST_F(HarmonyGeneratorTest, SupportedAudioFileType) {
    EXPECT_NO_THROW(harmonyGenerator.handleAudioFileType(".wav"));
    EXPECT_NO_THROW(harmonyGenerator.handleAudioFileType(".mp3"));
}
