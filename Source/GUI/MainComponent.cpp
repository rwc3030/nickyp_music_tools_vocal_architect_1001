#include "MainComponent.h"

// MainComponent constructor
MainComponent::MainComponent() {
    setSize(800, 600);
    addAndMakeVisible(harmonyGenerator);
    
    generateButton.setButtonText("Generate Harmonies");
    generateButton.onClick = [this] { 
        harmonyOutput.setText("Generating harmonies..."); // Update UI
        harmonyGenerator.generateHarmonies(); 
        // Add feedback for completion
        if (harmonyGenerator.getInputVocalTrack().isEmpty()) {
            DBG("No input vocal track provided.");
            harmonyOutput.setText("No input vocal track provided.");
        } else {
            harmonyOutput.setText("Harmony generation in progress...");
        }
    };
}
