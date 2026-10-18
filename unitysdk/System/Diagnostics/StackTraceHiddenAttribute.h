#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_STACKTRACEHIDDENATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4266B0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackTraceHiddenAttribute_TypeDefinitionIndex = 35893;

	class StackTraceHiddenAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACEHIDDENATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
