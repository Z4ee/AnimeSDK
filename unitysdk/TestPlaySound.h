#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TESTPLAYSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1A516070)

inline static constexpr unsigned int TestPlaySound_TypeDefinitionIndex = 62898;

class TestPlaySound : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTPLAYSOUND__CTOR_OFFSET))(this);
	}
};
