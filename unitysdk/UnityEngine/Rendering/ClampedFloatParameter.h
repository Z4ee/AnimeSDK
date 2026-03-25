#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/FloatParameter.h"

#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x188CA4B0)
#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x188CA4C0)
#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188CA4E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClampedFloatParameter_TypeDefinitionIndex = 27926;

	class ClampedFloatParameter : public ::UnityEngine::Rendering::FloatParameter
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Void _ctor(::System::Single value, ::System::Single min, ::System::Single max, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER__CTOR_OFFSET))(this, value, min, max, overrideState);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
