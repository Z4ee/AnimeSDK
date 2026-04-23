#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A70C6B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A70C6E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A70C150)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70C130)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetComponentCount_TypeDefinitionIndex = 35912;

	class IVRRenderModels__GetComponentCount : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::String* pchRenderModelName)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_INVOKE_OFFSET))(this, pchRenderModelName);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchRenderModelName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_BEGININVOKE_OFFSET))(this, pchRenderModelName, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTCOUNT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
