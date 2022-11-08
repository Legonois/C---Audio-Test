#pragma once

//Caboose Audio Backend
// #include "cablog.h"

//Inport Standard Libaries
// #include <stdio.h>
// #include <iostream>
// #include <coroutine>

//Inport Windows Runtime API settings
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

//Added Namespaces so code is easier to find
using namespace winrt;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Collections;

using namespace winrt::Windows::Media;
using namespace winrt::Windows::Media::Devices;
using namespace winrt::Windows::Media::Capture;
using namespace winrt::Windows::Media::Audio;
using namespace winrt::Windows::Media::Render;
using namespace winrt::Windows::Media::MediaProperties;
using namespace winrt::Windows::Storage;

namespace cab
{
    IAsyncOperation<int> testAudioGraph();

    IAsyncOperation<winrt::hstring> getFileAsync();
    

}