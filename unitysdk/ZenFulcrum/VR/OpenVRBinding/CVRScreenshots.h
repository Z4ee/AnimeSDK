#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotPropertyFilenames.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRScreenshots.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_GETSCREENSHOTPROPERTYFILENAME_OFFSET UNITYSDK_OFFSET(0x18CA7B70)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_GETSCREENSHOTPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x18CA7B50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_HOOKSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x18CA7B20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_REQUESTSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x18CA7AF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_SUBMITSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x18CA7BE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_TAKESTEREOSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x18CA7BB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_UPDATESCREENSHOTPROGRESS_OFFSET UNITYSDK_OFFSET(0x18CA7B90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA7A00)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRScreenshots_TypeDefinitionIndex = 30252;

	class CVRScreenshots : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS__CTOR_OFFSET))(this, pInterface);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError RequestScreenshot(::System::UInt32& pOutScreenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType type, ::System::String* pchPreviewFilename, ::System::String* pchVRFilename)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_REQUESTSCREENSHOT_OFFSET))(this, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError HookScreenshot(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>* pSupportedTypes)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_HOOKSCREENSHOT_OFFSET))(this, pSupportedTypes);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType GetScreenshotPropertyType(::System::UInt32 screenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& pError)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_GETSCREENSHOTPROPERTYTYPE_OFFSET))(this, screenshotHandle, pError);
		}

		::System::UInt32 GetScreenshotPropertyFilename(::System::UInt32 screenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, ::System::UInt32 cchFilename, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& pError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_GETSCREENSHOTPROPERTYFILENAME_OFFSET))(this, screenshotHandle, filenameType, pchFilename, cchFilename, pError);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError UpdateScreenshotProgress(::System::UInt32 screenshotHandle, ::System::Single flProgress)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_UPDATESCREENSHOTPROGRESS_OFFSET))(this, screenshotHandle, flProgress);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError TakeStereoScreenshot(::System::UInt32& pOutScreenshotHandle, ::System::String* pchPreviewFilename, ::System::String* pchVRFilename)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_TAKESTEREOSCREENSHOT_OFFSET))(this, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError SubmitScreenshot(::System::UInt32 screenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType type, ::System::String* pchSourcePreviewFilename, ::System::String* pchSourceVRFilename)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_SUBMITSCREENSHOT_OFFSET))(this, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename);
		}
	};
}
