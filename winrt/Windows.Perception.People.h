// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_Perception_People_H
#define WINRT_Windows_Perception_People_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220929.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220929.3"
#include "winrt/Windows.Perception.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Perception.People.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Perception_People_IHeadPose<D>::Position() const
    {
        winrt::Windows::Foundation::Numerics::float3 value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Perception::People::IHeadPose)->get_Position(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Perception_People_IHeadPose<D>::ForwardDirection() const
    {
        winrt::Windows::Foundation::Numerics::float3 value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Perception::People::IHeadPose)->get_ForwardDirection(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Perception_People_IHeadPose<D>::UpDirection() const
    {
        winrt::Windows::Foundation::Numerics::float3 value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Perception::People::IHeadPose)->get_UpDirection(put_abi(value)));
        return value;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Perception::People::IHeadPose> : produce_base<D, winrt::Windows::Perception::People::IHeadPose>
    {
        int32_t __stdcall get_Position(winrt::Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Numerics::float3>(this->shim().Position());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForwardDirection(winrt::Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Numerics::float3>(this->shim().ForwardDirection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpDirection(winrt::Windows::Foundation::Numerics::float3* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Numerics::float3>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Numerics::float3>(this->shim().UpDirection());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Perception::People
{
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Perception::People::IHeadPose> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Perception::People::HeadPose> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
