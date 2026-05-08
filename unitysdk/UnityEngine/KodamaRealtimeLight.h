#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_KODAMAREALTIMELIGHT_GET_INTENSITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B4D28C0)
#define UNITYENGINE_KODAMAREALTIMELIGHT_SET_INTENSITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B4D28D0)
#define UNITYENGINE_KODAMAREALTIMELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D28E0)

namespace UnityEngine
{
	inline static constexpr unsigned int KodamaRealtimeLight_TypeDefinitionIndex = 5169;

	class KodamaRealtimeLight : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KODAMAREALTIMELIGHT__CTOR_OFFSET))(this);
		}

		::System::Single get_intensityMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KODAMAREALTIMELIGHT_GET_INTENSITYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_intensityMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_KODAMAREALTIMELIGHT_SET_INTENSITYMULTIPLIER_OFFSET))(this, value);
		}
	};
}
