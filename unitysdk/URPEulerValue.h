#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define URPEULERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9E9E0)

inline static constexpr unsigned int URPEulerValue_TypeDefinitionIndex = 29520;

class URPEulerValue : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + URPEULERVALUE__CTOR_OFFSET))(this);
	}
};
