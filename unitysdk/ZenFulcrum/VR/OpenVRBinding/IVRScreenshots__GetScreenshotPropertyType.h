#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7128E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A712970)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A712590)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A712570)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__GetScreenshotPropertyType_TypeDefinitionIndex = 35940;

	class IVRScreenshots__GetScreenshotPropertyType : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType Invoke(::System::UInt32 screenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& pError)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_INVOKE_OFFSET))(this, screenshotHandle, pError);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 screenshotHandle, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& pError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_BEGININVOKE_OFFSET))(this, screenshotHandle, pError, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& pError, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_ENDINVOKE_OFFSET))(this, pError, result);
		}
	};
}
