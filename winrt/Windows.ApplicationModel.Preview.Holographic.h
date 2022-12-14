// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Preview_Holographic_H
#define WINRT_Windows_ApplicationModel_Preview_Holographic_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220929.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220929.3"
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Holographic.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ApplicationModel_Preview_Holographic_IHolographicApplicationPreviewStatics<D>::IsCurrentViewPresentedOnHolographicDisplay() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics)->IsCurrentViewPresentedOnHolographicDisplay(&result));
        return result;
    }
    template <typename D> auto consume_Windows_ApplicationModel_Preview_Holographic_IHolographicApplicationPreviewStatics<D>::IsHolographicActivation(winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics)->IsHolographicActivation(*(void**)(&activatedEventArgs), &result));
        return result;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> : produce_base<D, winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>
    {
        int32_t __stdcall IsCurrentViewPresentedOnHolographicDisplay(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsCurrentViewPresentedOnHolographicDisplay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsHolographicActivation(void* activatedEventArgs, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsHolographicActivation(*reinterpret_cast<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs const*>(&activatedEventArgs)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Holographic
{
    inline auto HolographicApplicationPreview::IsCurrentViewPresentedOnHolographicDisplay()
    {
        return impl::call_factory_cast<bool(*)(IHolographicApplicationPreviewStatics const&), HolographicApplicationPreview, IHolographicApplicationPreviewStatics>([](IHolographicApplicationPreviewStatics const& f) { return f.IsCurrentViewPresentedOnHolographicDisplay(); });
    }
    inline auto HolographicApplicationPreview::IsHolographicActivation(winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs)
    {
        return impl::call_factory<HolographicApplicationPreview, IHolographicApplicationPreviewStatics>([&](IHolographicApplicationPreviewStatics const& f) { return f.IsHolographicActivation(activatedEventArgs); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
