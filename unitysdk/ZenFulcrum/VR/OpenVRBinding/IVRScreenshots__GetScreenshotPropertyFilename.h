#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotPropertyFilenames.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A712460)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A712540)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A712080)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A712060)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__GetScreenshotPropertyFilename_TypeDefinitionIndex = 35941;

	class IVRScreenshots__GetScreenshotPropertyFilename : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::UInt32 screenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, ::System::UInt32 cchFilename, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& pError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_INVOKE_OFFSET))(this, screenshotHandle, filenameType, pchFilename, cchFilename, pError);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 screenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, ::System::UInt32 cchFilename, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& pError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_BEGININVOKE_OFFSET))(this, screenshotHandle, filenameType, pchFilename, cchFilename, pError, callback, object);
		}

		::System::UInt32 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& pError, ::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_ENDINVOKE_OFFSET))(this, pError, result);
		}
	};
}
