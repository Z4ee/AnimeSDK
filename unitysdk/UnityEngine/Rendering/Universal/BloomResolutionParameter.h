#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BloomResolution.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_BLOOMRESOLUTIONPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0xF795D60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BloomResolutionParameter_TypeDefinitionIndex = 26698;

	class BloomResolutionParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::BloomResolution>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::BloomResolution value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::BloomResolution, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLOOMRESOLUTIONPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
