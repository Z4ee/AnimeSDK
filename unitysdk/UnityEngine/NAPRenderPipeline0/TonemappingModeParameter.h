#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPINGMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F34AC90)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TonemappingModeParameter_TypeDefinitionIndex = 6067;

	class TonemappingModeParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::NAPRenderPipeline0::TonemappingMode>
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::TonemappingMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::TonemappingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TONEMAPPINGMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
