// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_Media_Playlists_1_H
#define WINRT_Windows_Media_Playlists_1_H
#include "winrt/impl/Windows.Media.Playlists.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Playlists
{
    struct __declspec(empty_bases) IPlaylist :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPlaylist>
    {
        IPlaylist(std::nullptr_t = nullptr) noexcept {}
        IPlaylist(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlaylistStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPlaylistStatics>
    {
        IPlaylistStatics(std::nullptr_t = nullptr) noexcept {}
        IPlaylistStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
