#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x188E8150)
#define UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x188E8160)
#define UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188E8190)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpFloatRangeParameter_TypeDefinitionIndex = 27929;

	class NoInterpFloatRangeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector2>
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Void _ctor(::UnityEngine::Vector2 value, ::System::Single min, ::System::Single max, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER__CTOR_OFFSET))(this, value, min, max, overrideState);
		}

		::UnityEngine::Vector2 get_value()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
