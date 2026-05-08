#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGERSTEPTHROUGHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC45A10)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerStepThroughAttribute_TypeDefinitionIndex = 1559;

	class DebuggerStepThroughAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERSTEPTHROUGHATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
