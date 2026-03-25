#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_VECTOR2PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x188FBE90)
#define UNITYENGINE_RENDERING_VECTOR2PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188FBE50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Vector2Parameter_TypeDefinitionIndex = 27932;

	class Vector2Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector2 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR2PARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void Interp(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR2PARAMETER_INTERP_OFFSET))(this, from, to, t);
		}
	};
}
