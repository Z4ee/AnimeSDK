#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_BLENDMODESPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A692EB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BlendModesParameter_TypeDefinitionIndex = 30165;

	class BlendModesParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::BlendModes>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::BlendModes value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::BlendModes, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLENDMODESPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
