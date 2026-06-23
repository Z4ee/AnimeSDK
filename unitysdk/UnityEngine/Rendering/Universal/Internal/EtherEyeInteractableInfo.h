#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEINFO_GET_ENABLEPASS_OFFSET UNITYSDK_OFFSET(0x1C99E6B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99E6E0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int EtherEyeInteractableInfo_TypeDefinitionIndex = 26233;

	class EtherEyeInteractableInfo : public ::System::Object
	{
	public:
		// static const ::System::Int32 RenderPassIndexAfterOpaquePostProcessPass = 0x0; // 0x0
		// static const ::System::Int32 RenderPassIndexBeforeOpaquePostProcessPass = 0x1; // 0x0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* renderersAndMaterials; // 0x10
		::System::Int32 renderPassIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_enablePass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ETHEREYEINTERACTABLEINFO_GET_ENABLEPASS_OFFSET))(this);
		}
	};
}
