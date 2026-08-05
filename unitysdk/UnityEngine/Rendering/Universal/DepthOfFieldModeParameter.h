#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELDMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF18C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DepthOfFieldModeParameter_TypeDefinitionIndex = 27741;

	class DepthOfFieldModeParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::DepthOfFieldMode>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::DepthOfFieldMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfFieldMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELDMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
