#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TokenType.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TOKENHASHVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1C160)

namespace System::Globalization
{
	inline static constexpr unsigned int TokenHashValue_TypeDefinitionIndex = 743;

	class TokenHashValue : public ::System::Object
	{
	public:
		::System::String* tokenString; // 0x10
		::System::TokenType tokenType; // 0x18
		::System::Int32 tokenValue; // 0x1C

		::System::Void _ctor(::System::String* a1, ::System::TokenType a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::TokenType, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TOKENHASHVALUE__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
