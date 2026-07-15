#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLERLINENUMBERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A823EF0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallerLineNumberAttribute_TypeDefinitionIndex = 1353;

	class CallerLineNumberAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLERLINENUMBERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
