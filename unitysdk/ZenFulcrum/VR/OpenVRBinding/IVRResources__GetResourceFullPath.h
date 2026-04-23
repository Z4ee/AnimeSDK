#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__GETRESOURCEFULLPATH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7118C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__GETRESOURCEFULLPATH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A711930)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__GETRESOURCEFULLPATH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A711200)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__GETRESOURCEFULLPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7111E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRResources__GetResourceFullPath_TypeDefinitionIndex = 35947;

	class IVRResources__GetResourceFullPath : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__GETRESOURCEFULLPATH__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::String* pchResourceName, ::System::String* pchResourceTypeDirectory, ::System::String* pchPathBuffer, ::System::UInt32 unBufferLen)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__GETRESOURCEFULLPATH_INVOKE_OFFSET))(this, pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchResourceName, ::System::String* pchResourceTypeDirectory, ::System::String* pchPathBuffer, ::System::UInt32 unBufferLen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__GETRESOURCEFULLPATH_BEGININVOKE_OFFSET))(this, pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRESOURCES__GETRESOURCEFULLPATH_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
