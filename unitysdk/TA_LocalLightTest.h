#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TA_LOCALLIGHTTEST_START_OFFSET UNITYSDK_OFFSET(0xD0E3FA0)
#define TA_LOCALLIGHTTEST_UPDATE_OFFSET UNITYSDK_OFFSET(0xD0E3FF0)
#define TA_LOCALLIGHTTEST__CTOR_OFFSET UNITYSDK_OFFSET(0xD0E4170)

inline static constexpr unsigned int TA_LocalLightTest_TypeDefinitionIndex = 44732;

class TA_LocalLightTest : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 Field_5_0; // 0x18
	::System::Int32 Field_5_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_LOCALLIGHTTEST__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_LOCALLIGHTTEST_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_LOCALLIGHTTEST_UPDATE_OFFSET))(this);
	}
};
