#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_PPQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9B3190)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PPQualityParameter_TypeDefinitionIndex = 27782;

	class PPQualityParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::PP_Quality>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::PP_Quality value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::PP_Quality, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_PPQUALITYPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
