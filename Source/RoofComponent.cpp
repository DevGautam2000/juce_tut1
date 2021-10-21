/*
  ==============================================================================

    RoofComponent.cpp
    Created: 8 Aug 2021 1:18:48am
    Author:  Gautam Saha

  ==============================================================================
*/

#include <JuceHeader.h>
#include "RoofComponent.h"
using namespace juce::Colours;
using namespace juce;

//==============================================================================
RoofComponent::RoofComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

RoofComponent::~RoofComponent()
{
    
}

void RoofComponent::paint (juce::Graphics& g)
{
    g.setColour(red);
    Path p;
    p.startNewSubPath(220, 190);
    p.lineTo(380, 190);
    p.lineTo(300, 140);
    p.closeSubPath();
    
    g.strokePath(p, PathStrokeType(10.0f));
    g.fillPath(p);
}

void RoofComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
