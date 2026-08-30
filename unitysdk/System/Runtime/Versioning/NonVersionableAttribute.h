#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_VERSIONING_NONVERSIONABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0105D0)

namespace System::Runtime::Versioning
{
	inline static constexpr unsigned int NonVersionableAttribute_TypeDefinitionIndex = 6575;

	class NonVersionableAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_NONVERSIONABLEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
