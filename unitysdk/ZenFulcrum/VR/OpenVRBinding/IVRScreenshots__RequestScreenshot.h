#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBFBB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBFC60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBFB80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBFB00)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__RequestScreenshot_TypeDefinitionIndex = 37879;

	class IVRScreenshots__RequestScreenshot : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError Invoke(::System::UInt32& a1, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32& a1, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType a2, ::System::String* a3, ::System::String* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError EndInvoke(::System::UInt32& a1, ::System::IAsyncResult* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__REQUESTSCREENSHOT_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
