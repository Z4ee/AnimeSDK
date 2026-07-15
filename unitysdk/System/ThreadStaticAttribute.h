#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_THREADSTATICATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1997CDB0)

namespace System
{
	inline static constexpr unsigned int ThreadStaticAttribute_TypeDefinitionIndex = 334;

	class ThreadStaticAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADSTATICATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
