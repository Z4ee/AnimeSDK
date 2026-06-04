#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5233E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B523450)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5233D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B523360)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__UpdateScreenshotProgress_TypeDefinitionIndex = 36242;

	class IVRScreenshots__UpdateScreenshotProgress : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError Invoke(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::Single a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__UPDATESCREENSHOTPROGRESS_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
