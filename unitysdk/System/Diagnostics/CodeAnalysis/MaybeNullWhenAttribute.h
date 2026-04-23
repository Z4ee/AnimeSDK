#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MAYBENULLWHENATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x173898E0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int MaybeNullWhenAttribute_TypeDefinitionIndex = 9577;

	class MaybeNullWhenAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _ReturnValue_k__BackingField; // 0x10

		::System::Void _ctor(::System::Boolean returnValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MAYBENULLWHENATTRIBUTE__CTOR_OFFSET))(this, returnValue);
		}
	};
}
