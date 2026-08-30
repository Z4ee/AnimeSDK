#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGERNONUSERCODEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC5F00)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerNonUserCodeAttribute_TypeDefinitionIndex = 1575;

	class DebuggerNonUserCodeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERNONUSERCODEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
