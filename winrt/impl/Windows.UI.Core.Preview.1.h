// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_UI_Core_Preview_1_H
#define WINRT_Windows_UI_Core_Preview_1_H
#include "winrt/impl/Windows.UI.Core.Preview.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core::Preview
{
    struct __declspec(empty_bases) ISystemNavigationCloseRequestedPreviewEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemNavigationCloseRequestedPreviewEventArgs>
    {
        ISystemNavigationCloseRequestedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISystemNavigationCloseRequestedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemNavigationManagerPreview :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemNavigationManagerPreview>
    {
        ISystemNavigationManagerPreview(std::nullptr_t = nullptr) noexcept {}
        ISystemNavigationManagerPreview(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISystemNavigationManagerPreviewStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemNavigationManagerPreviewStatics>
    {
        ISystemNavigationManagerPreviewStatics(std::nullptr_t = nullptr) noexcept {}
        ISystemNavigationManagerPreviewStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif