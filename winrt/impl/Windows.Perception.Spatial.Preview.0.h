// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_Perception_Spatial_Preview_0_H
#define WINRT_Windows_Perception_Spatial_Preview_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial
{
    struct SpatialCoordinateSystem;
    struct SpatialLocator;
}
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Preview
{
    struct ISpatialGraphInteropPreviewStatics;
    struct SpatialGraphInteropPreview;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Preview::SpatialGraphInteropPreview>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Preview::SpatialGraphInteropPreview> = L"Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics> = L"Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>{ 0xC042644C,0x20D8,0x4ED0,{ 0xAE,0xF7,0x68,0x05,0xB8,0xE5,0x3F,0x55 } }; // C042644C-20D8-4ED0-AEF7-6805B8E53F55
    template <> struct abi<winrt::Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCoordinateSystemForNode(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCoordinateSystemForNodeWithPosition(winrt::guid, winrt::Windows::Foundation::Numerics::float3, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCoordinateSystemForNodeWithPositionAndOrientation(winrt::guid, winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::quaternion, void**) noexcept = 0;
            virtual int32_t __stdcall CreateLocatorForNode(winrt::guid, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_Preview_ISpatialGraphInteropPreviewStatics
    {
        auto CreateCoordinateSystemForNode(winrt::guid const& nodeId) const;
        auto CreateCoordinateSystemForNode(winrt::guid const& nodeId, winrt::Windows::Foundation::Numerics::float3 const& relativePosition) const;
        auto CreateCoordinateSystemForNode(winrt::guid const& nodeId, winrt::Windows::Foundation::Numerics::float3 const& relativePosition, winrt::Windows::Foundation::Numerics::quaternion const& relativeOrientation) const;
        auto CreateLocatorForNode(winrt::guid const& nodeId) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_Preview_ISpatialGraphInteropPreviewStatics<D>;
    };
}
#endif
