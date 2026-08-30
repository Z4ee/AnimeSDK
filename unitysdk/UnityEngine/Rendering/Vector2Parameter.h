#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_VECTOR2PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1DE37070)
#define UNITYENGINE_RENDERING_VECTOR2PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE36F20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Vector2Parameter_TypeDefinitionIndex = 34976;

	class Vector2Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR2PARAMETER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Interp(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR2PARAMETER_INTERP_OFFSET))(this, a1, a2, a3);
		}
	};
}
