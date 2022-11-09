//#include "pch.h"
#include "winrt/Windows.Foundation.h"

#include "frameinput.h"
//#include "cab.h"
//#include "cablog.h"

struct __declspec(uuid("5b0d3235-4dba-4d44-865e-8f1d0e4fd04d")) __declspec(novtable) IMemoryBufferByteAccess : ::IUnknown
{
    virtual HRESULT __stdcall GetBuffer(uint8_t** value, uint32_t* capacity) = 0;
};


using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Storage;
//using namespace winrt;
using namespace winrt::Windows::Foundation::Collections;

using namespace winrt::Windows::Media;
using namespace winrt::Windows::Media::Devices;
using namespace winrt::Windows::Media::Capture;
using namespace winrt::Windows::Media::Audio;
using namespace winrt::Windows::Media::Render;
using namespace winrt::Windows::Media::MediaProperties;

using namespace cab;

FrameInput::FrameInput()
{
    Cablog *cLog = new Cablog;
    theta = 0;

    AudioGraphSettings settings = AudioGraphSettings(winrt::Windows::Media::Render::AudioRenderCategory::Media);
    cLog->info("... Created settings");

    CreateAudioGraphResult final2 = AudioGraph::CreateAsync(settings).get(); //.get;     //.wait_for(30);
    cLog->info("... Created final2");

    audiograph = final2.Graph();
    delete cLog;
}

IAsyncOperation<int> FrameInput::FrameAudioGraph()
{
    Cablog *cLog = new Cablog;

    try
    {
        // Creating AudioGraph

        // Creating DeviceOutputNode

        CreateAudioDeviceOutputNodeResult deviceOutResult = co_await audiograph.CreateDeviceOutputNodeAsync();
        AudioDeviceOutputNode deviceOutNode = deviceOutResult.DeviceOutputNode();
        cLog->info("... Created DeviceOutputNode");
        // Creating FrameInputNode

        AudioEncodingProperties nodeEncodingProperties = audiograph.EncodingProperties();
        nodeEncodingProperties.ChannelCount(1);
        AudioFrameInputNode frameInputNode = audiograph.CreateFrameInputNode(nodeEncodingProperties);
        frameInputNode.AddOutgoingConnection(deviceOutNode);
        cLog->info("... Connected FrameOutputNode");

        frameInputNode.QuantumStarted({this, &FrameInput::node_QuantumStarted});
        cLog->info("... Attached Event");

        frameInputNode.Start();
        cLog->info("... Started FrameInputNode");

        deviceOutNode.Start();
        cLog->info("... Started DeviceOutNode");

        audiograph.Start();
        cLog->info("... Started Audio Graph");

        system("pause");

        frameInputNode.Close();
        deviceOutNode.Close();
        audiograph.Close();
    }
    catch (winrt::hresult_error const &ex)
    {
        winrt::hstring message = ex.message();
        cLog->error("WinRT/C++: " + winrt::to_string(message));
    }

    delete cLog;

    co_return 1;
}

AudioFrame FrameInput::GenerateAudioData(uint32_t samples)
{
    Cablog *cLog = new Cablog();
    cLog->info("... Running 'Generate Audio Data'");
    cLog->info((std::to_string(samples)));

    byte *dataInBytes = new byte();
    uint32_t capacityInBytes;
    float *dataInFloat = new float();

    uint32_t bufferSize = samples * sizeof(float);

    AudioFrame frame = AudioFrame(bufferSize);

    AudioBuffer buffer = frame.LockBuffer(AudioBufferAccessMode::Write);
    IMemoryBufferReference reference = buffer.CreateReference();


    auto interop = reference.as<IMemoryBufferByteAccess>();

    // uint8_t *value{};
    // uint32_t value_size{};
    interop->GetBuffer(&dataInBytes, &capacityInBytes);

    // auto interop = reference.as<IMemoryBufferByteAccess>();

    // uint8_t *value{};
    // uint32_t value_size{};
    // winrt::check_hresult(interop->GetBuffer(&value, &value_size));
    // WINRT_ASSERT(value_size == 10);

    // printf("%s\n", reinterpret_cast<char *>(value));

    // Windows::Foundation::IMemoryBufferByteAccess pls.GetBuffer(reference);

    // IUnknown_QueryInterface_Proxy()

    // be careful with memory



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
    delete cLog;

    return frame;
}

void FrameInput::node_QuantumStarted(AudioFrameInputNode sender, FrameInputNodeQuantumStartedEventArgs args)
{
    uint32_t numSamplesNeeded = (uint32_t)args.RequiredSamples();

    if (numSamplesNeeded != 0)
    {
        AudioFrame audiodata = GenerateAudioData(numSamplesNeeded);
    }
}
