#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_EXCLUDEFROMCODECOVERAGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB2D70)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int ExcludeFromCodeCoverageAttribute_TypeDefinitionIndex = 2804;

	class ExcludeFromCodeCoverageAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_EXCLUDEFROMCODECOVERAGEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
