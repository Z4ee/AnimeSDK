#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/UnicodeCategory.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETDECIMALDIGITVALUE_1_OFFSET UNITYSDK_OFFSET(0x1DF313B0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETDECIMALDIGITVALUE_OFFSET UNITYSDK_OFFSET(0x1DF31350)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETDIGITVALUE_1_OFFSET UNITYSDK_OFFSET(0x1DF314E0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETDIGITVALUE_OFFSET UNITYSDK_OFFSET(0x1DF31480)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_1_OFFSET UNITYSDK_OFFSET(0x1DF31280)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x1DF31220)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_1_OFFSET UNITYSDK_OFFSET(0x1DF30D10)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET UNITYSDK_OFFSET(0x1DF30EF0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_1_OFFSET UNITYSDK_OFFSET(0x1DF30B20)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_OFFSET UNITYSDK_OFFSET(0x1DF309A0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETCATEGORYVALUE_OFFSET UNITYSDK_OFFSET(0x1DF316C0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETDIGITVALUES_OFFSET UNITYSDK_OFFSET(0x1DF310E0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x1DF30FA0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_1_OFFSET UNITYSDK_OFFSET(0x1DF31610)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_2_OFFSET UNITYSDK_OFFSET(0x1DF31810)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_OFFSET UNITYSDK_OFFSET(0x1DF315B0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISCOMBININGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1DF318D0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_1_OFFSET UNITYSDK_OFFSET(0x1DF30DD0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1DF30CA0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF31910)

namespace System::Globalization
{
	inline static constexpr unsigned int CharUnicodeInfo_TypeDefinitionIndex = 695;

	class CharUnicodeInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_s_pNumericValues()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x1180);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_pNumericLevel1Index()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x1188);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_pCategoryLevel1Index()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x1190);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_pCategoriesValue()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x1198);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_pDigitValues()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x11A0);
		}
		// static const ::System::Char HIGH_SURROGATE_START; // 0x0
		// static const ::System::Char HIGH_SURROGATE_END; // 0x0
		// static const ::System::Char LOW_SURROGATE_START; // 0x0
		// static const ::System::Char LOW_SURROGATE_END; // 0x0
		// static const ::System::Int32 UNICODE_CATEGORY_OFFSET = 0x0; // 0x0
		// static const ::System::Int32 BIDI_CATEGORY_OFFSET = 0x1; // 0x0
		// static const ::System::Int32 UNICODE_PLANE01_START = 0x10000; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO__CCTOR_OFFSET))();
		}

		static ::System::Int32 InternalConvertToUtf32(::System::String* s, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_OFFSET))(s, index);
		}

		static ::System::Int32 InternalConvertToUtf32_1(::System::String* s, ::System::Int32 index, ::System::Int32& charLength)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_1_OFFSET))(s, index, charLength);
		}

		static ::System::Boolean IsWhiteSpace(::System::String* s, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_OFFSET))(s, index);
		}

		static ::System::Boolean IsWhiteSpace_1(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_1_OFFSET))(c);
		}

		static ::System::Double InternalGetNumericValue(::System::Int32 ch)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETNUMERICVALUE_OFFSET))(ch);
		}

		static ::System::UInt16 InternalGetDigitValues(::System::Int32 ch)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETDIGITVALUES_OFFSET))(ch);
		}

		static ::System::Double GetNumericValue(::System::Char ch)
		{
			return ((::System::Double(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_OFFSET))(ch);
		}

		static ::System::Double GetNumericValue_1(::System::String* s, ::System::Int32 index)
		{
			return ((::System::Double(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_1_OFFSET))(s, index);
		}

		static ::System::Int32 GetDecimalDigitValue(::System::Char ch)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETDECIMALDIGITVALUE_OFFSET))(ch);
		}

		static ::System::Int32 GetDecimalDigitValue_1(::System::String* s, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETDECIMALDIGITVALUE_1_OFFSET))(s, index);
		}

		static ::System::Int32 GetDigitValue(::System::Char ch)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETDIGITVALUE_OFFSET))(ch);
		}

		static ::System::Int32 GetDigitValue_1(::System::String* s, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETDIGITVALUE_1_OFFSET))(s, index);
		}

		static ::System::Globalization::UnicodeCategory GetUnicodeCategory(::System::Char ch)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET))(ch);
		}

		static ::System::Globalization::UnicodeCategory GetUnicodeCategory_1(::System::String* s, ::System::Int32 index)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_1_OFFSET))(s, index);
		}

		static ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory(::System::Int32 ch)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_OFFSET))(ch);
		}

		static ::System::Byte InternalGetCategoryValue(::System::Int32 ch, ::System::Int32 offset)
		{
			return ((::System::Byte(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETCATEGORYVALUE_OFFSET))(ch, offset);
		}

		static ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory_1(::System::String* value, ::System::Int32 index)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_1_OFFSET))(value, index);
		}

		static ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory_2(::System::String* str, ::System::Int32 index, ::System::Int32& charLength)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::String*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_2_OFFSET))(str, index, charLength);
		}

		static ::System::Boolean IsCombiningCategory(::System::Globalization::UnicodeCategory uc)
		{
			return ((::System::Boolean(*)(::System::Globalization::UnicodeCategory))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISCOMBININGCATEGORY_OFFSET))(uc);
		}
	};
}
