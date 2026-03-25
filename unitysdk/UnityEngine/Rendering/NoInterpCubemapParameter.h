#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace UnityEngine { class Cubemap; }

#define UNITYENGINE_RENDERING_NOINTERPCUBEMAPPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188E80D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpCubemapParameter_TypeDefinitionIndex = 27943;

	class NoInterpCubemapParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Cubemap*>
	{
	public:
		::System::Void _ctor(::UnityEngine::Cubemap* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCUBEMAPPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
