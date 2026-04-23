#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__LOADSHAREDRESOURCE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A711FC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__LOADSHAREDRESOURCE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A712030)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__LOADSHAREDRESOURCE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A711980)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__LOADSHAREDRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A711960)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRResources__LoadSharedResource_TypeDefinitionIndex = 35946;

	class IVRResources__LoadSharedResource : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__LOADSHAREDRESOURCE__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::String* pchResourceName, ::System::String* pchBuffer, ::System::UInt32 unBufferLen)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__LOADSHAREDRESOURCE_INVOKE_OFFSET))(this, pchResourceName, pchBuffer, unBufferLen);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchResourceName, ::System::String* pchBuffer, ::System::UInt32 unBufferLen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__LOADSHAREDRESOURCE_BEGININVOKE_OFFSET))(this, pchResourceName, pchBuffer, unBufferLen, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__LOADSHAREDRESOURCE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
