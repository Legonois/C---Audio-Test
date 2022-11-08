#include "cab.h"

using namespace winrt;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Storage;

namespace cab
{

    IAsyncOperation<int> testAudioGraph()
    {
        Cablog* cLog = new Cablog();

        AudioGraphSettings settings = AudioGraphSettings(Windows::Media::Render::AudioRenderCategory::Media);
        cLog->info("... Created settings");

        CreateAudioGraphResult final2 = co_await AudioGraph::CreateAsync(settings);//.get;     //.wait_for(30);
        cLog->info("... Created final2");

        AudioGraph audiograph = final2.Graph();
        cLog->info("... Created audiograph");

        cLog->info("... Getting folder 'C:/Users/wesle/Downloads'");
        //Windows::Storage::StorageFolder storageFolder = Windows::Storage::ApplicationData::Current().LocalFolder();
        Windows::Storage::StorageFolder storageFolder{ co_await Windows::Storage::StorageFolder::GetFolderFromPathAsync(L"C:/Users/wesle/Downloads") };

        try
        {
            Windows::Storage::StorageFolder storageFolder{ co_await Windows::Storage::StorageFolder::GetFolderFromPathAsync(L"C:/Users/wesle/Downloads") };
        }
        catch(winrt::hresult_error const& ex)
        {
            cLog->error("... Failed getting folder");
            winrt::hresult hr = ex.code(); // HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND).
            winrt::hstring message = ex.message();
        }
        

        cLog->info("... Imported folder 'C:/Users/wesle/Downloads'");

        //auto debugfile = ;

        auto relFilepath = L"AJR I Wont Full Song Even BETTER Quality Lyrics.wav";

        //debugfile.Cancel();
        cLog->info("... Getting file 'AJR I Wont Full Song Even BETTER Quality Lyrics.wav'");

        auto sampleFile{ co_await storageFolder.GetFileAsync(relFilepath) };

        //sampleFile.

        // Process file
        cLog->info("... Imported File 'AJR I Wont Full Song Even BETTER Quality Lyrics.wav'");

        CreateAudioFileInputNodeResult fileNodeResult = audiograph.CreateFileInputNodeAsync(sampleFile).get();
        cLog->info("... Greating FileNodeResult");

        AudioFileInputNode filenode = fileNodeResult.FileInputNode();
        cLog->info("... Greating filenode");
    
        filenode.Start();

        system("pause");

        filenode.Close();
        audiograph.Close();

        co_return 1;
    }

    IAsyncOperation<winrt::hstring> getFileAsync()
    {
        //Windows::Storage::StorageFolder storageFolder{ co_await Windows::Storage::StorageFolder::GetFolderFromPathAsync(L"C:/Users/wesle/Downloads/") };
        //auto sampleFile{ co_await storageFolder.GetFileAsync(L"AJR I Wont Full Song Even BETTER Quality Lyrics.wav") };

        //sampleFile.

        // The code in step 2 goes here.

        hstring yo = L"yos";

        co_return yo;
    }

}