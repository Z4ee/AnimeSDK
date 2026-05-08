#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define WOBBLEPATH_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BED4360)
#define WOBBLEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BED45A0)

inline static constexpr unsigned int WobblePath_TypeDefinitionIndex = 31364;

class WobblePath : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single speed; // 0x18
	::System::Single amplitude; // 0x1C
	::UnityEngine::Vector3 offset; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WOBBLEPATH__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WOBBLEPATH_UPDATE_OFFSET))(this);
	}
};
