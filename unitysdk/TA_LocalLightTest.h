#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TA_LOCALLIGHTTEST_START_OFFSET UNITYSDK_OFFSET(0xE98B930)
#define TA_LOCALLIGHTTEST_UPDATE_OFFSET UNITYSDK_OFFSET(0xE98B980)
#define TA_LOCALLIGHTTEST__CTOR_OFFSET UNITYSDK_OFFSET(0xE98BB00)

inline static constexpr unsigned int TA_LocalLightTest_TypeDefinitionIndex = 47898;

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
