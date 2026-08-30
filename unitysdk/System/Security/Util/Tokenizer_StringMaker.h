#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_COMPARESTRINGANDCHARS_OFFSET UNITYSDK_OFFSET(0x1BBECA50)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_HASHCHARARRAY_OFFSET UNITYSDK_OFFSET(0x1BBEC930)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_HASHSTRING_OFFSET UNITYSDK_OFFSET(0x1BBEC880)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_MAKESTRING_OFFSET UNITYSDK_OFFSET(0x1BBE37B0)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBECA00)

namespace System::Security::Util
{
	inline static constexpr unsigned int Tokenizer_StringMaker_TypeDefinitionIndex = 977;

	class Tokenizer_StringMaker : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* _outChars; // 0x10
		::Il2CppArray<::System::String*>* aStrings; // 0x18
		::System::Text::StringBuilder* _outStringBuilder; // 0x20
		::System::UInt32 cStringsUsed; // 0x28
		::System::Int32 _outIndex; // 0x2C
		::System::UInt32 cStringsMax; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 HashString(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_HASHSTRING_OFFSET))(a1);
		}

		static ::System::UInt32 HashCharArray(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_HASHCHARARRAY_OFFSET))(a1, a2);
		}

		::System::Boolean CompareStringAndChars(::System::String* a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_COMPARESTRINGANDCHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::String* MakeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_MAKESTRING_OFFSET))(this);
		}
	};
}
