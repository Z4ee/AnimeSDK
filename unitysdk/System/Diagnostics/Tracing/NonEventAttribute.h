#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_TRACING_NONEVENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB7E5C0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int NonEventAttribute_TypeDefinitionIndex = 1694;

	class NonEventAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NONEVENTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
