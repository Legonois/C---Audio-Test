#pragma once

//Caboose Audio Backend
// #include "cablog.h"

//Inport Standard Libaries
// #include <stdio.h>
// #include <iostream>
//#include <string>
// #include <coroutine>

//Inport precompiled headers
#include "pch.h"

//Inport Windows Runtime API to native C++
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"


#include "winrt/Windows.Media.h"
#include "winrt/Windows.Media.Devices.h"
#include "winrt/Windows.Media.Capture.h"
#include "winrt/Windows.Media.Audio.h"
#include "winrt/Windows.Media.Render.h"
#include "winrt/Windows.Media.MediaProperties.h"
#include "winrt/Windows.Media.Devices.Core.h"
#include "winrt/Windows.Storage.h"
#include "MemoryBuffer.h"

//Added Namespaces so code is easier to find


namespace cab
{
    class FrameInput 
    {
        public:
        winrt::Windows::Media::Audio::AudioGraph audiograph;
        double theta;

        private:
        winrt::Windows::Media::AudioFrame GenerateAudioData(uint64_t samples);
        winrt::Windows::Foundation::IAsyncOperation<int> FrameAudioGraph();
        void node_QuantumStarted(AudioFrameInputNode sender, FrameInputNodeQuantumStartedEventArgs args);
    };

    winrt::Windows::Foundation::IAsyncOperation<int> FileAudioGraph();

    

    //IAsyncOperation<winrt::hstring> getFileAsync();

    std::string backSlash(std::string input);

    std::string pathParse(std::string input);

    std::string fileParse(std::string input);
    
    std::string removeInvalidChars(std::string input);
    std::string removeInvalidChars(std::string input, std::string invalidChars);
}