#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/IntParameter.h"

#define UNITYENGINE_RENDERING_MAXINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x188E7CE0)
#define UNITYENGINE_RENDERING_MAXINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x188E7CF0)
#define UNITYENGINE_RENDERING_MAXINTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188E7D00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MaxIntParameter_TypeDefinitionIndex = 27916;

	class MaxIntParameter : public ::UnityEngine::Rendering::IntParameter
	{
	public:
		::System::Int32 max; // 0x20

		::System::Void _ctor(::System::Int32 value, ::System::Int32 max, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXINTPARAMETER__CTOR_OFFSET))(this, value, max, overrideState);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXINTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXINTPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
