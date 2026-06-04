#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Diagnostics/DebuggerBrowsableState.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGERBROWSABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18697130)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerBrowsableAttribute_TypeDefinitionIndex = 1568;

	class DebuggerBrowsableAttribute : public ::System::Attribute
	{
	public:
		::System::Diagnostics::DebuggerBrowsableState state; // 0x10

		::System::Void _ctor(::System::Diagnostics::DebuggerBrowsableState a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::DebuggerBrowsableState))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERBROWSABLEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
