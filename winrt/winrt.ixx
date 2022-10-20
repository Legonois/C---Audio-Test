// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

module;

#include <algorithm>
#include <array>
#include <atomic>
#include <charconv>
#include <chrono>
#include <cstddef>
#include <iterator>
#include <map>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string_view>
#include <string>
#include <thread>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <utility>
#include <vector>

#if __has_include(<WindowsNumerics.impl.h>)
#define WINRT_IMPL_NUMERICS
#include <directxmath.h>
#endif

#ifdef __cpp_lib_format
#include <format>
#endif

#ifdef __cpp_lib_source_location
#include <source_location>
#endif

#ifdef __cpp_lib_coroutine

#include <coroutine>

namespace winrt::impl
{
    template <typename T = void>
    using coroutine_handle = std::coroutine_handle<T>;

    using suspend_always = std::suspend_always;
    using suspend_never = std::suspend_never;
}

#else

#include <experimental/coroutine>

namespace winrt::impl
{
    template <typename T = void>
    using coroutine_handle = std::experimental::coroutine_handle<T>;

    using suspend_always = std::experimental::suspend_always;
    using suspend_never = std::experimental::suspend_never;
}

#endif

export module winrt;
#define WINRT_EXPORT export

#include "winrt/Windows.AI.MachineLearning.h"
#include "winrt/Windows.AI.MachineLearning.Preview.h"
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/Windows.ApplicationModel.Activation.h"
#include "winrt/Windows.ApplicationModel.AppExtensions.h"
#include "winrt/Windows.ApplicationModel.AppService.h"
#include "winrt/Windows.ApplicationModel.Appointments.h"
#include "winrt/Windows.ApplicationModel.Appointments.AppointmentsProvider.h"
#include "winrt/Windows.ApplicationModel.Appointments.DataProvider.h"
#include "winrt/Windows.ApplicationModel.Background.h"
#include "winrt/Windows.ApplicationModel.Calls.h"
#include "winrt/Windows.ApplicationModel.Calls.Background.h"
#include "winrt/Windows.ApplicationModel.Calls.Provider.h"
#include "winrt/Windows.ApplicationModel.Chat.h"
#include "winrt/Windows.ApplicationModel.CommunicationBlocking.h"
#include "winrt/Windows.ApplicationModel.Contacts.h"
#include "winrt/Windows.ApplicationModel.Contacts.DataProvider.h"
#include "winrt/Windows.ApplicationModel.Contacts.Provider.h"
#include "winrt/Windows.ApplicationModel.Core.h"
#include "winrt/Windows.ApplicationModel.DataTransfer.h"
#include "winrt/Windows.ApplicationModel.DataTransfer.DragDrop.h"
#include "winrt/Windows.ApplicationModel.DataTransfer.DragDrop.Core.h"
#include "winrt/Windows.ApplicationModel.DataTransfer.ShareTarget.h"
#include "winrt/Windows.ApplicationModel.Email.h"
#include "winrt/Windows.ApplicationModel.Email.DataProvider.h"
#include "winrt/Windows.ApplicationModel.ExtendedExecution.h"
#include "winrt/Windows.ApplicationModel.ExtendedExecution.Foreground.h"
#include "winrt/Windows.ApplicationModel.LockScreen.h"
#include "winrt/Windows.ApplicationModel.Payments.h"
#include "winrt/Windows.ApplicationModel.Payments.Provider.h"
#include "winrt/Windows.ApplicationModel.Preview.Holographic.h"
#include "winrt/Windows.ApplicationModel.Preview.InkWorkspace.h"
#include "winrt/Windows.ApplicationModel.Preview.Notes.h"
#include "winrt/Windows.ApplicationModel.Resources.h"
#include "winrt/Windows.ApplicationModel.Resources.Core.h"
#include "winrt/Windows.ApplicationModel.Resources.Management.h"
#include "winrt/Windows.ApplicationModel.Search.h"
#include "winrt/Windows.ApplicationModel.Search.Core.h"
#include "winrt/Windows.ApplicationModel.SocialInfo.h"
#include "winrt/Windows.ApplicationModel.SocialInfo.Provider.h"
#include "winrt/Windows.ApplicationModel.Store.h"
#include "winrt/Windows.ApplicationModel.Store.LicenseManagement.h"
#include "winrt/Windows.ApplicationModel.Store.Preview.h"
#include "winrt/Windows.ApplicationModel.Store.Preview.InstallControl.h"
#include "winrt/Windows.ApplicationModel.UserActivities.h"
#include "winrt/Windows.ApplicationModel.UserActivities.Core.h"
#include "winrt/Windows.ApplicationModel.UserDataAccounts.h"
#include "winrt/Windows.ApplicationModel.UserDataAccounts.Provider.h"
#include "winrt/Windows.ApplicationModel.UserDataAccounts.SystemAccess.h"
#include "winrt/Windows.ApplicationModel.UserDataTasks.h"
#include "winrt/Windows.ApplicationModel.UserDataTasks.DataProvider.h"
#include "winrt/Windows.ApplicationModel.VoiceCommands.h"
#include "winrt/Windows.ApplicationModel.Wallet.h"
#include "winrt/Windows.ApplicationModel.Wallet.System.h"
#include "winrt/Windows.Data.Html.h"
#include "winrt/Windows.Data.Json.h"
#include "winrt/Windows.Data.Pdf.h"
#include "winrt/Windows.Data.Text.h"
#include "winrt/Windows.Data.Xml.Dom.h"
#include "winrt/Windows.Data.Xml.Xsl.h"
#include "winrt/Windows.Devices.h"
#include "winrt/Windows.Devices.Adc.h"
#include "winrt/Windows.Devices.Adc.Provider.h"
#include "winrt/Windows.Devices.AllJoyn.h"
#include "winrt/Windows.Devices.Background.h"
#include "winrt/Windows.Devices.Bluetooth.h"
#include "winrt/Windows.Devices.Bluetooth.Advertisement.h"
#include "winrt/Windows.Devices.Bluetooth.Background.h"
#include "winrt/Windows.Devices.Bluetooth.GenericAttributeProfile.h"
#include "winrt/Windows.Devices.Bluetooth.Rfcomm.h"
#include "winrt/Windows.Devices.Custom.h"
#include "winrt/Windows.Devices.Display.h"
#include "winrt/Windows.Devices.Display.Core.h"
#include "winrt/Windows.Devices.Enumeration.h"
#include "winrt/Windows.Devices.Enumeration.Pnp.h"
#include "winrt/Windows.Devices.Geolocation.h"
#include "winrt/Windows.Devices.Geolocation.Geofencing.h"
#include "winrt/Windows.Devices.Gpio.h"
#include "winrt/Windows.Devices.Gpio.Provider.h"
#include "winrt/Windows.Devices.Haptics.h"
#include "winrt/Windows.Devices.HumanInterfaceDevice.h"
#include "winrt/Windows.Devices.I2c.h"
#include "winrt/Windows.Devices.I2c.Provider.h"
#include "winrt/Windows.Devices.Input.h"
#include "winrt/Windows.Devices.Input.Preview.h"
#include "winrt/Windows.Devices.Lights.h"
#include "winrt/Windows.Devices.Lights.Effects.h"
#include "winrt/Windows.Devices.Midi.h"
#include "winrt/Windows.Devices.Perception.h"
#include "winrt/Windows.Devices.Perception.Provider.h"
#include "winrt/Windows.Devices.PointOfService.h"
#include "winrt/Windows.Devices.PointOfService.Provider.h"
#include "winrt/Windows.Devices.Portable.h"
#include "winrt/Windows.Devices.Power.h"
#include "winrt/Windows.Devices.Printers.h"
#include "winrt/Windows.Devices.Printers.Extensions.h"
#include "winrt/Windows.Devices.Pwm.h"
#include "winrt/Windows.Devices.Pwm.Provider.h"
#include "winrt/Windows.Devices.Radios.h"
#include "winrt/Windows.Devices.Scanners.h"
#include "winrt/Windows.Devices.Sensors.h"
#include "winrt/Windows.Devices.Sensors.Custom.h"
#include "winrt/Windows.Devices.SerialCommunication.h"
#include "winrt/Windows.Devices.SmartCards.h"
#include "winrt/Windows.Devices.Sms.h"
#include "winrt/Windows.Devices.Spi.h"
#include "winrt/Windows.Devices.Spi.Provider.h"
#include "winrt/Windows.Devices.Usb.h"
#include "winrt/Windows.Devices.WiFi.h"
#include "winrt/Windows.Devices.WiFiDirect.h"
#include "winrt/Windows.Devices.WiFiDirect.Services.h"
#include "winrt/Windows.Embedded.DeviceLockdown.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Foundation.Diagnostics.h"
#include "winrt/Windows.Foundation.Metadata.h"
#include "winrt/Windows.Foundation.Numerics.h"
#include "winrt/Windows.Gaming.Input.h"
#include "winrt/Windows.Gaming.Input.Custom.h"
#include "winrt/Windows.Gaming.Input.ForceFeedback.h"
#include "winrt/Windows.Gaming.Input.Preview.h"
#include "winrt/Windows.Gaming.Preview.GamesEnumeration.h"
#include "winrt/Windows.Gaming.UI.h"
#include "winrt/Windows.Gaming.XboxLive.Storage.h"
#include "winrt/Windows.Globalization.h"
#include "winrt/Windows.Globalization.Collation.h"
#include "winrt/Windows.Globalization.DateTimeFormatting.h"
#include "winrt/Windows.Globalization.Fonts.h"
#include "winrt/Windows.Globalization.NumberFormatting.h"
#include "winrt/Windows.Globalization.PhoneNumberFormatting.h"
#include "winrt/Windows.Graphics.h"
#include "winrt/Windows.Graphics.Capture.h"
#include "winrt/Windows.Graphics.DirectX.h"
#include "winrt/Windows.Graphics.DirectX.Direct3D11.h"
#include "winrt/Windows.Graphics.Display.h"
#include "winrt/Windows.Graphics.Display.Core.h"
#include "winrt/Windows.Graphics.Effects.h"
#include "winrt/Windows.Graphics.Holographic.h"
#include "winrt/Windows.Graphics.Imaging.h"
#include "winrt/Windows.Graphics.Printing.h"
#include "winrt/Windows.Graphics.Printing.OptionDetails.h"
#include "winrt/Windows.Graphics.Printing.PrintTicket.h"
#include "winrt/Windows.Graphics.Printing.Workflow.h"
#include "winrt/Windows.Graphics.Printing3D.h"
#include "winrt/Windows.Management.h"
#include "winrt/Windows.Management.Core.h"
#include "winrt/Windows.Management.Deployment.h"
#include "winrt/Windows.Management.Deployment.Preview.h"
#include "winrt/Windows.Management.Policies.h"
#include "winrt/Windows.Management.Update.h"
#include "winrt/Windows.Management.Workplace.h"
#include "winrt/Windows.Media.h"
#include "winrt/Windows.Media.AppBroadcasting.h"
#include "winrt/Windows.Media.AppRecording.h"
#include "winrt/Windows.Media.Audio.h"
#include "winrt/Windows.Media.Capture.h"
#include "winrt/Windows.Media.Capture.Core.h"
#include "winrt/Windows.Media.Capture.Frames.h"
#include "winrt/Windows.Media.Casting.h"
#include "winrt/Windows.Media.ClosedCaptioning.h"
#include "winrt/Windows.Media.ContentRestrictions.h"
#include "winrt/Windows.Media.Control.h"
#include "winrt/Windows.Media.Core.h"
#include "winrt/Windows.Media.Core.Preview.h"
#include "winrt/Windows.Media.Devices.h"
#include "winrt/Windows.Media.Devices.Core.h"
#include "winrt/Windows.Media.DialProtocol.h"
#include "winrt/Windows.Media.Editing.h"
#include "winrt/Windows.Media.Effects.h"
#include "winrt/Windows.Media.FaceAnalysis.h"
#include "winrt/Windows.Media.Import.h"
#include "winrt/Windows.Media.MediaProperties.h"
#include "winrt/Windows.Media.Ocr.h"
#include "winrt/Windows.Media.PlayTo.h"
#include "winrt/Windows.Media.Playback.h"
#include "winrt/Windows.Media.Playlists.h"
#include "winrt/Windows.Media.Protection.h"
#include "winrt/Windows.Media.Protection.PlayReady.h"
#include "winrt/Windows.Media.Render.h"
#include "winrt/Windows.Media.SpeechRecognition.h"
#include "winrt/Windows.Media.SpeechSynthesis.h"
#include "winrt/Windows.Media.Streaming.Adaptive.h"
#include "winrt/Windows.Media.Transcoding.h"
#include "winrt/Windows.Networking.h"
#include "winrt/Windows.Networking.BackgroundTransfer.h"
#include "winrt/Windows.Networking.Connectivity.h"
#include "winrt/Windows.Networking.NetworkOperators.h"
#include "winrt/Windows.Networking.Proximity.h"
#include "winrt/Windows.Networking.PushNotifications.h"
#include "winrt/Windows.Networking.ServiceDiscovery.Dnssd.h"
#include "winrt/Windows.Networking.Sockets.h"
#include "winrt/Windows.Networking.Vpn.h"
#include "winrt/Windows.Networking.XboxLive.h"
#include "winrt/Windows.Perception.h"
#include "winrt/Windows.Perception.Automation.Core.h"
#include "winrt/Windows.Perception.People.h"
#include "winrt/Windows.Perception.Spatial.h"
#include "winrt/Windows.Perception.Spatial.Preview.h"
#include "winrt/Windows.Perception.Spatial.Surfaces.h"
#include "winrt/Windows.Phone.ApplicationModel.h"
#include "winrt/Windows.Phone.Devices.Notification.h"
#include "winrt/Windows.Phone.Devices.Power.h"
#include "winrt/Windows.Phone.Management.Deployment.h"
#include "winrt/Windows.Phone.Media.Devices.h"
#include "winrt/Windows.Phone.Notification.Management.h"
#include "winrt/Windows.Phone.PersonalInformation.h"
#include "winrt/Windows.Phone.PersonalInformation.Provisioning.h"
#include "winrt/Windows.Phone.Speech.Recognition.h"
#include "winrt/Windows.Phone.StartScreen.h"
#include "winrt/Windows.Phone.System.h"
#include "winrt/Windows.Phone.System.Power.h"
#include "winrt/Windows.Phone.System.Profile.h"
#include "winrt/Windows.Phone.System.UserProfile.GameServices.Core.h"
#include "winrt/Windows.Phone.UI.Input.h"
#include "winrt/Windows.Security.Authentication.Identity.h"
#include "winrt/Windows.Security.Authentication.Identity.Core.h"
#include "winrt/Windows.Security.Authentication.Identity.Provider.h"
#include "winrt/Windows.Security.Authentication.OnlineId.h"
#include "winrt/Windows.Security.Authentication.Web.h"
#include "winrt/Windows.Security.Authentication.Web.Core.h"
#include "winrt/Windows.Security.Authentication.Web.Provider.h"
#include "winrt/Windows.Security.Credentials.h"
#include "winrt/Windows.Security.Credentials.UI.h"
#include "winrt/Windows.Security.Cryptography.h"
#include "winrt/Windows.Security.Cryptography.Certificates.h"
#include "winrt/Windows.Security.Cryptography.Core.h"
#include "winrt/Windows.Security.Cryptography.DataProtection.h"
#include "winrt/Windows.Security.EnterpriseData.h"
#include "winrt/Windows.Security.ExchangeActiveSyncProvisioning.h"
#include "winrt/Windows.Services.Cortana.h"
#include "winrt/Windows.Services.Maps.h"
#include "winrt/Windows.Services.Maps.Guidance.h"
#include "winrt/Windows.Services.Maps.LocalSearch.h"
#include "winrt/Windows.Services.Maps.OfflineMaps.h"
#include "winrt/Windows.Services.Store.h"
#include "winrt/Windows.Services.TargetedContent.h"
#include "winrt/Windows.Storage.h"
#include "winrt/Windows.Storage.AccessCache.h"
#include "winrt/Windows.Storage.BulkAccess.h"
#include "winrt/Windows.Storage.Compression.h"
#include "winrt/Windows.Storage.FileProperties.h"
#include "winrt/Windows.Storage.Pickers.h"
#include "winrt/Windows.Storage.Pickers.Provider.h"
#include "winrt/Windows.Storage.Provider.h"
#include "winrt/Windows.Storage.Search.h"
#include "winrt/Windows.Storage.Streams.h"
#include "winrt/Windows.System.h"
#include "winrt/Windows.System.Diagnostics.h"
#include "winrt/Windows.System.Diagnostics.DevicePortal.h"
#include "winrt/Windows.System.Diagnostics.Telemetry.h"
#include "winrt/Windows.System.Diagnostics.TraceReporting.h"
#include "winrt/Windows.System.Display.h"
#include "winrt/Windows.System.Inventory.h"
#include "winrt/Windows.System.Power.h"
#include "winrt/Windows.System.Power.Diagnostics.h"
#include "winrt/Windows.System.Preview.h"
#include "winrt/Windows.System.Profile.h"
#include "winrt/Windows.System.Profile.SystemManufacturers.h"
#include "winrt/Windows.System.RemoteDesktop.h"
#include "winrt/Windows.System.RemoteSystems.h"
#include "winrt/Windows.System.Threading.h"
#include "winrt/Windows.System.Threading.Core.h"
#include "winrt/Windows.System.Update.h"
#include "winrt/Windows.System.UserProfile.h"
#include "winrt/Windows.UI.h"
#include "winrt/Windows.UI.Accessibility.h"
#include "winrt/Windows.UI.ApplicationSettings.h"
#include "winrt/Windows.UI.Composition.h"
#include "winrt/Windows.UI.Composition.Core.h"
#include "winrt/Windows.UI.Composition.Desktop.h"
#include "winrt/Windows.UI.Composition.Diagnostics.h"
#include "winrt/Windows.UI.Composition.Effects.h"
#include "winrt/Windows.UI.Composition.Interactions.h"
#include "winrt/Windows.UI.Core.h"
#include "winrt/Windows.UI.Core.AnimationMetrics.h"
#include "winrt/Windows.UI.Core.Preview.h"
#include "winrt/Windows.UI.Input.h"
#include "winrt/Windows.UI.Input.Core.h"
#include "winrt/Windows.UI.Input.Inking.h"
#include "winrt/Windows.UI.Input.Inking.Analysis.h"
#include "winrt/Windows.UI.Input.Inking.Core.h"
#include "winrt/Windows.UI.Input.Inking.Preview.h"
#include "winrt/Windows.UI.Input.Preview.Injection.h"
#include "winrt/Windows.UI.Input.Spatial.h"
#include "winrt/Windows.UI.Notifications.h"
#include "winrt/Windows.UI.Notifications.Management.h"
#include "winrt/Windows.UI.Popups.h"
#include "winrt/Windows.UI.Shell.h"
#include "winrt/Windows.UI.StartScreen.h"
#include "winrt/Windows.UI.Text.h"
#include "winrt/Windows.UI.Text.Core.h"
#include "winrt/Windows.UI.ViewManagement.h"
#include "winrt/Windows.UI.ViewManagement.Core.h"
#include "winrt/Windows.UI.WebUI.h"
#include "winrt/Windows.UI.WebUI.Core.h"
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Automation.h"
#include "winrt/Windows.UI.Xaml.Automation.Peers.h"
#include "winrt/Windows.UI.Xaml.Automation.Provider.h"
#include "winrt/Windows.UI.Xaml.Automation.Text.h"
#include "winrt/Windows.UI.Xaml.Controls.h"
#include "winrt/Windows.UI.Xaml.Controls.Maps.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "winrt/Windows.UI.Xaml.Core.Direct.h"
#include "winrt/Windows.UI.Xaml.Data.h"
#include "winrt/Windows.UI.Xaml.Documents.h"
#include "winrt/Windows.UI.Xaml.Hosting.h"
#include "winrt/Windows.UI.Xaml.Input.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Media.h"
#include "winrt/Windows.UI.Xaml.Media.Animation.h"
#include "winrt/Windows.UI.Xaml.Media.Imaging.h"
#include "winrt/Windows.UI.Xaml.Media.Media3D.h"
#include "winrt/Windows.UI.Xaml.Navigation.h"
#include "winrt/Windows.UI.Xaml.Printing.h"
#include "winrt/Windows.UI.Xaml.Resources.h"
#include "winrt/Windows.UI.Xaml.Shapes.h"
#include "winrt/Windows.Web.h"
#include "winrt/Windows.Web.AtomPub.h"
#include "winrt/Windows.Web.Http.h"
#include "winrt/Windows.Web.Http.Diagnostics.h"
#include "winrt/Windows.Web.Http.Filters.h"
#include "winrt/Windows.Web.Http.Headers.h"
#include "winrt/Windows.Web.Syndication.h"
#include "winrt/Windows.Web.UI.h"
#include "winrt/Windows.Web.UI.Interop.h"
