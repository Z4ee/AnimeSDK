#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRScreenshotType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD77D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD7830)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD7470)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD7450)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots__HookScreenshot_TypeDefinitionIndex = 30219;

	class IVRScreenshots__HookScreenshot : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError Invoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>* pSupportedTypes, ::System::Int32 numTypes)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_INVOKE_OFFSET))(this, pSupportedTypes, numTypes);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>* pSupportedTypes, ::System::Int32 numTypes, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotType>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_BEGININVOKE_OFFSET))(this, pSupportedTypes, numTypes, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRScreenshotError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSCREENSHOTS__HOOKSCREENSHOT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
