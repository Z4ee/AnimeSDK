#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EnumVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_HQBLOOMMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4318E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int HQBloomModeParameter_TypeDefinitionIndex = 27954;

	class HQBloomModeParameter : public ::UnityEngine::NAPRenderPipeline0::EnumVolumeParameter_1<::UnityEngine::Rendering::Universal::HQBloomMode>
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::HQBloomMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::HQBloomMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_HQBLOOMMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
