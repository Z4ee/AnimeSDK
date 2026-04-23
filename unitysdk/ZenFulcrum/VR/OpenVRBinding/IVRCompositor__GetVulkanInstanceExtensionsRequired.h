#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANINSTANCEEXTENSIONSREQUIRED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EE640)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANINSTANCEEXTENSIONSREQUIRED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EE6A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANINSTANCEEXTENSIONSREQUIRED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EE0E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANINSTANCEEXTENSIONSREQUIRED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6EE0C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetVulkanInstanceExtensionsRequired_TypeDefinitionIndex = 35816;

	class IVRCompositor__GetVulkanInstanceExtensionsRequired : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANINSTANCEEXTENSIONSREQUIRED__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANINSTANCEEXTENSIONSREQUIRED_INVOKE_OFFSET))(this, pchValue, unBufferSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANINSTANCEEXTENSIONSREQUIRED_BEGININVOKE_OFFSET))(this, pchValue, unBufferSize, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETVULKANINSTANCEEXTENSIONSREQUIRED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
