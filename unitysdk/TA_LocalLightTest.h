#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TA_LOCALLIGHTTEST_START_OFFSET UNITYSDK_OFFSET(0xE9E13F0)
#define TA_LOCALLIGHTTEST_UPDATE_OFFSET UNITYSDK_OFFSET(0xE9E1440)
#define TA_LOCALLIGHTTEST__CTOR_OFFSET UNITYSDK_OFFSET(0xE9E15C0)

inline static constexpr unsigned int TA_LocalLightTest_TypeDefinitionIndex = 47438;

class TA_LocalLightTest : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 NPBFLDGDPAD; // 0x18
	::System::Int32 IFJFBBBLCIK; // 0x1C

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
