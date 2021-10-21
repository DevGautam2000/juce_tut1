/*
  ==============================================================================

    RoofComponent.h
    Created: 8 Aug 2021 1:18:48am
    Author:  Gautam Saha

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class RoofComponent  : public juce::Component
{
public:
    RoofComponent();
    ~RoofComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RoofComponent)
};
