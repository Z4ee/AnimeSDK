#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_COMPARESTRINGANDCHARS_OFFSET UNITYSDK_OFFSET(0x161F36F0)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_HASHCHARARRAY_OFFSET UNITYSDK_OFFSET(0x161F35E0)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_HASHSTRING_OFFSET UNITYSDK_OFFSET(0x161F3530)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_MAKESTRING_OFFSET UNITYSDK_OFFSET(0x161EBC50)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x161F36B0)

namespace System::Security::Util
{
	inline static constexpr unsigned int Tokenizer_StringMaker_TypeDefinitionIndex = 969;

	class Tokenizer_StringMaker : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* aStrings; // 0x10
		::System::Text::StringBuilder* _outStringBuilder; // 0x18
		::Il2CppArray<::System::Char>* _outChars; // 0x20
		::System::UInt32 cStringsMax; // 0x28
		::System::UInt32 cStringsUsed; // 0x2C
		::System::Int32 _outIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 HashString(::System::String* str)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_HASHSTRING_OFFSET))(str);
		}

		static ::System::UInt32 HashCharArray(::Il2CppArray<::System::Char>* a, ::System::Int32 l)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_HASHCHARARRAY_OFFSET))(a, l);
		}

		::System::Boolean CompareStringAndChars(::System::String* str, ::Il2CppArray<::System::Char>* a, ::System::Int32 l)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_COMPARESTRINGANDCHARS_OFFSET))(this, str, a, l);
		}

		::System::String* MakeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STRINGMAKER_MAKESTRING_OFFSET))(this);
		}
	};
}
