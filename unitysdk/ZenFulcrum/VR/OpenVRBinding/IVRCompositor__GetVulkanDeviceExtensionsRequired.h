#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANDEVICEEXTENSIONSREQUIRED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5190C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANDEVICEEXTENSIONSREQUIRED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B519140)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANDEVICEEXTENSIONSREQUIRED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5190A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANDEVICEEXTENSIONSREQUIRED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B519030)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetVulkanDeviceExtensionsRequired_TypeDefinitionIndex = 36117;

	class IVRCompositor__GetVulkanDeviceExtensionsRequired : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANDEVICEEXTENSIONSREQUIRED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::System::IntPtr a1, ::System::Text::StringBuilder* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IntPtr, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANDEVICEEXTENSIONSREQUIRED_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Text::StringBuilder* a2, ::System::UInt32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Text::StringBuilder*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANDEVICEEXTENSIONSREQUIRED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANDEVICEEXTENSIONSREQUIRED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
