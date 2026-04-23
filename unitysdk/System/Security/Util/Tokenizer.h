#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Util/Tokenizer_TokenSource.h"

namespace System { class String; }
namespace System::Security::Util { class TokenizerStream; }
namespace System::Security::Util { class Tokenizer_ITokenReader; }
namespace System::Security::Util { class Tokenizer_StringMaker; }
namespace System::Text { class Encoding; }

#define SYSTEM_SECURITY_UTIL_TOKENIZER_BASICINITIALIZATION_OFFSET UNITYSDK_OFFSET(0x1781F500)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_CHANGEFORMAT_OFFSET UNITYSDK_OFFSET(0x1781E530)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_GETSTRINGTOKEN_OFFSET UNITYSDK_OFFSET(0x1781FD00)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_GETTOKENS_OFFSET UNITYSDK_OFFSET(0x1781D6C0)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1781F350)
#define SYSTEM_SECURITY_UTIL_TOKENIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1781F470)

namespace System::Security::Util
{
	inline static constexpr unsigned int Tokenizer_TypeDefinitionIndex = 969;

	class Tokenizer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _replaceStrings; // 0x10
		::Il2CppArray<::System::String*>* _searchStrings; // 0x18
		::System::String* _inNestedString; // 0x20
		::System::String* _inString; // 0x28
		::Il2CppArray<::System::Char>* _inChars; // 0x30
		::System::Security::Util::Tokenizer_StringMaker* _maker; // 0x38
		::Il2CppArray<::System::Byte>* _inBytes; // 0x40
		::System::Security::Util::Tokenizer_ITokenReader* _inTokenReader; // 0x48
		::System::Int32 _inNestedSize; // 0x50
		::System::Int32 _inNestedIndex; // 0x54
		::System::Int32 _inSavedCharacter; // 0x58
		::System::Int32 LineNo; // 0x5C
		::System::Int32 _inProcessingTag; // 0x60
		::System::Security::Util::Tokenizer_TokenSource _inTokenSource; // 0x64
		::System::Int32 _inIndex; // 0x68
		::System::Int32 _inSize; // 0x6C

		::System::Void _ctor(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER__CTOR_OFFSET))(this, input);
		}

		::System::Void BasicInitialization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_BASICINITIALIZATION_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_RECYCLE_OFFSET))(this);
		}

		::System::Void ChangeFormat(::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_CHANGEFORMAT_OFFSET))(this, encoding);
		}

		::System::Void GetTokens(::System::Security::Util::TokenizerStream* stream, ::System::Int32 maxNum, ::System::Boolean endAfterKet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Util::TokenizerStream*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_GETTOKENS_OFFSET))(this, stream, maxNum, endAfterKet);
		}

		::System::String* GetStringToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_GETSTRINGTOKEN_OFFSET))(this);
		}
	};
}
