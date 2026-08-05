#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SsrQuality.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SSRQUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC73800)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SsrQualityParameter_TypeDefinitionIndex = 27651;

	class SsrQualityParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::SsrQuality>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::SsrQuality value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SsrQuality, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SSRQUALITYPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
