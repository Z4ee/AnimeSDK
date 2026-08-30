#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotPropertyFilenames.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRScreenshots.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_GETSCREENSHOTPROPERTYFILENAME_OFFSET UNITYSDK_OFFSET(0x1EFAEB50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_GETSCREENSHOTPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1EFAEB20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_HOOKSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x1EFAEAE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_REQUESTSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x1EFAEAA0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_SUBMITSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x1EFAEBF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_TAKESTEREOSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x1EFAEBC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_UPDATESCREENSHOTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1EFAEB90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAE9B0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRScreenshots_TypeDefinitionIndex = 37913;

	class CVRScreenshots : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS__CTOR_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError RequestScreenshot(::System::UInt32& a1, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_REQUESTSCREENSHOT_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError HookScreenshot(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_HOOKSCREENSHOT_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType GetScreenshotPropertyType(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_GETSCREENSHOTPROPERTYTYPE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetScreenshotPropertyFilename(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_GETSCREENSHOTPROPERTYFILENAME_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError UpdateScreenshotProgress(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_UPDATESCREENSHOTPROGRESS_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError TakeStereoScreenshot(::System::UInt32& a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_TAKESTEREOSCREENSHOT_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError SubmitScreenshot(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSCREENSHOTS_SUBMITSCREENSHOT_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
