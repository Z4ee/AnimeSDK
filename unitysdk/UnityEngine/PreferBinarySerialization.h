#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_PREFERBINARYSERIALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED46670)

namespace UnityEngine
{
	inline static constexpr unsigned int PreferBinarySerialization_TypeDefinitionIndex = 4372;

	class PreferBinarySerialization : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PREFERBINARYSERIALIZATION__CTOR_OFFSET))(this);
		}
	};
}
