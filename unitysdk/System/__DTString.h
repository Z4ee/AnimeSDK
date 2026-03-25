#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TokenType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Globalization { class CompareInfo; }
namespace System::Globalization { class DateTimeFormatInfo; }

#define SYSTEM___DTSTRING_ADVANCE_OFFSET UNITYSDK_OFFSET(0x20D0D40)
#define SYSTEM___DTSTRING_ATEND_OFFSET UNITYSDK_OFFSET(0x20D0D30)
#define SYSTEM___DTSTRING_CONSUMESUBSTRING_OFFSET UNITYSDK_OFFSET(0x20D13D0)
#define SYSTEM___DTSTRING_GETCHAR_OFFSET UNITYSDK_OFFSET(0x20D1180)
#define SYSTEM___DTSTRING_GETDIGIT_OFFSET UNITYSDK_OFFSET(0x20D11E0)
#define SYSTEM___DTSTRING_GETNEXTDIGIT_OFFSET UNITYSDK_OFFSET(0x20D10F0)
#define SYSTEM___DTSTRING_GETNEXT_OFFSET UNITYSDK_OFFSET(0x20D0CC0)
#define SYSTEM___DTSTRING_GETREGULARTOKEN_OFFSET UNITYSDK_OFFSET(0x20D0DB0)
#define SYSTEM___DTSTRING_GETREPEATCOUNT_OFFSET UNITYSDK_OFFSET(0x20D1010)
#define SYSTEM___DTSTRING_GETSEPARATORTOKEN_OFFSET UNITYSDK_OFFSET(0x20D0DC0)
#define SYSTEM___DTSTRING_GETSUBSTRING_OFFSET UNITYSDK_OFFSET(0x20D13B0)
#define SYSTEM___DTSTRING_GET_COMPAREINFO_OFFSET UNITYSDK_OFFSET(0x28E30)
#define SYSTEM___DTSTRING_MATCHLONGESTWORDS_OFFSET UNITYSDK_OFFSET(0x20D1000)
#define SYSTEM___DTSTRING_MATCHSPECIFIEDWORDS_OFFSET UNITYSDK_OFFSET(0x20D0ED0)
#define SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_1_OFFSET UNITYSDK_OFFSET(0x20D0E50)
#define SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_OFFSET UNITYSDK_OFFSET(0x20D0DD0)
#define SYSTEM___DTSTRING_MATCH_1_OFFSET UNITYSDK_OFFSET(0x20D0F80)
#define SYSTEM___DTSTRING_MATCH_OFFSET UNITYSDK_OFFSET(0x20D0EE0)
#define SYSTEM___DTSTRING_REMOVELEADINGINQUOTESPACES_OFFSET UNITYSDK_OFFSET(0x20D13A0)
#define SYSTEM___DTSTRING_REMOVETRAILINGINQUOTESPACES_OFFSET UNITYSDK_OFFSET(0x20D1390)
#define SYSTEM___DTSTRING_SKIPWHITESPACECURRENT_OFFSET UNITYSDK_OFFSET(0x20D12D0)
#define SYSTEM___DTSTRING_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x20D1240)
#define SYSTEM___DTSTRING_TRIMTAIL_OFFSET UNITYSDK_OFFSET(0x20D1380)
#define SYSTEM___DTSTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x16278E00)
#define SYSTEM___DTSTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20D0CB0)
#define SYSTEM___DTSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x20D0C90)

namespace System
{
	inline static constexpr unsigned int __DTString_TypeDefinitionIndex = 258;

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

		::System::Void _ctor(::System::String* str, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Boolean checkDigitToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING__CTOR_OFFSET))(this, str, dtfi, checkDigitToken);
		}

		::System::Void _ctor_1(::System::String* str, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING__CTOR_1_OFFSET))(this, str, dtfi);
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

		::System::Boolean Advance(::System::Int32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_ADVANCE_OFFSET))(this, count);
		}

		::System::Void GetRegularToken(::System::TokenType& tokenType, ::System::Int32& tokenValue, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::Void(*)(::PVOID, ::System::TokenType&, ::System::Int32&, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETREGULARTOKEN_OFFSET))(this, tokenType, tokenValue, dtfi);
		}

		::System::TokenType GetSeparatorToken(::System::Globalization::DateTimeFormatInfo* dtfi, ::System::Int32& indexBeforeSeparator, ::System::Char& charBeforeSeparator)
		{
			return ((::System::TokenType(*)(::PVOID, ::System::Globalization::DateTimeFormatInfo*, ::System::Int32&, ::System::Char&))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_GETSEPARATORTOKEN_OFFSET))(this, dtfi, indexBeforeSeparator, charBeforeSeparator);
		}

		::System::Boolean MatchSpecifiedWord(::System::String* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_OFFSET))(this, target);
		}

		::System::Boolean MatchSpecifiedWord_1(::System::String* target, ::System::Int32 endIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCHSPECIFIEDWORD_1_OFFSET))(this, target, endIndex);
		}

		::System::Boolean MatchSpecifiedWords(::System::String* target, ::System::Boolean checkWordBoundary, ::System::Int32& matchLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCHSPECIFIEDWORDS_OFFSET))(this, target, checkWordBoundary, matchLength);
		}

		::System::Boolean Match(::System::String* str)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCH_OFFSET))(this, str);
		}

		::System::Boolean Match_1(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCH_1_OFFSET))(this, ch);
		}

		::System::Int32 MatchLongestWords(::Il2CppArray<::System::String*>* words, ::System::Int32& maxMatchStrLen)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_MATCHLONGESTWORDS_OFFSET))(this, words, maxMatchStrLen);
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
		::System::Void ConsumeSubString(::System::DTSubString sub)
		{
			return ((::System::Void(*)(::PVOID, ::System::DTSubString))((::PBYTE)hIl2Cpp + SYSTEM___DTSTRING_CONSUMESUBSTRING_OFFSET))(this, sub);
		}
		*/
	};
}
