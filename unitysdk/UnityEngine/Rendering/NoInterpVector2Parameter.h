#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_NOINTERPVECTOR2PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFE680)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpVector2Parameter_TypeDefinitionIndex = 34977;

	class NoInterpVector2Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPVECTOR2PARAMETER__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
