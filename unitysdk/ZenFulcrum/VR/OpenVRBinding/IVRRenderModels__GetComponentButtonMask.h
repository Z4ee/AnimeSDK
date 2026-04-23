#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTBUTTONMASK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A70C0C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTBUTTONMASK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A70C100)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTBUTTONMASK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A70BB00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTBUTTONMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70BAE0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetComponentButtonMask_TypeDefinitionIndex = 35914;

	class IVRRenderModels__GetComponentButtonMask : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTBUTTONMASK__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt64 Invoke(::System::String* pchRenderModelName, ::System::String* pchComponentName)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTBUTTONMASK_INVOKE_OFFSET))(this, pchRenderModelName, pchComponentName);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchRenderModelName, ::System::String* pchComponentName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTBUTTONMASK_BEGININVOKE_OFFSET))(this, pchRenderModelName, pchComponentName, callback, object);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTBUTTONMASK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
