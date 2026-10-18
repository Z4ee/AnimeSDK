#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace UnityEngine { class Cubemap; }

#define UNITYENGINE_RENDERING_NOINTERPCUBEMAPPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C5170)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpCubemapParameter_TypeDefinitionIndex = 35656;

	class NoInterpCubemapParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Cubemap*>
	{
	public:
		::System::Void _ctor(::UnityEngine::Cubemap* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCUBEMAPPARAMETER__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
