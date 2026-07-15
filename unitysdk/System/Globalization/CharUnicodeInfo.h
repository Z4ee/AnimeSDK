#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/UnicodeCategory.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_1_OFFSET UNITYSDK_OFFSET(0x172A9990)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x172A9960)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_1_OFFSET UNITYSDK_OFFSET(0x172A9590)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET UNITYSDK_OFFSET(0x172A9860)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_1_OFFSET UNITYSDK_OFFSET(0x172A93D0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_OFFSET UNITYSDK_OFFSET(0x172A9270)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETCATEGORYVALUE_OFFSET UNITYSDK_OFFSET(0x172A9C40)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x172A98B0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_1_OFFSET UNITYSDK_OFFSET(0x172A9BB0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_2_OFFSET UNITYSDK_OFFSET(0x172A9D00)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_OFFSET UNITYSDK_OFFSET(0x172A9B80)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISCOMBININGCATEGORY_OFFSET UNITYSDK_OFFSET(0x172A9D90)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_1_OFFSET UNITYSDK_OFFSET(0x172A97F0)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x172A9520)
#define SYSTEM_GLOBALIZATION_CHARUNICODEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x172A9DD0)

namespace System::Globalization
{
	inline static constexpr unsigned int CharUnicodeInfo_TypeDefinitionIndex = 729;

	class CharUnicodeInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_pCategoryLevel1Index()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x9860);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_pDigitValues()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x9868);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_pNumericLevel1Index()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x9870);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_pCategoriesValue()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x9878);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_pNumericValues()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(CharUnicodeInfo_TypeDefinitionIndex)->GetStaticField(0x9880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO__CCTOR_OFFSET))();
		}

		static ::System::Int32 InternalConvertToUtf32(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_OFFSET))(a1, a2);
		}

		static ::System::Int32 InternalConvertToUtf32_1(::System::String* a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALCONVERTTOUTF32_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsWhiteSpace(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsWhiteSpace_1(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISWHITESPACE_1_OFFSET))(a1);
		}

		static ::System::Double InternalGetNumericValue(::System::Int32 a1)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETNUMERICVALUE_OFFSET))(a1);
		}

		static ::System::Double GetNumericValue(::System::Char a1)
		{
			return ((::System::Double(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_OFFSET))(a1);
		}

		static ::System::Double GetNumericValue_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETNUMERICVALUE_1_OFFSET))(a1, a2);
		}

		static ::System::Globalization::UnicodeCategory GetUnicodeCategory(::System::Char a1)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_OFFSET))(a1);
		}

		static ::System::Globalization::UnicodeCategory GetUnicodeCategory_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_GETUNICODECATEGORY_1_OFFSET))(a1, a2);
		}

		static ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory(::System::Int32 a1)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_OFFSET))(a1);
		}

		static ::System::Byte InternalGetCategoryValue(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Byte(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETCATEGORYVALUE_OFFSET))(a1, a2);
		}

		static ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_1_OFFSET))(a1, a2);
		}

		static ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory_2(::System::String* a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Globalization::UnicodeCategory(*)(::System::String*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_INTERNALGETUNICODECATEGORY_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsCombiningCategory(::System::Globalization::UnicodeCategory a1)
		{
			return ((::System::Boolean(*)(::System::Globalization::UnicodeCategory))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CHARUNICODEINFO_ISCOMBININGCATEGORY_OFFSET))(a1);
		}
	};
}
