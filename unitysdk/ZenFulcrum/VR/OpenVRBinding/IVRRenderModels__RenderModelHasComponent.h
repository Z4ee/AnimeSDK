#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5227F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B522830)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5227E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B522760)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__RenderModelHasComponent_TypeDefinitionIndex = 36217;

	class IVRRenderModels__RenderModelHasComponent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__RENDERMODELHASCOMPONENT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
