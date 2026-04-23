#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/FloatParameter.h"

#define UNITYENGINE_RENDERING_MINFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A321AE0)
#define UNITYENGINE_RENDERING_MINFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A321AF0)
#define UNITYENGINE_RENDERING_MINFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A321B00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MinFloatParameter_TypeDefinitionIndex = 33546;

	class MinFloatParameter : public ::UnityEngine::Rendering::FloatParameter
	{
	public:
		::System::Single min; // 0x20

		::System::Void _ctor(::System::Single value, ::System::Single min, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER__CTOR_OFFSET))(this, value, min, overrideState);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
