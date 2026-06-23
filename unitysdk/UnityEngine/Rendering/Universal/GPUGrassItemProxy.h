#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSITEMPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99E010)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassItemProxy_TypeDefinitionIndex = 26683;

	class GPUGrassItemProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSITEMPROXY__CTOR_OFFSET))(this);
		}
	};
}
