#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/Tonemapping_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_TONEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0B5B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Tonemapping_TypeDefinitionIndex = 27303;

	class Tonemapping : public ::UnityEngine::NAPRenderPipeline0::Tonemapping_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TONEMAPPING__CTOR_OFFSET))(this);
		}
	};
}
