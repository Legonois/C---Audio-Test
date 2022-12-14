#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Web::Syndication;



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

IAsyncAction MainAsync()
{
  Uri uri(L"https://kennykerr.ca/feed");
  SyndicationClient client;
  SyndicationFeed feed = co_await client.RetrieveFeedAsync(uri);
  for (auto&& item : feed.Items())
  {
    hstring title = item.Title().Text();
    printf("%ls\n", title.c_str());
  }
}
int main()
{
  init_apartment();
  MainAsync().get();
  system("pause");
}