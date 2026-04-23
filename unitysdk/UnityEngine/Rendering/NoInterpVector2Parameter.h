#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_NOINTERPVECTOR2PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A322210)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpVector2Parameter_TypeDefinitionIndex = 33557;

	class NoInterpVector2Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector2 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPVECTOR2PARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
