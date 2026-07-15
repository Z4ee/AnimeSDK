#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__AddApplicationManifest; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__CancelApplicationLaunch; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationAutoLaunch; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationCount; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationKeyByIndex; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationKeyByProcessId; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationLaunchArguments; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationProcessId; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationPropertyBool; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationPropertyString; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationPropertyUint64; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationSupportedMimeTypes; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationsErrorNameFromEnum; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationsThatSupportMimeType; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetApplicationsTransitionStateNameFromEnum; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetCurrentSceneProcessId; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetDefaultApplicationForMimeType; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetStartingApplication; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__GetTransitionState; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__IdentifyApplication; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__IsApplicationInstalled; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__IsQuitUserPromptRequested; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__LaunchApplication; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__LaunchApplicationFromMimeType; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__LaunchDashboardOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__LaunchInternalProcess; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__LaunchTemplateApplication; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__PerformApplicationPrelaunchCheck; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__RemoveApplicationManifest; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__SetApplicationAutoLaunch; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRApplications__SetDefaultApplicationForMimeType; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications_TypeDefinitionIndex = 36796;

	struct alignas(8) IVRApplications
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__AddApplicationManifest* AddApplicationManifest; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__RemoveApplicationManifest* RemoveApplicationManifest; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__IsApplicationInstalled* IsApplicationInstalled; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationCount* GetApplicationCount; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationKeyByIndex* GetApplicationKeyByIndex; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationKeyByProcessId* GetApplicationKeyByProcessId; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchApplication* LaunchApplication; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchTemplateApplication* LaunchTemplateApplication; // 0x48
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchApplicationFromMimeType* LaunchApplicationFromMimeType; // 0x50
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchDashboardOverlay* LaunchDashboardOverlay; // 0x58
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__CancelApplicationLaunch* CancelApplicationLaunch; // 0x60
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__IdentifyApplication* IdentifyApplication; // 0x68
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationProcessId* GetApplicationProcessId; // 0x70
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationsErrorNameFromEnum* GetApplicationsErrorNameFromEnum; // 0x78
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationPropertyString* GetApplicationPropertyString; // 0x80
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationPropertyBool* GetApplicationPropertyBool; // 0x88
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationPropertyUint64* GetApplicationPropertyUint64; // 0x90
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__SetApplicationAutoLaunch* SetApplicationAutoLaunch; // 0x98
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationAutoLaunch* GetApplicationAutoLaunch; // 0xA0
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__SetDefaultApplicationForMimeType* SetDefaultApplicationForMimeType; // 0xA8
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetDefaultApplicationForMimeType* GetDefaultApplicationForMimeType; // 0xB0
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationSupportedMimeTypes* GetApplicationSupportedMimeTypes; // 0xB8
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationsThatSupportMimeType* GetApplicationsThatSupportMimeType; // 0xC0
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationLaunchArguments* GetApplicationLaunchArguments; // 0xC8
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetStartingApplication* GetStartingApplication; // 0xD0
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetTransitionState* GetTransitionState; // 0xD8
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__PerformApplicationPrelaunchCheck* PerformApplicationPrelaunchCheck; // 0xE0
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationsTransitionStateNameFromEnum* GetApplicationsTransitionStateNameFromEnum; // 0xE8
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__IsQuitUserPromptRequested* IsQuitUserPromptRequested; // 0xF0
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchInternalProcess* LaunchInternalProcess; // 0xF8
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetCurrentSceneProcessId* GetCurrentSceneProcessId; // 0x100
	};
}
