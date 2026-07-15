#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TokenType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Globalization { class CompareInfo; }
namespace System::Globalization { class DateTimeFormatInfo; }

#define SYSTEM___DTSTRING_ADVANCE_OFFSET UNITYSDK_OFFSET(0x3AF7440)
#define SYSTEM___DTSTRING_ATEND_OFFSET UNITYSDK_OFFSET(0x3AF7430)
#define SYSTEM___DTSTRING_CONSUMESUBSTRING_OFFSET UNITYSDK_OFFSET(0x3AF7A20)
#define SYSTEM___DTSTRING_GETCHAR_OFFSET UNITYSDK_OFFSET(0x3AF77D0)
#define SYSTEM___DTSTRING_GETDIGIT_OFFSET UNITYSDK_OFFSET(0x3AF7830)
#define SYSTEM___DTSTRING_GETNEXTDIGIT_OFFSET UNITYSDK_OFFSET(0x3AF7740)
#define SYSTEM___DTSTRING_GETNEXT_OFFSET UNITYSDK_OFFSET(0x3AF73C0)
#define SYSTEM___DTSTRING_GETREGULARTOKEN_OFFSET UNITYSDK_OFFSET(0x3AF74B0)
#define SYSTEM___DTSTRING_GETREPEATCOUNT_OFFSET UNITYSDK_OFFSET(0x3AF7660)
#define SYSTEM___DTSTRING_GETSEPARATORTOKEN_OFFSET UNITYSDK_OFFSET(0x3AF74C0)
#define SYSTEM___DTSTRING_GETSUBSTRING_OFFSET UNITYSDK_OFFSET(0x3AF7A00)
#define SYSTEM___DTSTRING_GET_COMPAREINFO_OFFSET UNITYSDK_OFFSET(0xA4AEC0)
#define SYSTEM___DTSTRING_MATCHLONGESTWORDS_OFFSET UNITYSDK_OFFSET(0x3AF75B0)
#define SYSTEM___DTSTRING_MATCHSPECIFIEDWORDS_OFFSET UNITYSDK_OFFSET(0x3AF7510)
#define SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_1_OFFSET UNITYSDK_OFFSET(0x3AF7500)
#define SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_OFFSET UNITYSDK_OFFSET(0x3AF74D0)
#define SYSTEM___DTSTRING_MATCH_1_OFFSET UNITYSDK_OFFSET(0x3AF7530)
#define SYSTEM___DTSTRING_MATCH_OFFSET UNITYSDK_OFFSET(0x3AF7520)
#define SYSTEM___DTSTRING_REMOVELEADINGINQUOTESPACES_OFFSET UNITYSDK_OFFSET(0x3AF79F0)
#define SYSTEM___DTSTRING_REMOVETRAILINGINQUOTESPACES_OFFSET UNITYSDK_OFFSET(0x3AF79E0)
#define SYSTEM___DTSTRING_SKIPWHITESPACECURRENT_OFFSET UNITYSDK_OFFSET(0x3AF7920)
#define SYSTEM___DTSTRING_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x3AF7890)
#define SYSTEM___DTSTRING_TRIMTAIL_OFFSET UNITYSDK_OFFSET(0x3AF79D0)
#define SYSTEM___DTSTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D206140)
#define SYSTEM___DTSTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3AF73B0)
#define SYSTEM___DTSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x3AF7390)

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
