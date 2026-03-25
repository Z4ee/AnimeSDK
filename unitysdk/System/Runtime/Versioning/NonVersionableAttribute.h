#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_VERSIONING_NONVERSIONABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1847AA40)

namespace System::Runtime::Versioning
{
	inline static constexpr unsigned int NonVersionableAttribute_TypeDefinitionIndex = 8896;

	class NonVersionableAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_NONVERSIONABLEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
