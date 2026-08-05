#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UIFILLANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1878FBE0)

inline static constexpr unsigned int UIFillAnimConfig_TypeDefinitionIndex = 70315;

class UIFillAnimConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single ratio; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILLANIMCONFIG__CTOR_OFFSET))(this);
	}
};
