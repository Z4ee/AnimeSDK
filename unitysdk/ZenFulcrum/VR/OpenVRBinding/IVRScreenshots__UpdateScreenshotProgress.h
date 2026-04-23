#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A713EE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A713F50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A713BC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A713BA0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__UpdateScreenshotProgress_TypeDefinitionIndex = 35942;

	class IVRScreenshots__UpdateScreenshotProgress : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError Invoke(::System::UInt32 screenshotHandle, ::System::Single flProgress)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_INVOKE_OFFSET))(this, screenshotHandle, flProgress);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 screenshotHandle, ::System::Single flProgress, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_BEGININVOKE_OFFSET))(this, screenshotHandle, flProgress, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
