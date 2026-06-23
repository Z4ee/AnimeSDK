#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define WORLDTWISTOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3EDF0)

inline static constexpr unsigned int WorldTwistOverrideConfig_TypeDefinitionIndex = 27082;

class WorldTwistOverrideConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::Single twistIntensity; // 0x18
	::System::Single noiseWeight; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTOVERRIDECONFIG__CTOR_OFFSET))(this);
	}
};
