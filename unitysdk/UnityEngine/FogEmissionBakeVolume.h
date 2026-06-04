#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_FOGEMISSIONBAKEVOLUME_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1B294D50)
#define UNITYENGINE_FOGEMISSIONBAKEVOLUME_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1B294D60)

namespace UnityEngine
{
	inline static constexpr unsigned int FogEmissionBakeVolume_TypeDefinitionIndex = 4254;

	class FogEmissionBakeVolume : public ::UnityEngine::Behaviour
	{
	public:
		::System::Single get_intensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FOGEMISSIONBAKEVOLUME_GET_INTENSITY_OFFSET))(this);
		}

		::System::Void set_intensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FOGEMISSIONBAKEVOLUME_SET_INTENSITY_OFFSET))(this, a1);
		}
	};
}
