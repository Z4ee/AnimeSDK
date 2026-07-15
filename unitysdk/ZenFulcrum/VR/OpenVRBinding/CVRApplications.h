#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/AppOverrideKeys_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationProperty.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationTransitionState.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRApplications.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ADDAPPLICATIONMANIFEST_OFFSET UNITYSDK_OFFSET(0x1BBEEAD0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_CANCELAPPLICATIONLAUNCH_OFFSET UNITYSDK_OFFSET(0x1BBEEDA0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONAUTOLAUNCH_OFFSET UNITYSDK_OFFSET(0x1BBEF030)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1BBEEB90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONKEYBYINDEX_OFFSET UNITYSDK_OFFSET(0x1BBEEBD0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONKEYBYPROCESSID_OFFSET UNITYSDK_OFFSET(0x1BBEEC20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONLAUNCHARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1BBEF1A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROCESSID_OFFSET UNITYSDK_OFFSET(0x1BBEEE20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYBOOL_OFFSET UNITYSDK_OFFSET(0x1BBEEF50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYSTRING_OFFSET UNITYSDK_OFFSET(0x1BBEEEC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYUINT64_OFFSET UNITYSDK_OFFSET(0x1BBEEFA0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1BBEEE60)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSTHATSUPPORTMIMETYPE_OFFSET UNITYSDK_OFFSET(0x1BBEF150)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1BBEF2B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSUPPORTEDMIMETYPES_OFFSET UNITYSDK_OFFSET(0x1BBEF100)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETCURRENTSCENEPROCESSID_OFFSET UNITYSDK_OFFSET(0x1BBEF3A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETDEFAULTAPPLICATIONFORMIMETYPE_OFFSET UNITYSDK_OFFSET(0x1BBEF0B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETSTARTINGAPPLICATION_OFFSET UNITYSDK_OFFSET(0x1BBEF1F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETTRANSITIONSTATE_OFFSET UNITYSDK_OFFSET(0x1BBEF230)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_IDENTIFYAPPLICATION_OFFSET UNITYSDK_OFFSET(0x1BBEEDE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ISAPPLICATIONINSTALLED_OFFSET UNITYSDK_OFFSET(0x1BBEEB50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ISQUITUSERPROMPTREQUESTED_OFFSET UNITYSDK_OFFSET(0x1BBEF310)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHAPPLICATIONFROMMIMETYPE_OFFSET UNITYSDK_OFFSET(0x1BBEED20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHAPPLICATION_OFFSET UNITYSDK_OFFSET(0x1BBEEC70)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHDASHBOARDOVERLAY_OFFSET UNITYSDK_OFFSET(0x1BBEED60)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHINTERNALPROCESS_OFFSET UNITYSDK_OFFSET(0x1BBEF350)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHTEMPLATEAPPLICATION_OFFSET UNITYSDK_OFFSET(0x1BBEECB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_PERFORMAPPLICATIONPRELAUNCHCHECK_OFFSET UNITYSDK_OFFSET(0x1BBEF270)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_REMOVEAPPLICATIONMANIFEST_OFFSET UNITYSDK_OFFSET(0x1BBEEB10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_SETAPPLICATIONAUTOLAUNCH_OFFSET UNITYSDK_OFFSET(0x1BBEEFF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_SETDEFAULTAPPLICATIONFORMIMETYPE_OFFSET UNITYSDK_OFFSET(0x1BBEF070)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBEE9F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRApplications_TypeDefinitionIndex = 37042;

	class CVRApplications : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS__CTOR_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError AddApplicationManifest(::System::String* a1, ::System::Boolean a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ADDAPPLICATIONMANIFEST_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError RemoveApplicationManifest(::System::String* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_REMOVEAPPLICATIONMANIFEST_OFFSET))(this, a1);
		}

		::System::Boolean IsApplicationInstalled(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ISAPPLICATIONINSTALLED_OFFSET))(this, a1);
		}

		::System::UInt32 GetApplicationCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONCOUNT_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError GetApplicationKeyByIndex(::System::UInt32 a1, ::System::Text::StringBuilder* a2, ::System::UInt32 a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONKEYBYINDEX_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError GetApplicationKeyByProcessId(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONKEYBYPROCESSID_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError LaunchApplication(::System::String* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHAPPLICATION_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError LaunchTemplateApplication(::System::String* a1, ::System::String* a2, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>* a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHTEMPLATEAPPLICATION_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError LaunchApplicationFromMimeType(::System::String* a1, ::System::String* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHAPPLICATIONFROMMIMETYPE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError LaunchDashboardOverlay(::System::String* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHDASHBOARDOVERLAY_OFFSET))(this, a1);
		}

		::System::Boolean CancelApplicationLaunch(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_CANCELAPPLICATIONLAUNCH_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError IdentifyApplication(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_IDENTIFYAPPLICATION_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetApplicationProcessId(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROCESSID_OFFSET))(this, a1);
		}

		::System::String* GetApplicationsErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError a1)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSERRORNAMEFROMENUM_OFFSET))(this, a1);
		}

		::System::UInt32 GetApplicationPropertyString(::System::String* a1, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYSTRING_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean GetApplicationPropertyBool(::System::String* a1, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty a2, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYBOOL_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 GetApplicationPropertyUint64(::System::String* a1, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty a2, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYUINT64_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError SetApplicationAutoLaunch(::System::String* a1, ::System::Boolean a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_SETAPPLICATIONAUTOLAUNCH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetApplicationAutoLaunch(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONAUTOLAUNCH_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError SetDefaultApplicationForMimeType(::System::String* a1, ::System::String* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_SETDEFAULTAPPLICATIONFORMIMETYPE_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetDefaultApplicationForMimeType(::System::String* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETDEFAULTAPPLICATIONFORMIMETYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetApplicationSupportedMimeTypes(::System::String* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSUPPORTEDMIMETYPES_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetApplicationsThatSupportMimeType(::System::String* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSTHATSUPPORTMIMETYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetApplicationLaunchArguments(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONLAUNCHARGUMENTS_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError GetStartingApplication(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETSTARTINGAPPLICATION_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState GetTransitionState()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETTRANSITIONSTATE_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError PerformApplicationPrelaunchCheck(::System::String* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_PERFORMAPPLICATIONPRELAUNCHCHECK_OFFSET))(this, a1);
		}

		::System::String* GetApplicationsTransitionStateNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState a1)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM_OFFSET))(this, a1);
		}

		::System::Boolean IsQuitUserPromptRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ISQUITUSERPROMPTREQUESTED_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError LaunchInternalProcess(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHINTERNALPROCESS_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetCurrentSceneProcessId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETCURRENTSCENEPROCESSID_OFFSET))(this);
		}
	};
}
