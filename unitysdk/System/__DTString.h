#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TokenType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Globalization { class CompareInfo; }
namespace System::Globalization { class DateTimeFormatInfo; }

#define SYSTEM___DTSTRING_ADVANCE_OFFSET UNITYSDK_OFFSET(0x3832800)
#define SYSTEM___DTSTRING_ATEND_OFFSET UNITYSDK_OFFSET(0x38327F0)
#define SYSTEM___DTSTRING_CONSUMESUBSTRING_OFFSET UNITYSDK_OFFSET(0x3832F30)
#define SYSTEM___DTSTRING_GETCHAR_OFFSET UNITYSDK_OFFSET(0x3832CE0)
#define SYSTEM___DTSTRING_GETDIGIT_OFFSET UNITYSDK_OFFSET(0x3832D40)
#define SYSTEM___DTSTRING_GETNEXTDIGIT_OFFSET UNITYSDK_OFFSET(0x3832C50)
#define SYSTEM___DTSTRING_GETNEXT_OFFSET UNITYSDK_OFFSET(0x3832780)
#define SYSTEM___DTSTRING_GETREGULARTOKEN_OFFSET UNITYSDK_OFFSET(0x3832870)
#define SYSTEM___DTSTRING_GETREPEATCOUNT_OFFSET UNITYSDK_OFFSET(0x3832B70)
#define SYSTEM___DTSTRING_GETSEPARATORTOKEN_OFFSET UNITYSDK_OFFSET(0x3832880)
#define SYSTEM___DTSTRING_GETSUBSTRING_OFFSET UNITYSDK_OFFSET(0x3832F10)
#define SYSTEM___DTSTRING_GET_COMPAREINFO_OFFSET UNITYSDK_OFFSET(0x2AD20)
#define SYSTEM___DTSTRING_MATCHLONGESTWORDS_OFFSET UNITYSDK_OFFSET(0x3832AC0)
#define SYSTEM___DTSTRING_MATCHSPECIFIEDWORDS_OFFSET UNITYSDK_OFFSET(0x3832990)
#define SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_1_OFFSET UNITYSDK_OFFSET(0x3832910)
#define SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_OFFSET UNITYSDK_OFFSET(0x3832890)
#define SYSTEM___DTSTRING_MATCH_1_OFFSET UNITYSDK_OFFSET(0x3832A40)
#define SYSTEM___DTSTRING_MATCH_OFFSET UNITYSDK_OFFSET(0x38329A0)
#define SYSTEM___DTSTRING_REMOVELEADINGINQUOTESPACES_OFFSET UNITYSDK_OFFSET(0x3832F00)
#define SYSTEM___DTSTRING_REMOVETRAILINGINQUOTESPACES_OFFSET UNITYSDK_OFFSET(0x3832EF0)
#define SYSTEM___DTSTRING_SKIPWHITESPACECURRENT_OFFSET UNITYSDK_OFFSET(0x3832E30)
#define SYSTEM___DTSTRING_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x3832DA0)
#define SYSTEM___DTSTRING_TRIMTAIL_OFFSET UNITYSDK_OFFSET(0x3832EE0)
#define SYSTEM___DTSTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1865F3D0)
#define SYSTEM___DTSTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3832770)
#define SYSTEM___DTSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x3832750)

namespace System
{
	inline static constexpr unsigned int __DTString_TypeDefinitionIndex = 257;

	struct alignas(8) __DTString
	{
		static ::Il2CppArray<::System::Char>** StaticGet_WhiteSpaceChecks()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(__DTString_TypeDefinitionIndex)->GetStaticField(0x50);
		}
		::System::String* Value; // 0x10
		::System::Int32 Index; // 0x18
		::System::Int32 len; // 0x1C
		::System::Char m_current; // 0x20
		::System::Globalization::CompareInfo* m_info; // 0x28
		::System::Boolean m_checkDigitToken; // 0x30

		::System::Void _ctor(::System::String* a1, ::System::Globalization::DateTimeFormatInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Globalization::DateTimeFormatInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING__CCTOR_OFFSET))();
		}

		::System::Globalization::CompareInfo* get_CompareInfo()
		{
			return ((::System::Globalization::CompareInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GET_COMPAREINFO_OFFSET))(this);
		}

		::System::Boolean GetNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETNEXT_OFFSET))(this);
		}

		::System::Boolean AtEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_ATEND_OFFSET))(this);
		}

		::System::Boolean Advance(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_ADVANCE_OFFSET))(this, a1);
		}

		::System::Void GetRegularToken(::System::TokenType& a1, ::System::Int32& a2, ::System::Globalization::DateTimeFormatInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::TokenType&, ::System::Int32&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETREGULARTOKEN_OFFSET))(this, a1, a2, a3);
		}

		::System::TokenType GetSeparatorToken(::System::Globalization::DateTimeFormatInfo* a1, ::System::Int32& a2, ::System::Char& a3)
		{
			return ((::System::TokenType(*)(::PVOID, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&, ::System::Char&))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETSEPARATORTOKEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MatchSpecifiedWord(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_OFFSET))(this, a1);
		}

		::System::Boolean MatchSpecifiedWord_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean MatchSpecifiedWords(::System::String* a1, ::System::Boolean a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCHSPECIFIEDWORDS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Match(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCH_OFFSET))(this, a1);
		}

		::System::Boolean Match_1(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCH_1_OFFSET))(this, a1);
		}

		::System::Int32 MatchLongestWords(::Il2CppArray<::System::String*>* a1, ::System::Int32& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCHLONGESTWORDS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetRepeatCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETREPEATCOUNT_OFFSET))(this);
		}

		::System::Boolean GetNextDigit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETNEXTDIGIT_OFFSET))(this);
		}

		::System::Char GetChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETCHAR_OFFSET))(this);
		}

		::System::Int32 GetDigit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETDIGIT_OFFSET))(this);
		}

		::System::Void SkipWhiteSpaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_SKIPWHITESPACES_OFFSET))(this);
		}

		::System::Boolean SkipWhiteSpaceCurrent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_SKIPWHITESPACECURRENT_OFFSET))(this);
		}

		::System::Void TrimTail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_TRIMTAIL_OFFSET))(this);
		}

		::System::Void RemoveTrailingInQuoteSpaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_REMOVETRAILINGINQUOTESPACES_OFFSET))(this);
		}

		::System::Void RemoveLeadingInQuoteSpaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_REMOVELEADINGINQUOTESPACES_OFFSET))(this);
		}

		/*
		::System::DTSubString GetSubString()
		{
			return ((::System::DTSubString(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETSUBSTRING_OFFSET))(this);
		}
		*/

		/*
		::System::Void ConsumeSubString(::System::DTSubString a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DTSubString))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_CONSUMESUBSTRING_OFFSET))(this, a1);
		}
		*/
	};
}
