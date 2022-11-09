#pragma once
#include "pch.h"
#include "cab.h"
#include "cablog.h"
//#include "frameinput.h"


class FrameInput
{
public:
    winrt::Windows::Media::Audio::AudioGraph audiograph{ nullptr };
    double theta;
    winrt::Windows::Foundation::IAsyncOperation<int> FrameAudioGraph();

    FrameInput();

private:
    winrt::Windows::Media::AudioFrame GenerateAudioData(uint32_t samples);
    void node_QuantumStarted(winrt::Windows::Media::Audio::AudioFrameInputNode sender, winrt::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs args);
};