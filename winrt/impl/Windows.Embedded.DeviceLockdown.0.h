// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_Embedded_DeviceLockdown_0_H
#define WINRT_Windows_Embedded_DeviceLockdown_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
WINRT_EXPORT namespace winrt::Windows::Embedded::DeviceLockdown
{
    struct IDeviceLockdownProfileInformation;
    struct IDeviceLockdownProfileStatics;
    struct DeviceLockdownProfile;
    struct DeviceLockdownProfileInformation;
    struct DeviceLockdownContract;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile>{ using type = class_category; };
    template <> struct category<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile> = L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfile";
    template <> inline constexpr auto& name_v<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation> = L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfileInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation> = L"Windows.Embedded.DeviceLockdown.IDeviceLockdownProfileInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics> = L"Windows.Embedded.DeviceLockdown.IDeviceLockdownProfileStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownContract> = L"Windows.Embedded.DeviceLockdown.DeviceLockdownContract";
    template <> inline constexpr guid guid_v<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>{ 0x7980E14E,0x45B1,0x4A96,{ 0x92,0xFC,0x62,0x75,0x6B,0x73,0x96,0x78 } }; // 7980E14E-45B1-4A96-92FC-62756B739678
    template <> inline constexpr guid guid_v<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>{ 0x622F6965,0xF9A8,0x41A1,{ 0xA6,0x91,0x88,0xCD,0x80,0xC7,0xA0,0x69 } }; // 622F6965-F9A8-41A1-A691-88CD80C7A069
    template <> struct default_interface<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>{ using type = winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation; };
    template <> struct abi<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSupportedLockdownProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentLockdownProfile(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall ApplyLockdownProfileAsync(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetLockdownProfileInformation(winrt::guid, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileInformation
    {
        [[nodiscard]] auto Name() const;
    };
    template <> struct consume<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
    {
        template <typename D> using type = consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics
    {
        auto GetSupportedLockdownProfiles() const;
        auto GetCurrentLockdownProfile() const;
        auto ApplyLockdownProfileAsync(winrt::guid const& profileID) const;
        auto GetLockdownProfileInformation(winrt::guid const& profileID) const;
    };
    template <> struct consume<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
    {
        template <typename D> using type = consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics<D>;
    };
}
#endif
