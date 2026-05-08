#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define YIXUANHULUROTATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C2323C0)
#define YIXUANHULUROTATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2329B0)

inline static constexpr unsigned int YixuanHuluRotator_TypeDefinitionIndex = 36440;

class YixuanHuluRotator : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YIXUANHULUROTATOR__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YIXUANHULUROTATOR_UPDATE_OFFSET))(this);
	}
};
