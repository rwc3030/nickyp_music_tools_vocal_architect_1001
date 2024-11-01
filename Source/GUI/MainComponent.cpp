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
    
    harmonyOutput.setText("Generated Harmonies will appear here.");
    addAndMakeVisible(harmonyOutput);
}

void MainComponent::resized() {
    harmonyGenerator.setBounds(0, 0, getWidth(), getHeight() - 50);
    generateButton.setBounds(10, getHeight() - 40, 150, 30);
    harmonyOutput.setBounds(170, getHeight() - 40, getWidth() - 180, 30);
}

void MainComponent::paint(Graphics& g) {
    g.fillAll(Colours::grey);
}
