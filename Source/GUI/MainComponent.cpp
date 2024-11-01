#include "MainComponent.h"

MainComponent::MainComponent() {
    setSize(800, 600);
    addAndMakeVisible(harmonyGenerator);
    
    generateButton.setButtonText("Generate Harmonies");
    generateButton.onClick = [this] { 
        harmonyGenerator.generateHarmonies(); 
        harmonyOutput.setText("Generating harmonies..."); // Update UI
        // Add feedback for completion
        harmonyOutput.setText("Harmonies generated successfully!"); // Update UI after generation
    };
    addAndMakeVisible(generateButton);
}
