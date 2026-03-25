#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/FloatParameter.h"

#define UNITYENGINE_RENDERING_MAXFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x188E7C70)
#define UNITYENGINE_RENDERING_MAXFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x188E7C80)
#define UNITYENGINE_RENDERING_MAXFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188E7C90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MaxFloatParameter_TypeDefinitionIndex = 27924;

	class MaxFloatParameter : public ::UnityEngine::Rendering::FloatParameter
	{
	public:
		::System::Single max; // 0x20

		::System::Void _ctor(::System::Single value, ::System::Single max, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXFLOATPARAMETER__CTOR_OFFSET))(this, value, max, overrideState);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXFLOATPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
