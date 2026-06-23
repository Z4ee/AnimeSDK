#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_DOWNSAMPLEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1793D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DownSampleParameter_TypeDefinitionIndex = 27058;

	class DownSampleParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::DownSampleLevel>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::DownSampleLevel value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DownSampleLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DOWNSAMPLEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
