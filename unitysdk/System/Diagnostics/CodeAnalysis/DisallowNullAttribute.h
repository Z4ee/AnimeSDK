#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DISALLOWNULLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x173898B0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int DisallowNullAttribute_TypeDefinitionIndex = 9574;

	class DisallowNullAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DISALLOWNULLATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
