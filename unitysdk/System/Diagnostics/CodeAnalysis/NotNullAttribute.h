#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D8C1D0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int NotNullAttribute_TypeDefinitionIndex = 9381;

	class NotNullAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
