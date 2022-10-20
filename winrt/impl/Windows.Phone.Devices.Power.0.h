// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_Phone_Devices_Power_0_H
#define WINRT_Windows_Phone_Devices_Power_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
}
WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Power
{
    struct IBattery;
    struct IBatteryStatics;
    struct Battery;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Phone::Devices::Power::IBattery>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Phone::Devices::Power::IBatteryStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Phone::Devices::Power::Battery>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::Devices::Power::Battery> = L"Windows.Phone.Devices.Power.Battery";
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::Devices::Power::IBattery> = L"Windows.Phone.Devices.Power.IBattery";
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::Devices::Power::IBatteryStatics> = L"Windows.Phone.Devices.Power.IBatteryStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Phone::Devices::Power::IBattery>{ 0x972ADBDD,0x6720,0x4702,{ 0xA4,0x76,0xB9,0xD3,0x8A,0x00,0x70,0xE3 } }; // 972ADBDD-6720-4702-A476-B9D38A0070E3
    template <> inline constexpr guid guid_v<winrt::Windows::Phone::Devices::Power::IBatteryStatics>{ 0xFAF5BC70,0x6369,0x11E1,{ 0xB8,0x6C,0x08,0x00,0x20,0x0C,0x9A,0x66 } }; // FAF5BC70-6369-11E1-B86C-0800200C9A66
    template <> struct default_interface<winrt::Windows::Phone::Devices::Power::Battery>{ using type = winrt::Windows::Phone::Devices::Power::IBattery; };
    template <> struct abi<winrt::Windows::Phone::Devices::Power::IBattery>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemainingChargePercent(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RemainingDischargeTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall add_RemainingChargePercentChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RemainingChargePercentChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Phone::Devices::Power::IBatteryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Phone_Devices_Power_IBattery
    {
        [[nodiscard]] auto RemainingChargePercent() const;
        [[nodiscard]] auto RemainingDischargeTime() const;
        auto RemainingChargePercentChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& changeHandler) const;
        using RemainingChargePercentChanged_revoker = impl::event_revoker<winrt::Windows::Phone::Devices::Power::IBattery, &impl::abi_t<winrt::Windows::Phone::Devices::Power::IBattery>::remove_RemainingChargePercentChanged>;
        [[nodiscard]] auto RemainingChargePercentChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& changeHandler) const;
        auto RemainingChargePercentChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Phone::Devices::Power::IBattery>
    {
        template <typename D> using type = consume_Windows_Phone_Devices_Power_IBattery<D>;
    };
    template <typename D>
    struct consume_Windows_Phone_Devices_Power_IBatteryStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<winrt::Windows::Phone::Devices::Power::IBatteryStatics>
    {
        template <typename D> using type = consume_Windows_Phone_Devices_Power_IBatteryStatics<D>;
    };
}
#endif
