#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B0F4CE0)
#define UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B0F4CF0)
#define UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F4D00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpMinIntParameter_TypeDefinitionIndex = 34192;

	class NoInterpMinIntParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Int32>
	{
	public:
		::System::Int32 min; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMININTPARAMETER_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
