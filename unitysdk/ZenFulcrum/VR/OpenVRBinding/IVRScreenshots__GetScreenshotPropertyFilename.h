#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotPropertyFilenames.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B22ED40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B22EE20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B22ED00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B22EC90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__GetScreenshotPropertyFilename_TypeDefinitionIndex = 37023;

	class IVRScreenshots__GetScreenshotPropertyFilename : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt32 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYFILENAME_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
