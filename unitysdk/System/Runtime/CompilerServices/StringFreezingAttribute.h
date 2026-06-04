#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_STRINGFREEZINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18770030)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int StringFreezingAttribute_TypeDefinitionIndex = 1385;

	class StringFreezingAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STRINGFREEZINGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
