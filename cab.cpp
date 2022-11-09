#include "cab.h"

//using namespace winrt;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Storage;
using namespace winrt;
using namespace winrt::Windows::Foundation::Collections;

using namespace winrt::Windows::Media;
using namespace winrt::Windows::Media::Devices;
using namespace winrt::Windows::Media::Capture;
using namespace winrt::Windows::Media::Audio;
using namespace winrt::Windows::Media::Render;
using namespace winrt::Windows::Media::MediaProperties;

namespace cab
{


    IAsyncOperation<int> FileAudioGraph()
    {
        Cablog *cLog = new Cablog();

        try
        {
            

            AudioGraphSettings settings = AudioGraphSettings(winrt::Windows::Media::Render::AudioRenderCategory::Media);
            cLog->info("... Created settings");

            CreateAudioGraphResult final2 = co_await AudioGraph::CreateAsync(settings); //.get;     //.wait_for(30);
            cLog->info("... Created final2");

            AudioGraph audiograph = final2.Graph();
            cLog->info("... Created audiograph");

            cLog->info("File Location?: ");

            std::string cinput;
            std::getline(std::cin, cinput);

            cLog->info("input: '" + backSlash(cinput) + "'");

            cLog->info("FileParse: '" + fileParse(cinput) + "'");

            cLog->info("PathParse: '" + pathParse(cinput) + "'");

            hstring audioPath = to_hstring(pathParse(cinput));

            cLog->info("... Getting folder '" + to_string(audioPath) + "'");
            // Windows::Storage::StorageFolder storageFolder = Windows::Storage::ApplicationData::Current().LocalFolder();
            winrt::Windows::Storage::StorageFolder storageFolder{co_await winrt::Windows::Storage::StorageFolder::GetFolderFromPathAsync(audioPath)};

            // StorageFolder storageFolder;

            // try
            // {
            //     Windows::Storage::StorageFolder storageFolder{ co_await Windows::Storage::StorageFolder::GetFolderFromPathAsync(L"C:\\Users\\wesle\\Downloads") };
            // }
            // catch(winrt::hresult_error const& ex)
            // {
            //     cLog->error("... Failed getting folder");
            //     winrt::hresult hr = ex.code(); // HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND).
            //     winrt::hstring message = ex.message();
            // }

            cLog->info("... Imported folder '" + to_string(audioPath) + "'");

            // auto debugfile = ;

            auto relFilepath = to_hstring(fileParse(cinput));

            // debugfile.Cancel();
            cLog->info("... Getting file '" + fileParse(cinput) + "'");

            auto sampleFile{co_await storageFolder.GetFileAsync(relFilepath)};

            cLog->info("... Imported file '" + fileParse(cinput) + "'");

            CreateAudioFileInputNodeResult fileNodeResult = audiograph.CreateFileInputNodeAsync(sampleFile).get();
            cLog->info("... Created FileNodeResult");

            AudioFileInputNode filenode = fileNodeResult.FileInputNode();
            cLog->info("... Created filenode");

            CreateAudioDeviceOutputNodeResult outputResult{co_await audiograph.CreateDeviceOutputNodeAsync()};
            cLog->info("... Created AudioDeviceOutputNode");

            AudioDeviceOutputNode audioOutput = outputResult.DeviceOutputNode();
            cLog->info("... Created audioOutput");

            filenode.Start();

            audioOutput.Start();

            filenode.AddOutgoingConnection(audioOutput);

            audiograph.Start();


            system("pause");

            filenode.Close();
            audioOutput.Close();
            audiograph.Close();

            
        }
        catch (winrt::hresult_error const& ex)
        {
            hstring message = ex.message();
            cLog->error("WinRT/C++: " + to_string(message));
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        catch(int e)
        {
            
            cLog->error(std::to_string(e));
            std::cerr << e << '\n';
        }
        
        //sampleFile.

        // Process file
        delete cLog;

        co_return 1;
    }



//Testing Classes


    class FrameInput
    {
        public:
        winrt::Windows::Media::Audio::AudioGraph audiograph;

        double theta = 0;

        private:
        AudioFrame GenerateAudioData(uint64_t samples)
        {
            uint64_t bufferSize = samples * sizeof(float);

            AudioFrame frame = AudioFrame(bufferSize);

            AudioBuffer buffer = frame.LockBuffer(AudioBufferAccessMode::Write);
            IMemoryBufferReference reference = buffer.CreateReference();

            // be careful with memory

            byte *dataInBytes;
            uint64_t cappacityInBytes;
            float *dataInFloat;

            dataInFloat = (float *)dataInBytes;

            float freq = 1000;
            float amplitude = 0.3f;
            int sampleRate = (int)audiograph.EncodingProperties().SampleRate();

            double sampleIncrement = (freq * (3.141592f * 2)) / sampleRate;

            for (int i = 0; i < samples; i++)
            {
                double sinValue = amplitude * sin(theta);
                dataInFloat[i] = (float)sinValue;
                theta += sampleIncrement;
            }

            delete dataInBytes;
            delete dataInFloat;

            return frame;
        }

        IAsyncOperation<int> FrameAudioGraph()
        {
            Cablog *cLog = new Cablog;

            try
            {
                // Creating AudioGraph

                AudioGraphSettings settings = AudioGraphSettings(winrt::Windows::Media::Render::AudioRenderCategory::Media);
                cLog->info("... Created settings");

                CreateAudioGraphResult final2 = co_await AudioGraph::CreateAsync(settings); //.get;     //.wait_for(30);
                cLog->info("... Created final2");

                AudioGraph audiograph = final2.Graph();

                // Creating DeviceOutputNode

                CreateAudioDeviceOutputNodeResult deviceOutResult = co_await audiograph.CreateDeviceOutputNodeAsync();
                AudioDeviceOutputNode deviceOutNode = deviceOutResult.DeviceOutputNode();

                // Creating FrameInputNode

                AudioEncodingProperties nodeEncodingProperties = audiograph.EncodingProperties();
                nodeEncodingProperties.ChannelCount(1);
                AudioFrameInputNode frameInputNode = audiograph.CreateFrameInputNode(nodeEncodingProperties);
                frameInputNode.AddOutgoingConnection(deviceOutNode);

                frameInputNode.Stop();

                frameInputNode.QuantumStarted(node_QuantumStarted);
            }
            catch (winrt::hresult_error const &ex)
            {
                hstring message = ex.message();
                cLog->error("WinRT/C++: " + to_string(message));
            }

            delete cLog;

            co_return 1;
        }

        void node_QuantumStarted(AudioFrameInputNode sender, FrameInputNodeQuantumStartedEventArgs args)
        {
            uint64_t numSamplesNeeded = (uint64_t)args.RequiredSamples();

            if (numSamplesNeeded != 0)
            {
                AudioFrame audiodata = GenerateAudioData(numSamplesNeeded);
            }
        }

    };

    // IAsyncOperation<winrt::hstring> getFileAsync()
    // {
    //     //Windows::Storage::StorageFolder storageFolder{ co_await Windows::Storage::StorageFolder::GetFolderFromPathAsync(L"C:/Users/wesle/Downloads/") };
    //     //auto sampleFile{ co_await storageFolder.GetFileAsync(L"AJR I Wont Full Song Even BETTER Quality Lyrics.wav") };

    //     //sampleFile.

    //     // The code in step 2 goes here.

    //     hstring yo = L"yos";

    //     co_return yo;
    // }

    std::string backSlash(std::string input)
    {
        std::string manip = input;

        // for (int i = input.length(); i >= 0; i--)
        // {
        //     std::string fs = "/";
        //     std::string bs = "\\";

        //     if (manip[i] == fs[1])
        //     {
        //         std::cout << "I hope this runs" << std::endl;

        //         manip[i] = bs[1];
        //     }
        // }

        std::replace( manip.begin(), manip.end(), '/', '\\');
        //std::replace( manip.begin(), manip.end(), '"');
        // manip.erase(std::remove(manip.begin(), manip.end(), '\''), manip.end());
        // manip.erase(std::remove(manip.begin(), manip.end(), '\"'), manip.end());
        manip = removeInvalidChars(manip);

        return manip;
    }

    std::string pathParse(std::string input)
    {
        input = backSlash(input);
        
        size_t pos = 0;
        std::string token;
        std::string delimiter = "\\";
        std::string tempInput = input;

        while((pos = tempInput.find(delimiter)) != std::string::npos)
        {
            token = tempInput.substr(0, pos);
            tempInput.erase(0, pos + delimiter.length());
        }

        std::string output = input.substr(0, input.find(tempInput));
        
        return output;
    }

    std::string fileParse(std::string input)
    {
        input = backSlash(input);

        size_t pos = 0;
        std::string token;
        std::string delimiter = "\\";

        while((pos = input.find(delimiter)) != std::string::npos)
        {
            token = input.substr(0, pos);
            input.erase(0, pos + delimiter.length());
        }

        if(input.length() == 0)
        {
            throw 3;
        }
        
        return input;
    }

    std::string removeInvalidChars(std::string input)
    {
        // std::string::iterator it;
        // std::string invalidChars = "<>:\"\\|?*";
        // for (it = input.begin() ; it < input->end() ; ++it)
        // {
        //     bool found = invalidChars.find(it) != std::string::npos;
        // }

        //TODO: Make a more efficcent process
        input.erase(std::remove(input.begin(), input.end(), '<'), input.end());
        input.erase(std::remove(input.begin(), input.end(), '>'), input.end());
        //input.erase(std::remove(input.begin(), input.end(), ':'), input.end());
        //input.erase(std::remove(input.begin(), input.end(), '/'), input.end());
        //input.erase(std::remove(input.begin(), input.end(), '\\'), input.end());
        input.erase(std::remove(input.begin(), input.end(), '|'), input.end());
        input.erase(std::remove(input.begin(), input.end(), '?'), input.end());
        input.erase(std::remove(input.begin(), input.end(), '*'), input.end());
        input.erase(std::remove(input.begin(), input.end(), '\''), input.end());
        input.erase(std::remove(input.begin(), input.end(), '\"'), input.end());
        
        return input;
    }
    std::string removeInvalidChars(std::string input, std::string invalidChars)
    {
        return input;
    }
}