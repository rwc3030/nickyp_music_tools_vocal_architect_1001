#include "MainComponent.h"

// MainComponent constructor
MainComponent::MainComponent() {
    setSize(800, 600);
    addAndMakeVisible(harmonyGenerator);
    
    generateButton.setButtonText("Generate Harmonies");
    generateButton.onClick = [this] { 
        harmonyGenerator.generateHarmonies(); 
        harmonyOutput.setText("Generating harmonies..."); // Update UI
        // Add feedback for completion
        if (harmonyGenerator.getInputVocalTrack().isEmpty()) {
            DBG("No input vocal track provided.");
        }
    };
}
