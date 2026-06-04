#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B522E80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B522EE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B522E70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B522DF0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__HookScreenshot_TypeDefinitionIndex = 36239;

	class IVRScreenshots__HookScreenshot : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError Invoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>* a1, ::System::Int32 a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>* a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
