#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_DEBUGGERDISPLAYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x191929F0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerDisplayAttribute_TypeDefinitionIndex = 1574;

	class DebuggerDisplayAttribute : public ::System::Attribute
	{
	public:
		::System::String* value; // 0x10
		::System::String* type; // 0x18
		::System::String* name; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERDISPLAYATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
