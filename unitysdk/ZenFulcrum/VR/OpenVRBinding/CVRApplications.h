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

#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ADDAPPLICATIONMANIFEST_OFFSET UNITYSDK_OFFSET(0x18C95480)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_CANCELAPPLICATIONLAUNCH_OFFSET UNITYSDK_OFFSET(0x18C98790)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONAUTOLAUNCH_OFFSET UNITYSDK_OFFSET(0x18C9B260)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x18C96590)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONKEYBYINDEX_OFFSET UNITYSDK_OFFSET(0x18C96860)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONKEYBYPROCESSID_OFFSET UNITYSDK_OFFSET(0x18C96C10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONLAUNCHARGUMENTS_OFFSET UNITYSDK_OFFSET(0x18C9D0E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROCESSID_OFFSET UNITYSDK_OFFSET(0x18C99080)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYBOOL_OFFSET UNITYSDK_OFFSET(0x18C9A010)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYSTRING_OFFSET UNITYSDK_OFFSET(0x18C99930)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYUINT64_OFFSET UNITYSDK_OFFSET(0x18C9A640)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x18C99600)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSTHATSUPPORTMIMETYPE_OFFSET UNITYSDK_OFFSET(0x18C9CA80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x18C9E260)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSUPPORTEDMIMETYPES_OFFSET UNITYSDK_OFFSET(0x18C9C420)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETCURRENTSCENEPROCESSID_OFFSET UNITYSDK_OFFSET(0x18C9EED0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETDEFAULTAPPLICATIONFORMIMETYPE_OFFSET UNITYSDK_OFFSET(0x18C9BDC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETSTARTINGAPPLICATION_OFFSET UNITYSDK_OFFSET(0x18C9D490)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETTRANSITIONSTATE_OFFSET UNITYSDK_OFFSET(0x18C9DA10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_IDENTIFYAPPLICATION_OFFSET UNITYSDK_OFFSET(0x18C98D10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ISAPPLICATIONINSTALLED_OFFSET UNITYSDK_OFFSET(0x18C96010)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ISQUITUSERPROMPTREQUESTED_OFFSET UNITYSDK_OFFSET(0x18C9E5A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHAPPLICATIONFROMMIMETYPE_OFFSET UNITYSDK_OFFSET(0x18C97C30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHAPPLICATION_OFFSET UNITYSDK_OFFSET(0x18C96FC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHDASHBOARDOVERLAY_OFFSET UNITYSDK_OFFSET(0x18C98210)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHINTERNALPROCESS_OFFSET UNITYSDK_OFFSET(0x18C9E870)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHTEMPLATEAPPLICATION_OFFSET UNITYSDK_OFFSET(0x18C97540)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_PERFORMAPPLICATIONPRELAUNCHCHECK_OFFSET UNITYSDK_OFFSET(0x18C9DCE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_REMOVEAPPLICATIONMANIFEST_OFFSET UNITYSDK_OFFSET(0x18C95A90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_SETAPPLICATIONAUTOLAUNCH_OFFSET UNITYSDK_OFFSET(0x18C9AC50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_SETDEFAULTAPPLICATIONFORMIMETYPE_OFFSET UNITYSDK_OFFSET(0x18C9B7E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18C95390)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRApplications_TypeDefinitionIndex = 30240;

	class CVRApplications : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRApplications FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS__CTOR_OFFSET))(this, pInterface);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError AddApplicationManifest(::System::String* pchApplicationManifestFullPath, ::System::Boolean bTemporary)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ADDAPPLICATIONMANIFEST_OFFSET))(this, pchApplicationManifestFullPath, bTemporary);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError RemoveApplicationManifest(::System::String* pchApplicationManifestFullPath)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_REMOVEAPPLICATIONMANIFEST_OFFSET))(this, pchApplicationManifestFullPath);
		}

		::System::Boolean IsApplicationInstalled(::System::String* pchAppKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ISAPPLICATIONINSTALLED_OFFSET))(this, pchAppKey);
		}

		::System::UInt32 GetApplicationCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONCOUNT_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError GetApplicationKeyByIndex(::System::UInt32 unApplicationIndex, ::System::Text::StringBuilder* pchAppKeyBuffer, ::System::UInt32 unAppKeyBufferLen)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONKEYBYINDEX_OFFSET))(this, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError GetApplicationKeyByProcessId(::System::UInt32 unProcessId, ::System::String* pchAppKeyBuffer, ::System::UInt32 unAppKeyBufferLen)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONKEYBYPROCESSID_OFFSET))(this, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError LaunchApplication(::System::String* pchAppKey)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHAPPLICATION_OFFSET))(this, pchAppKey);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError LaunchTemplateApplication(::System::String* pchTemplateAppKey, ::System::String* pchNewAppKey, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>* pKeys)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::AppOverrideKeys_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHTEMPLATEAPPLICATION_OFFSET))(this, pchTemplateAppKey, pchNewAppKey, pKeys);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError LaunchApplicationFromMimeType(::System::String* pchMimeType, ::System::String* pchArgs)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHAPPLICATIONFROMMIMETYPE_OFFSET))(this, pchMimeType, pchArgs);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError LaunchDashboardOverlay(::System::String* pchAppKey)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHDASHBOARDOVERLAY_OFFSET))(this, pchAppKey);
		}

		::System::Boolean CancelApplicationLaunch(::System::String* pchAppKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_CANCELAPPLICATIONLAUNCH_OFFSET))(this, pchAppKey);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError IdentifyApplication(::System::UInt32 unProcessId, ::System::String* pchAppKey)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_IDENTIFYAPPLICATION_OFFSET))(this, unProcessId, pchAppKey);
		}

		::System::UInt32 GetApplicationProcessId(::System::String* pchAppKey)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROCESSID_OFFSET))(this, pchAppKey);
		}

		::System::String* GetApplicationsErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError error)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSERRORNAMEFROMENUM_OFFSET))(this, error);
		}

		::System::UInt32 GetApplicationPropertyString(::System::String* pchAppKey, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty eProperty, ::System::Text::StringBuilder* pchPropertyValueBuffer, ::System::UInt32 unPropertyValueBufferLen, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYSTRING_OFFSET))(this, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
		}

		::System::Boolean GetApplicationPropertyBool(::System::String* pchAppKey, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty eProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYBOOL_OFFSET))(this, pchAppKey, eProperty, peError);
		}

		::System::UInt64 GetApplicationPropertyUint64(::System::String* pchAppKey, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty eProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError& peError)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationProperty, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONPROPERTYUINT64_OFFSET))(this, pchAppKey, eProperty, peError);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError SetApplicationAutoLaunch(::System::String* pchAppKey, ::System::Boolean bAutoLaunch)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_SETAPPLICATIONAUTOLAUNCH_OFFSET))(this, pchAppKey, bAutoLaunch);
		}

		::System::Boolean GetApplicationAutoLaunch(::System::String* pchAppKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONAUTOLAUNCH_OFFSET))(this, pchAppKey);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError SetDefaultApplicationForMimeType(::System::String* pchAppKey, ::System::String* pchMimeType)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_SETDEFAULTAPPLICATIONFORMIMETYPE_OFFSET))(this, pchAppKey, pchMimeType);
		}

		::System::Boolean GetDefaultApplicationForMimeType(::System::String* pchMimeType, ::System::String* pchAppKeyBuffer, ::System::UInt32 unAppKeyBufferLen)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETDEFAULTAPPLICATIONFORMIMETYPE_OFFSET))(this, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen);
		}

		::System::Boolean GetApplicationSupportedMimeTypes(::System::String* pchAppKey, ::System::String* pchMimeTypesBuffer, ::System::UInt32 unMimeTypesBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSUPPORTEDMIMETYPES_OFFSET))(this, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer);
		}

		::System::UInt32 GetApplicationsThatSupportMimeType(::System::String* pchMimeType, ::System::String* pchAppKeysThatSupportBuffer, ::System::UInt32 unAppKeysThatSupportBuffer)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSTHATSUPPORTMIMETYPE_OFFSET))(this, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer);
		}

		::System::UInt32 GetApplicationLaunchArguments(::System::UInt32 unHandle, ::System::String* pchArgs, ::System::UInt32 unArgs)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONLAUNCHARGUMENTS_OFFSET))(this, unHandle, pchArgs, unArgs);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError GetStartingApplication(::System::String* pchAppKeyBuffer, ::System::UInt32 unAppKeyBufferLen)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETSTARTINGAPPLICATION_OFFSET))(this, pchAppKeyBuffer, unAppKeyBufferLen);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState GetTransitionState()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETTRANSITIONSTATE_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError PerformApplicationPrelaunchCheck(::System::String* pchAppKey)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_PERFORMAPPLICATIONPRELAUNCHCHECK_OFFSET))(this, pchAppKey);
		}

		::System::String* GetApplicationsTransitionStateNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState state)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationTransitionState))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETAPPLICATIONSTRANSITIONSTATENAMEFROMENUM_OFFSET))(this, state);
		}

		::System::Boolean IsQuitUserPromptRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_ISQUITUSERPROMPTREQUESTED_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError LaunchInternalProcess(::System::String* pchBinaryPath, ::System::String* pchArguments, ::System::String* pchWorkingDirectory)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_LAUNCHINTERNALPROCESS_OFFSET))(this, pchBinaryPath, pchArguments, pchWorkingDirectory);
		}

		::System::UInt32 GetCurrentSceneProcessId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRAPPLICATIONS_GETCURRENTSCENEPROCESSID_OFFSET))(this);
		}
	};
}
