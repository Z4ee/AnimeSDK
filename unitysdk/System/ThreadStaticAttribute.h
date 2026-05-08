#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_THREADSTATICATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B99C0)

namespace System
{
	inline static constexpr unsigned int ThreadStaticAttribute_TypeDefinitionIndex = 325;

	class ThreadStaticAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADSTATICATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
