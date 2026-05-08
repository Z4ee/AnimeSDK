#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SIMULATINGPLATFORMPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD1B250)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SimulatingPlatformParameter_TypeDefinitionIndex = 30135;

	class SimulatingPlatformParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::SimulatingPlatform>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::SimulatingPlatform value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SimulatingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SIMULATINGPLATFORMPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
