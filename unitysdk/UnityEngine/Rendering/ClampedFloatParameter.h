#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/FloatParameter.h"

#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B0D9650)
#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B0D9660)
#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0D9680)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClampedFloatParameter_TypeDefinitionIndex = 34203;

	class ClampedFloatParameter : public ::UnityEngine::Rendering::FloatParameter
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
