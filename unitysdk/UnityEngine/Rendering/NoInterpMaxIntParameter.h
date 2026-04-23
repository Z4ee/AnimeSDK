#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A322040)
#define UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A322050)
#define UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A322060)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpMaxIntParameter_TypeDefinitionIndex = 33541;

	class NoInterpMaxIntParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Int32>
	{
	public:
		::System::Int32 max; // 0x20

		::System::Void _ctor(::System::Int32 value, ::System::Int32 max, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER__CTOR_OFFSET))(this, value, max, overrideState);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXINTPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
