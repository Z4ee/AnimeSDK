#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/FormatProvider_Number_NumberBuffer.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FINDSECTION_OFFSET UNITYSDK_OFFSET(0x1E3732D0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATCURRENCY_OFFSET UNITYSDK_OFFSET(0x1E371090)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATEXPONENT_OFFSET UNITYSDK_OFFSET(0x1E372EE0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATFIXED_OFFSET UNITYSDK_OFFSET(0x1E371480)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATGENERAL_OFFSET UNITYSDK_OFFSET(0x1E372450)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATNUMBER_OFFSET UNITYSDK_OFFSET(0x1E371C50)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATPERCENT_OFFSET UNITYSDK_OFFSET(0x1E372AC0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATSCIENTIFIC_OFFSET UNITYSDK_OFFSET(0x1E372120)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_INT32TODECCHARS_OFFSET UNITYSDK_OFFSET(0x1E370F40)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_ISWHITE_OFFSET UNITYSDK_OFFSET(0x1E36FAB0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_MATCHCHARS_1_OFFSET UNITYSDK_OFFSET(0x1E36FB80)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_MATCHCHARS_OFFSET UNITYSDK_OFFSET(0x1E36FAD0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERTOSTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1E36E020)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERTOSTRING_OFFSET UNITYSDK_OFFSET(0x1E36D490)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_PARSEFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x1E36D3D0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1E36FBD0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_ROUNDNUMBER_OFFSET UNITYSDK_OFFSET(0x1E370FA0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_TRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x1E370E70)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_TRYSTRINGTONUMBER_OFFSET UNITYSDK_OFFSET(0x1E36F930)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_WCSLEN_OFFSET UNITYSDK_OFFSET(0x1E372EB0)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E373390)

namespace System::Globalization
{
	inline static constexpr unsigned int FormatProvider_Number_TypeDefinitionIndex = 3845;

	class FormatProvider_Number : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_s_posNumberFormat()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0x80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_posCurrencyFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0x88);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_posPercentFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0x90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_negNumberFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0x98);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_negCurrencyFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0xA0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_negPercentFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FormatProvider_Number_TypeDefinitionIndex)->GetStaticField(0xA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsWhite(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_ISWHITE_OFFSET))(a1);
		}

		static ::System::Char* MatchChars(::System::Char* a1, ::System::String* a2)
		{
			return ((::System::Char*(*)(::System::Char*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_MATCHCHARS_OFFSET))(a1, a2);
		}

		static ::System::Char* MatchChars_1(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Char*(*)(::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_MATCHCHARS_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean ParseNumber(::System::Char*& a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::FormatProvider_Number_NumberBuffer& a3, ::System::Text::StringBuilder* a4, ::System::Globalization::NumberFormatInfo* a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::System::Char*&, ::System::Globalization::NumberStyles, ::System::Globalization::FormatProvider_Number_NumberBuffer&, ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_PARSENUMBER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean TrailingZeros(::System::ReadOnlySpan_1<::System::Char> a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_TRAILINGZEROS_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryStringToNumber(::System::ReadOnlySpan_1<::System::Char> a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::FormatProvider_Number_NumberBuffer& a3, ::System::Text::StringBuilder* a4, ::System::Globalization::NumberFormatInfo* a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Globalization::NumberStyles, ::System::Globalization::FormatProvider_Number_NumberBuffer&, ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_TRYSTRINGTONUMBER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Int32ToDecChars(::System::Char* a1, ::System::Int32& a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Char*, ::System::Int32&, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_INT32TODECCHARS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Char ParseFormatSpecifier(::System::String* a1, ::System::Int32& a2)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_PARSEFORMATSPECIFIER_OFFSET))(a1, a2);
		}

		static ::System::String* NumberToString(::System::Globalization::FormatProvider_Number_NumberBuffer a1, ::System::Char a2, ::System::Int32 a3, ::System::Globalization::NumberFormatInfo* a4, ::System::Boolean a5)
		{
			return ((::System::String*(*)(::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Char, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERTOSTRING_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void FormatCurrency(::System::Text::StringBuilder* a1, ::System::Globalization::FormatProvider_Number_NumberBuffer a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::NumberFormatInfo* a5)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATCURRENCY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 wcslen(::System::Char* a1)
		{
			return ((::System::Int32(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_WCSLEN_OFFSET))(a1);
		}

		static ::System::Void FormatFixed(::System::Text::StringBuilder* a1, ::System::Globalization::FormatProvider_Number_NumberBuffer a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::NumberFormatInfo* a5, ::Il2CppArray<::System::Int32>* a6, ::System::String* a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::Il2CppArray<::System::Int32>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATFIXED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void FormatNumber(::System::Text::StringBuilder* a1, ::System::Globalization::FormatProvider_Number_NumberBuffer a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::NumberFormatInfo* a5)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATNUMBER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void FormatScientific(::System::Text::StringBuilder* a1, ::System::Globalization::FormatProvider_Number_NumberBuffer a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::NumberFormatInfo* a5, ::System::Char a6)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATSCIENTIFIC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void FormatExponent(::System::Text::StringBuilder* a1, ::System::Globalization::NumberFormatInfo* a2, ::System::Int32 a3, ::System::Char a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Int32, ::System::Char, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATEXPONENT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void FormatGeneral(::System::Text::StringBuilder* a1, ::System::Globalization::FormatProvider_Number_NumberBuffer a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::NumberFormatInfo* a5, ::System::Char a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATGENERAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void FormatPercent(::System::Text::StringBuilder* a1, ::System::Globalization::FormatProvider_Number_NumberBuffer a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::NumberFormatInfo* a5)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::Int32, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FORMATPERCENT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void RoundNumber(::System::Globalization::FormatProvider_Number_NumberBuffer& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Globalization::FormatProvider_Number_NumberBuffer&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_ROUNDNUMBER_OFFSET))(a1, a2);
		}

		static ::System::Int32 FindSection(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_FINDSECTION_OFFSET))(a1, a2);
		}

		static ::System::String* NumberToStringFormat(::System::Globalization::FormatProvider_Number_NumberBuffer a1, ::System::String* a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::Globalization::FormatProvider_Number_NumberBuffer, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERTOSTRINGFORMAT_OFFSET))(a1, a2, a3);
		}
	};
}
