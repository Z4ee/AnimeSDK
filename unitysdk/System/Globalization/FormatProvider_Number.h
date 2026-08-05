#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/FormatProvider_Number_NumberBuffer.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FINDSECTION_OFFSET UNITYSDK_OFFSET(0x1E989710)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATCURRENCY_OFFSET UNITYSDK_OFFSET(0x1E987C10)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATEXPONENT_OFFSET UNITYSDK_OFFSET(0x1E989420)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATFIXED_OFFSET UNITYSDK_OFFSET(0x1E987FA0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATGENERAL_OFFSET UNITYSDK_OFFSET(0x1E988D40)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATNUMBER_OFFSET UNITYSDK_OFFSET(0x1E9886D0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATPERCENT_OFFSET UNITYSDK_OFFSET(0x1E989060)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATSCIENTIFIC_OFFSET UNITYSDK_OFFSET(0x1E988B50)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_INT32TODECCHARS_OFFSET UNITYSDK_OFFSET(0x1E987AB0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_ISWHITE_OFFSET UNITYSDK_OFFSET(0x1E9864F0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_MATCHCHARS_1_OFFSET UNITYSDK_OFFSET(0x1E9865B0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_MATCHCHARS_OFFSET UNITYSDK_OFFSET(0x1E986510)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERTOSTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1E984E80)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERTOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9842D0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_PARSEFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x1E984210)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1E986600)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_ROUNDNUMBER_OFFSET UNITYSDK_OFFSET(0x1E987B10)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_TRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x1E9879E0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_TRYSTRINGTONUMBER_OFFSET UNITYSDK_OFFSET(0x1E986340)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_WCSLEN_OFFSET UNITYSDK_OFFSET(0x1E989400)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9897D0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9864E0)

namespace System::Globalization
{
	inline static constexpr unsigned int FormatProvider_Number_TypeDefinitionIndex = 6395;

