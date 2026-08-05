#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_LOWERCASEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x9B0D30)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCharClass_LowerCaseMapping_TypeDefinitionIndex = 2727;

	struct alignas(4) RegexCharClass_LowerCaseMapping
	{
		::System::Char _chMin; // 0x10
		::System::Char _chMax; // 0x12
		::System::Int32 _lcOp; // 0x14
		::System::Int32 _data; // 0x18

		::System::Void _ctor(::System::Char chMin, ::System::Char chMax, ::System::Int32 lcOp, ::System::Int32 data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_LOWERCASEMAPPING__CTOR_OFFSET))(this, chMin, chMax, lcOp, data);
		}
	};
}
