#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B522D30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B522DC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B522D20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B522CB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__GetScreenshotPropertyType_TypeDefinitionIndex = 36240;

	class IVRScreenshots__GetScreenshotPropertyType : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType Invoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError& a1, ::System::IAsyncResult* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__GETSCREENSHOTPROPERTYTYPE_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
