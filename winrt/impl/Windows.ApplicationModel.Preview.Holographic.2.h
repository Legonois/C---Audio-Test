// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Preview_Holographic_2_H
#define WINRT_Windows_ApplicationModel_Preview_Holographic_2_H
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Holographic.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Holographic
{
    struct HolographicApplicationPreview
    {
        HolographicApplicationPreview() = delete;
        static auto IsCurrentViewPresentedOnHolographicDisplay();
        static auto IsHolographicActivation(winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs);
    };
}
#endif
