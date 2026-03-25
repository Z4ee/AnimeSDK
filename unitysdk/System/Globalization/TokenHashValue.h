#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TokenType.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TOKENHASHVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x163015E0)

namespace System::Globalization
{
	inline static constexpr unsigned int TokenHashValue_TypeDefinitionIndex = 741;

	class TokenHashValue : public ::System::Object
	{
	public:
		::System::String* tokenString; // 0x10
		::System::Int32 tokenValue; // 0x18
		::System::TokenType tokenType; // 0x1C

		::System::Void _ctor(::System::String* tokenString, ::System::TokenType tokenType, ::System::Int32 tokenValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::TokenType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TOKENHASHVALUE__CTOR_OFFSET))(this, tokenString, tokenType, tokenValue);
		}
	};
}
