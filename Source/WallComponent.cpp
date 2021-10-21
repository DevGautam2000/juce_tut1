/*
  ==============================================================================

    WallComponent.cpp
    Created: 8 Aug 2021 12:46:37am
    Author:  Gautam Saha

  ==============================================================================
*/

#include <JuceHeader.h>
#include "WallComponent.h"

using namespace juce; //namespace is needed

//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

WallComponent::~WallComponent()
{
}

void WallComponent::paint (juce::Graphics& g)
{
    Rectangle <float> wall(200,200,200,120);
    g.fillCheckerBoard(wall, 20, 10, Colours::sandybrown, Colours::saddlebrown);
    g.drawRect(wall);
}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
