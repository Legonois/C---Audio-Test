#include <stdio.h>
#include <iostream>

#include "pch.h"


#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Media.Audio.h"
#include "winrt/Windows.Media.MediaProperties.h"

#include <Windows.h>



#include "testheader.h"


using namespace winrt;
using namespace winrt::Windows::Foundation;

using namespace winrt::Windows::Media;
using namespace winrt::Windows::Media::Devices;
using namespace winrt::Windows::Media::Capture;
using namespace winrt::Windows::Media::Audio;
using namespace winrt::Windows::Media::Render;
using namespace winrt::Windows::Media::MediaProperties;


//Print Sound Cards

int main()
{
    std::cout << "Hello World" << std::endl;

    int x = 12;

    std::string outs = std::to_string(additionforU(x, x));
   
    std::cout << outs << std::endl;

    int n = 0;

    std::string ns = "sa";

    ns = "sa22";

    std::string s;
    std::cin >> s;
    while (s != "exit")
    {
        std::cin >> s;
        std::cout << s << std::endl;
        std::cout << "Hello World" << std::endl;

        n++;

        std::string outs = std::to_string(n);
        std::cout << outs << std::endl;
    }
}