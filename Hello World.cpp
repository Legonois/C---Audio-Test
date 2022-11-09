
//Inport Custom Libaries
//#include "cab.h"
//#include "cablog.h"

//Inport Windows Runtime API settings
#include "pch.h"
#include "frameinput.h"

#include "cab.h"
#include "cablog.h"
//#include "frameinput.h"



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


IAsyncOperation<int> MainAsync()
{
    co_return 1;
}



int main()
{



    init_apartment();

    Cablog* CLog = new Cablog();
    
    //cablog::info("Start console tests");
    //cablog::cablog::info("Testing");

    CLog->info("testing");

    system("pause");

    CLog->info("File Audio Graph Exit Code: " + std::to_string(cab::FileAudioGraph().get()));


    FrameInput* pFrames = new FrameInput();

    try
    {
        CLog->info("Audio Generation Exit Code: " + std::to_string(pFrames->FrameAudioGraph().get()));
    }
    catch (winrt::hresult_error const &ex)
    {
        hstring message = ex.message();
        CLog->error("WinRT/C++: " + to_string(message));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    system("pause");

    MainAsync().get();

    delete pFrames;

    
    //      DEPRECATED CODE       REMOVE LATER
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

   //End of program process
   delete CLog;


}