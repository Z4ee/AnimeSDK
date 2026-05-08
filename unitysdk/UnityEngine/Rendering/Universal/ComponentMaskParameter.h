#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ComponentMask.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_COMPONENTMASKPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0xF7EFA20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ComponentMaskParameter_TypeDefinitionIndex = 29876;

	class ComponentMaskParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::ComponentMask>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::ComponentMask value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ComponentMask, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COMPONENTMASKPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
