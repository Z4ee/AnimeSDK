#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/IntParameter.h"

#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A304540)
#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A304550)
#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A304570)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClampedIntParameter_TypeDefinitionIndex = 33542;

	class ClampedIntParameter : public ::UnityEngine::Rendering::IntParameter
	{
	public:
		::System::Int32 min; // 0x20
		::System::Int32 max; // 0x24

		::System::Void _ctor(::System::Int32 value, ::System::Int32 min, ::System::Int32 max, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER__CTOR_OFFSET))(this, value, min, max, overrideState);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
