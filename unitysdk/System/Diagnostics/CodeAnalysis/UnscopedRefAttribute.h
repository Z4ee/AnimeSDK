#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_UNSCOPEDREFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52BEC0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int UnscopedRefAttribute_TypeDefinitionIndex = 6320;

	class UnscopedRefAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_UNSCOPEDREFATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
