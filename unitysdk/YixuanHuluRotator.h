#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define YIXUANHULUROTATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F96F760)
#define YIXUANHULUROTATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F96FD70)

inline static constexpr unsigned int YixuanHuluRotator_TypeDefinitionIndex = 38709;

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
