#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace UnityEngine { class Cubemap; }

#define UNITYENGINE_RENDERING_CUBEMAPPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188D9E80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CubemapParameter_TypeDefinitionIndex = 27942;

	class CubemapParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Cubemap*>
	{
	public:
		::System::Void _ctor(::UnityEngine::Cubemap* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CUBEMAPPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
