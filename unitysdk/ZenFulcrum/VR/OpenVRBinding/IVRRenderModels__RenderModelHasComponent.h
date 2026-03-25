#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD5C20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD5C60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD5660)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD5640)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__RenderModelHasComponent_TypeDefinitionIndex = 30197;

	class IVRRenderModels__RenderModelHasComponent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* pchRenderModelName, ::System::String* pchComponentName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_INVOKE_OFFSET))(this, pchRenderModelName, pchComponentName);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchRenderModelName, ::System::String* pchComponentName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_BEGININVOKE_OFFSET))(this, pchRenderModelName, pchComponentName, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
