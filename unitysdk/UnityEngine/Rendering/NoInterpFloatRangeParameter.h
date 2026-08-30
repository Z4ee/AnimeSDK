#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EBFDB00)
#define UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EBFDB10)
#define UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFDB40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpFloatRangeParameter_TypeDefinitionIndex = 34973;

	class NoInterpFloatRangeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector2>
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector2 get_value()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