	class FormatProvider_Number : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_negCurrencyFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0x5880);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_negNumberFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0x5888);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_posPercentFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0x5890);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_negPercentFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0x5898);
		}
		static ::System::String** StaticGet_s_posNumberFormat()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0x58A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_posCurrencyFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0x58A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsWhite(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_ISWHITE_OFFSET))(ch);
		}

		static ::System::Char* MatchChars(::System::Char* p, ::System::String* str)
		{
			return ((::System::Char*(*)(::System::Char*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_MATCHCHARS_OFFSET))(p, str);
		}

		static ::System::Char* MatchChars_1(::System::Char* p, ::System::Char* str)
		{
			return ((::System::Char*(*)(::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_MATCHCHARS_1_OFFSET))(p, str);
		}

		static ::System::Boolean ParseNumber(::System::Char*& str, ::System::Globalization::NumberStyles options, ::System::Globalization::FormatProvider_Number_NumberBuffer& number, ::System::Text::StringBuilder* sb, ::System::Globalization::NumberFormatInfo* numfmt, ::System::Boolean parseDecimal)
		{
			return ((::System::Boolean(*)(::System::Char*&, ::System::Globalization::NumberStyles, ::System::Globalization::FormatProvider_Number_NumberBuffer&, ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_PARSENUMBER_OFFSET))(str, options, number, sb, numfmt, parseDecimal);
		}

		static ::System::Boolean TrailingZeros(::System::ReadOnlySpan_1<::System::Char> s, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_TRAILINGZEROS_OFFSET))(s, index);
		}

		static ::System::Boolean TryStringToNumber(::System::ReadOnlySpan_1<::System::Char> str, ::System::Globalization::NumberStyles options, ::System::Globalization::FormatProvider_Number_NumberBuffer& number, ::System::Text::StringBuilder* sb, ::System::Globalization::NumberFormatInfo* numfmt, ::System::Boolean parseDecimal)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Globalization::NumberStyles, ::System::Globalization::FormatProvider_Number_NumberBuffer&, ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_TRYSTRINGTONUMBER_OFFSET))(str, options, number, sb, numfmt, parseDecimal);
		}

		static ::System::Void Int32ToDecChars(::System::Char* buffer, ::System::Int32& index, ::System::UInt32 value, ::System::Int32 digits)
		{
			return ((::System::Void(*)(::System::Char*, ::System::Int32&, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_INT32TODECCHARS_OFFSET))(buffer, index, value, digits);
		}

		static ::System::Char ParseFormatSpecifier(::System::String* format, ::System::Int32& digits)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_PARSEFORMATSPECIFIER_OFFSET))(format, digits);
		}

		static ::System::String* NumberToString(::System::Globalization::FormatProvider_Number_NumberBuffer number, ::System::Char format, ::System::Int32 nMaxDigits, ::System::Globalization::NumberFormatInfo* info, ::System::Boolean isDecimal)
		{
			return ((::System::String*(*)(::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Char, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERTOSTRING_OFFSET))(number, format, nMaxDigits, info, isDecimal);
		}

		static ::System::Void FormatCurrency(::System::Text::StringBuilder* sb, ::System::Globalization::FormatProvider_Number_NumberBuffer number, ::System::Int32 nMinDigits, ::System::Int32 nMaxDigits, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATCURRENCY_OFFSET))(sb, number, nMinDigits, nMaxDigits, info);
		}

		static ::System::Int32 wcslen(::System::Char* s)
		{
			return ((::System::Int32(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_WCSLEN_OFFSET))(s);
		}

		static ::System::Void FormatFixed(::System::Text::StringBuilder* sb, ::System::Globalization::FormatProvider_Number_NumberBuffer number, ::System::Int32 nMinDigits, ::System::Int32 nMaxDigits, ::System::Globalization::NumberFormatInfo* info, ::Il2CppArray<::System::Int32>* groupDigits, ::System::String* sDecimal, ::System::String* sGroup)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::Il2CppArray<::System::Int32>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATFIXED_OFFSET))(sb, number, nMinDigits, nMaxDigits, info, groupDigits, sDecimal, sGroup);
		}

		static ::System::Void FormatNumber(::System::Text::StringBuilder* sb, ::System::Globalization::FormatProvider_Number_NumberBuffer number, ::System::Int32 nMinDigits, ::System::Int32 nMaxDigits, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATNUMBER_OFFSET))(sb, number, nMinDigits, nMaxDigits, info);
		}

		static ::System::Void FormatScientific(::System::Text::StringBuilder* sb, ::System::Globalization::FormatProvider_Number_NumberBuffer number, ::System::Int32 nMinDigits, ::System::Int32 nMaxDigits, ::System::Globalization::NumberFormatInfo* info, ::System::Char expChar)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATSCIENTIFIC_OFFSET))(sb, number, nMinDigits, nMaxDigits, info, expChar);
		}

		static ::System::Void FormatExponent(::System::Text::StringBuilder* sb, ::System::Globalization::NumberFormatInfo* info, ::System::Int32 value, ::System::Char expChar, ::System::Int32 minDigits, ::System::Boolean positiveSign)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Int32, ::System::Char, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATEXPONENT_OFFSET))(sb, info, value, expChar, minDigits, positiveSign);
		}

		static ::System::Void FormatGeneral(::System::Text::StringBuilder* sb, ::System::Globalization::FormatProvider_Number_NumberBuffer number, ::System::Int32 nMinDigits, ::System::Int32 nMaxDigits, ::System::Globalization::NumberFormatInfo* info, ::System::Char expChar, ::System::Boolean bSuppressScientific)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATGENERAL_OFFSET))(sb, number, nMinDigits, nMaxDigits, info, expChar, bSuppressScientific);
		}

		static ::System::Void FormatPercent(::System::Text::StringBuilder* sb, ::System::Globalization::FormatProvider_Number_NumberBuffer number, ::System::Int32 nMinDigits, ::System::Int32 nMaxDigits, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATPERCENT_OFFSET))(sb, number, nMinDigits, nMaxDigits, info);
		}

		static ::System::Void RoundNumber(::System::Globalization::FormatProvider_Number_NumberBuffer& number, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::System::Globalization::FormatProvider_Number_NumberBuffer&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_ROUNDNUMBER_OFFSET))(number, pos);
		}

		static ::System::Int32 FindSection(::System::String* format, ::System::Int32 section)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FINDSECTION_OFFSET))(format, section);
		}

		static ::System::String* NumberToStringFormat(::System::Globalization::FormatProvider_Number_NumberBuffer number, ::System::String* format, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::String*(*)(::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERTOSTRINGFORMAT_OFFSET))(number, format, info);
		}
	};
}
