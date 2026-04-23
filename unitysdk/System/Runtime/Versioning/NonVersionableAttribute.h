#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_VERSIONING_NONVERSIONABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB59B0)

namespace System::Runtime::Versioning
{
	inline static constexpr unsigned int NonVersionableAttribute_TypeDefinitionIndex = 9093;

	class NonVersionableAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_NONVERSIONABLEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
