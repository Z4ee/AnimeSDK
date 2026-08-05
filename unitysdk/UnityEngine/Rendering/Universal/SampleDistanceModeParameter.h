#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SAMPLEDISTANCEMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFF380)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SampleDistanceModeParameter_TypeDefinitionIndex = 27235;

	class SampleDistanceModeParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::SampleDistanceMode>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::SampleDistanceMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SampleDistanceMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SAMPLEDISTANCEMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
