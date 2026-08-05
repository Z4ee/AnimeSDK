#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MONOPARTICLELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9AE8A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoParticleLight_TypeDefinitionIndex = 27410;

	class MonoParticleLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOPARTICLELIGHT__CTOR_OFFSET))(this);
		}
	};
}
