//Inport Standard Libaries
#include <stdio.h>
#include <iostream>
#include <coroutine>

//Inport Custom Libaries
#include "cab.h"
#include "cablog.h"

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

//#include <Windows.h>

//Test inclusion of a Header File
#include "testheader.h"

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






int main()
{
    winrt::init_apartment();

    Cablog* pCablog = new Cablog();
    
    //cablog::info2("Start console tests");
    //cablog::cablog::info2("Testing");

    pCablog->info2("testing");

    /*
    //Console tests
    cablog::empt();
    cablog::info("Test");
    cablog::warn("Test");
    cablog::error("Test");

    //Hello World

    std::cout << "Hello World" << std::endl;
    //Testing Header File
    int x = 12;
    std::string outs = std::to_string(additionforU(x, x));
    std::cout << outs << std::endl;

    cablog::empt();
    cablog::info("End Console Tests");
    cablog::empt();

    //Print Sound Cards (also converts hstring to std::string)
    std::string ns = "sa";
    hstring ns2 = MediaDevice::GetAudioCaptureSelector();
    ns = to_string(ns2);

    //std::cout << ns << std::endl;
    cablog::info(ns);

    cablog::info("testing strings");

    std::cout << std::endl;

    std::cout << "Audio Graph Creation Exit Code: " << std::to_string(cab::testAudioGraph()) << std::endl;

    //exit
    std::cout<< "\n" << "End of program" << "\n" << "\n";
    */
    system("pause");

    delete pCablog;

    //Adding input to the program
    //std::string s;
    //std::cin >> s;


    /*
    //Initalizes Loop Counter
    int n = 0;
    while (s != "exit")
    {
        //Repeats input
        std::cin >> s;
        std::cout << s << std::endl;
        //Prints Hello World
        std::cout << "Hello World" << std::endl;

        //Loop Counter, and convets Int to string for printing
        n++;
        std::string outs = std::to_string(n);
        std::cout << outs << std::endl;
    }
    */


}