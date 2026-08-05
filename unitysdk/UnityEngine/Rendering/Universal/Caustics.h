#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/Caustics_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_CAUSTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E245BE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Caustics_TypeDefinitionIndex = 27234;

	class Caustics : public ::UnityEngine::NAPRenderPipeline0::Caustics_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAUSTICS__CTOR_OFFSET))(this);
		}
	};
}
