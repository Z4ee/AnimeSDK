#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD1FB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD2020)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD18F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD18D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetComponentRenderModelName_TypeDefinitionIndex = 30195;

	class IVRRenderModels__GetComponentRenderModelName : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::String* pchRenderModelName, ::System::String* pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName, ::System::UInt32 unComponentRenderModelNameLen)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_INVOKE_OFFSET))(this, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchRenderModelName, ::System::String* pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName, ::System::UInt32 unComponentRenderModelNameLen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_BEGININVOKE_OFFSET))(this, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTRENDERMODELNAME_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
