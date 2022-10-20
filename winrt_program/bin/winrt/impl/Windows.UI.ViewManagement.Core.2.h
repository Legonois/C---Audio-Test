// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_UI_ViewManagement_Core_2_H
#define WINRT_Windows_UI_ViewManagement_Core_2_H
#include "winrt/impl/Windows.UI.ViewManagement.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement::Core
{
    struct __declspec(empty_bases) CoreInputView : winrt::Windows::UI::ViewManagement::Core::ICoreInputView,
        impl::require<CoreInputView, winrt::Windows::UI::ViewManagement::Core::ICoreInputView2, winrt::Windows::UI::ViewManagement::Core::ICoreInputView3>
    {
        CoreInputView(std::nullptr_t) noexcept {}
        CoreInputView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::ViewManagement::Core::ICoreInputView(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) CoreInputViewOcclusion : winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion
    {
        CoreInputViewOcclusion(std::nullptr_t) noexcept {}
        CoreInputViewOcclusion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreInputViewOcclusionsChangedEventArgs : winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs
    {
        CoreInputViewOcclusionsChangedEventArgs(std::nullptr_t) noexcept {}
        CoreInputViewOcclusionsChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreInputViewTransferringXYFocusEventArgs : winrt::Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs
    {
        CoreInputViewTransferringXYFocusEventArgs(std::nullptr_t) noexcept {}
        CoreInputViewTransferringXYFocusEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
