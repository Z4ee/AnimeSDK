#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__TAKESTEREOSCREENSHOT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B22F460)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__TAKESTEREOSCREENSHOT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B22F4D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__TAKESTEREOSCREENSHOT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B22F440)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__TAKESTEREOSCREENSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B22F3C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__TakeStereoScreenshot_TypeDefinitionIndex = 37025;

	class IVRScreenshots__TakeStereoScreenshot : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__TAKESTEREOSCREENSHOT__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError Invoke(::System::UInt32& a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__TAKESTEREOSCREENSHOT_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32& a1, ::System::String* a2, ::System::String* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32&, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__TAKESTEREOSCREENSHOT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError EndInvoke(::System::UInt32& a1, ::System::IAsyncResult* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__TAKESTEREOSCREENSHOT_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
