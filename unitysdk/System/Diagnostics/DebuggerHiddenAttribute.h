#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGERHIDDENATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19192A20)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerHiddenAttribute_TypeDefinitionIndex = 1567;

	class DebuggerHiddenAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERHIDDENATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
