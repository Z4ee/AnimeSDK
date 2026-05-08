#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MAYBENULLWHENATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2660A0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int MaybeNullWhenAttribute_TypeDefinitionIndex = 25602;

	class MaybeNullWhenAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Boolean returnValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MAYBENULLWHENATTRIBUTE__CTOR_OFFSET))(this, returnValue);
		}
	};
}
