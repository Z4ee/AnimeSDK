#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/Tokens.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_DATA_EXPRESSIONPARSER_RESERVEDWORDS__CTOR_OFFSET UNITYSDK_OFFSET(0x32DA80)

namespace System::Data
{
	inline static constexpr unsigned int ExpressionParser_ReservedWords_TypeDefinitionIndex = 38637;

	struct alignas(8) ExpressionParser_ReservedWords
	{
		::System::String* _word; // 0x10
		::System::Data::Tokens _token; // 0x18
		::System::Int32 _op; // 0x1C

		::System::Void _ctor(::System::String* word, ::System::Data::Tokens token, ::System::Int32 op)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Data::Tokens, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_RESERVEDWORDS__CTOR_OFFSET))(this, word, token, op);
		}
	};
}
