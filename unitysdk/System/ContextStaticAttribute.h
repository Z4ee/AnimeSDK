#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_CONTEXTSTATICATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A51DE20)

namespace System
{
	inline static constexpr unsigned int ContextStaticAttribute_TypeDefinitionIndex = 220;

	class ContextStaticAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONTEXTSTATICATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
