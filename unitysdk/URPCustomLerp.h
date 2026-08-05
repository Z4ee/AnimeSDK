#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define URPCUSTOMLERP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EE070)

inline static constexpr unsigned int URPCustomLerp_TypeDefinitionIndex = 27271;

class URPCustomLerp : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + URPCUSTOMLERP__CTOR_OFFSET))(this);
	}
};
