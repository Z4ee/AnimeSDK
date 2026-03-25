#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_FLAGSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x162EAB80)

namespace System
{
	inline static constexpr unsigned int FlagsAttribute_TypeDefinitionIndex = 249;

	class FlagsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FLAGSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
