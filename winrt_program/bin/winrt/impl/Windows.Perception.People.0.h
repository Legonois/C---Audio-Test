// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_Perception_People_0_H
#define WINRT_Windows_Perception_People_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Perception::People
{
    struct IHeadPose;
    struct HeadPose;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Perception::People::IHeadPose>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::People::HeadPose>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::People::HeadPose> = L"Windows.Perception.People.HeadPose";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::People::IHeadPose> = L"Windows.Perception.People.IHeadPose";
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::People::IHeadPose>{ 0x7F5AC5A5,0x49DB,0x379F,{ 0x94,0x29,0x32,0xA2,0xFA,0xF3,0x4F,0xA6 } }; // 7F5AC5A5-49DB-379F-9429-32A2FAF34FA6
    template <> struct default_interface<winrt::Windows::Perception::People::HeadPose>{ using type = winrt::Windows::Perception::People::IHeadPose; };
    template <> struct abi<winrt::Windows::Perception::People::IHeadPose>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(winrt::Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_ForwardDirection(winrt::Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_UpDirection(winrt::Windows::Foundation::Numerics::float3*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Perception_People_IHeadPose
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto ForwardDirection() const;
        [[nodiscard]] auto UpDirection() const;
    };
    template <> struct consume<winrt::Windows::Perception::People::IHeadPose>
    {
        template <typename D> using type = consume_Windows_Perception_People_IHeadPose<D>;
    };
}
#endif
