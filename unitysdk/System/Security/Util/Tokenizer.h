#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Util/Tokenizer_TokenSource.h"

namespace System { class String; }
namespace System::Security::Util { class TokenizerStream; }
namespace System::Security::Util { class Tokenizer_ITokenReader; }
namespace System::Security::Util { class Tokenizer_StringMaker; }
namespace System::Text { class Encoding; }

#define SYSTEM_SECURITY_UTIL_TOKENIZER_BASICINITIALIZATION_OFFSET UNITYSDK_OFFSET(0x185D8E30)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_CHANGEFORMAT_OFFSET UNITYSDK_OFFSET(0x185D7A50)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_GETSTRINGTOKEN_OFFSET UNITYSDK_OFFSET(0x185D9630)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_GETTOKENS_OFFSET UNITYSDK_OFFSET(0x185D6C30)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_RECYCLE_OFFSET UNITYSDK_OFFSET(0x185D8C80)
#define SYSTEM_SECURITY_UTIL_TOKENIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x185D8DA0)

namespace System::Security::Util
{
	inline static constexpr unsigned int Tokenizer_TypeDefinitionIndex = 968;

	class Tokenizer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* _inChars; // 0x10
		::System::Security::Util::Tokenizer_StringMaker* _maker; // 0x18
		::Il2CppArray<::System::String*>* _searchStrings; // 0x20
		::Il2CppArray<::System::Byte>* _inBytes; // 0x28
		::System::String* _inNestedString; // 0x30
		::System::String* _inString; // 0x38
		::System::Security::Util::Tokenizer_ITokenReader* _inTokenReader; // 0x40
		::Il2CppArray<::System::String*>* _replaceStrings; // 0x48
		::System::Int32 _inNestedSize; // 0x50
		::System::Int32 _inIndex; // 0x54
		::System::Int32 _inSize; // 0x58
		::System::Security::Util::Tokenizer_TokenSource _inTokenSource; // 0x5C
		::System::Int32 LineNo; // 0x60
		::System::Int32 _inNestedIndex; // 0x64
		::System::Int32 _inSavedCharacter; // 0x68
		::System::Int32 _inProcessingTag; // 0x6C

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER__CTOR_OFFSET))(this, a1);
		}

		::System::Void BasicInitialization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_BASICINITIALIZATION_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_RECYCLE_OFFSET))(this);
		}

		::System::Void ChangeFormat(::System::Text::Encoding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_CHANGEFORMAT_OFFSET))(this, a1);
		}

		::System::Void GetTokens(::System::Security::Util::TokenizerStream* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Util::TokenizerStream*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_GETTOKENS_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetStringToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_GETSTRINGTOKEN_OFFSET))(this);
		}
	};
}
