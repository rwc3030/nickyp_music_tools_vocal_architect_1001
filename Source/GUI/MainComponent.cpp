#include "MainComponent.h"
#include "HarmonyGenerator.h"

MainComponent::MainComponent() {
    setSize(800, 600);
    addAndMakeVisible(harmonyGenerator);
}

void MainComponent::resized() {
    harmonyGenerator.setBounds(0, 0, getWidth(), getHeight());
}

void MainComponent::paint(Graphics& g) {
    g.fillAll(Colours::grey);
}
