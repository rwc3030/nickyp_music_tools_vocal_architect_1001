#include "MainComponent.h"

MainComponent::MainComponent() {
    setSize(800, 600);
    addAndMakeVisible(harmonyGenerator);
    
    generateButton.setButtonText("Generate Harmonies");
    generateButton.onClick = [this] { 
        harmonyGenerator.generateHarmonies(); 
        harmonyOutput.setText("Generating harmonies..."); // Update UI
    };
    addAndMakeVisible(generateButton);
    
    // Add slider to adjust harmony level in real-time
    addAndMakeVisible(harmonyGenerator.harmonySlider);
}

void MainComponent::resized() {
    harmonyGenerator.setBounds(0, 0, getWidth(), getHeight() - 50);
    generateButton.setBounds(10, getHeight() - 40, 150, 30);
    harmonyOutput.setBounds(170, getHeight() - 40, getWidth() - 180, 30);
}
