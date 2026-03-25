#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x188E8240)
#define UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x188E8250)
#define UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188E8260)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpMaxFloatParameter_TypeDefinitionIndex = 27925;

	class NoInterpMaxFloatParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Single>
	{
	public:
		::System::Single max; // 0x20

		::System::Void _ctor(::System::Single value, ::System::Single max, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER__CTOR_OFFSET))(this, value, max, overrideState);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
