#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CD1C950)
#define UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1CD1CB00)
#define UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CD1C960)
#define UNITYENGINE_RENDERING_FLOATRANGEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1C990)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FloatRangeParameter_TypeDefinitionIndex = 34972;

	class FloatRangeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector2>
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATRANGEPARAMETER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector2 get_value()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Interp(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_INTERP_OFFSET))(this, a1, a2, a3);
		}
	};
}
