#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Mono::Globalization::Unicode { class SimpleCollator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class SortKey; }
namespace System::Globalization { class SortVersion; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_GLOBALIZATION_COMPAREINFO_ASSIGN_SORTKEY_OFFSET UNITYSDK_OFFSET(0x195ED7F0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPAREORDINAL_OFFSET UNITYSDK_OFFSET(0x195EA900)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x195EA0C0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_2_OFFSET UNITYSDK_OFFSET(0x195EA4A0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_3_OFFSET UNITYSDK_OFFSET(0x195EA4F0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_4_OFFSET UNITYSDK_OFFSET(0x195EA5B0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_5_OFFSET UNITYSDK_OFFSET(0x195EA5E0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_OFFSET UNITYSDK_OFFSET(0x195EA0A0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_CREATESORTKEYCORE_OFFSET UNITYSDK_OFFSET(0x195ECE80)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_CREATESORTKEY_OFFSET UNITYSDK_OFFSET(0x195ECD30)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x195ED140)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOLLATOR_OFFSET UNITYSDK_OFFSET(0x195EADE0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_1_OFFSET UNITYSDK_OFFSET(0x195E9B20)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_2_OFFSET UNITYSDK_OFFSET(0x195E9AF0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_3_OFFSET UNITYSDK_OFFSET(0x195E9CD0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_OFFSET UNITYSDK_OFFSET(0x195E9980)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODEOFSTRING_1_OFFSET UNITYSDK_OFFSET(0x195ED510)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODEOFSTRING_OFFSET UNITYSDK_OFFSET(0x195ED6B0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x195ED280)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195ED1F0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETNATIVECOMPAREFLAGS_OFFSET UNITYSDK_OFFSET(0x195EA060)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETSORTKEY_1_OFFSET UNITYSDK_OFFSET(0x195ECE00)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETSORTKEY_OFFSET UNITYSDK_OFFSET(0x195ECD20)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GET_INTERNALSORTVERSION_OFFSET UNITYSDK_OFFSET(0x195ED760)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GET_ISLEGACY20SORTINGBEHAVIORREQUESTED_OFFSET UNITYSDK_OFFSET(0x195ED750)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GET_LCID_OFFSET UNITYSDK_OFFSET(0x195ED720)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x195E9FD0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GET_USEMANAGEDCOLLATION_OFFSET UNITYSDK_OFFSET(0x195EACA0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x195ED770)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_10_OFFSET UNITYSDK_OFFSET(0x195EBA80)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_11_OFFSET UNITYSDK_OFFSET(0x195EBF70)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x195EB580)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_2_OFFSET UNITYSDK_OFFSET(0x195EB620)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_3_OFFSET UNITYSDK_OFFSET(0x195EB6C0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_4_OFFSET UNITYSDK_OFFSET(0x195EB760)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_5_OFFSET UNITYSDK_OFFSET(0x195EB810)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_6_OFFSET UNITYSDK_OFFSET(0x195EB8C0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_7_OFFSET UNITYSDK_OFFSET(0x195EB970)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_8_OFFSET UNITYSDK_OFFSET(0x195EBA20)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_9_OFFSET UNITYSDK_OFFSET(0x195EBA50)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_OFFSET UNITYSDK_OFFSET(0x195EB4E0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_MANAGED_OFFSET UNITYSDK_OFFSET(0x195EDAF0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_OFFSET UNITYSDK_OFFSET(0x195EDAE0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_SWITCH_OFFSET UNITYSDK_OFFSET(0x195EA230)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_1_OFFSET UNITYSDK_OFFSET(0x195ED960)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_MANAGED_1_OFFSET UNITYSDK_OFFSET(0x195EDA50)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_MANAGED_OFFSET UNITYSDK_OFFSET(0x195ED8D0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_OFFSET UNITYSDK_OFFSET(0x195ED8C0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_SWITCH_1_OFFSET UNITYSDK_OFFSET(0x195EC1C0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_SWITCH_OFFSET UNITYSDK_OFFSET(0x195EBCD0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ISPREFIX_1_OFFSET UNITYSDK_OFFSET(0x195EB100)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ISPREFIX_OFFSET UNITYSDK_OFFSET(0x195EA950)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ISSORTABLE_1_OFFSET UNITYSDK_OFFSET(0x195E9E10)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ISSORTABLE_OFFSET UNITYSDK_OFFSET(0x195E9D60)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ISSUFFIX_1_OFFSET UNITYSDK_OFFSET(0x195EB4C0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ISSUFFIX_OFFSET UNITYSDK_OFFSET(0x195EB120)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_10_OFFSET UNITYSDK_OFFSET(0x195EC8A0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_11_OFFSET UNITYSDK_OFFSET(0x195ECAF0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_1_OFFSET UNITYSDK_OFFSET(0x195EC5A0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_2_OFFSET UNITYSDK_OFFSET(0x195EC640)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_3_OFFSET UNITYSDK_OFFSET(0x195EC6E0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_4_OFFSET UNITYSDK_OFFSET(0x195EC780)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_5_OFFSET UNITYSDK_OFFSET(0x195EC7B0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_6_OFFSET UNITYSDK_OFFSET(0x195EC7E0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_7_OFFSET UNITYSDK_OFFSET(0x195EC810)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_8_OFFSET UNITYSDK_OFFSET(0x195EC840)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_9_OFFSET UNITYSDK_OFFSET(0x195EC870)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x195EC500)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZED_1_OFFSET UNITYSDK_OFFSET(0x195E9EF0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x195E9EA0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x195E9E90)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x195E9F40)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x195E9F80)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x195ED6D0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195EDB30)
#define SYSTEM_GLOBALIZATION_COMPAREINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x195E9960)

namespace System::Globalization
{
	inline static constexpr unsigned int CompareInfo_TypeDefinitionIndex = 708;

	class CompareInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Mono::Globalization::Unicode::SimpleCollator*>** StaticGet_collators()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Mono::Globalization::Unicode::SimpleCollator*>**)Il2CppClass::FromTypeDefinitionIndex(CompareInfo_TypeDefinitionIndex)->GetStaticField(0xE90);
		}
		static ::System::Boolean* StaticGet_managedCollation()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CompareInfo_TypeDefinitionIndex)->GetStaticField(0x3F0);
		}
		static ::System::Boolean* StaticGet_managedCollationChecked()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CompareInfo_TypeDefinitionIndex)->GetStaticField(0x3F1);
		}
		// static const ::System::Globalization::CompareOptions ValidIndexMaskOffFlags; // 0x0
		// static const ::System::Globalization::CompareOptions ValidCompareMaskOffFlags; // 0x0
		// static const ::System::Globalization::CompareOptions ValidHashCodeOfStringMaskOffFlags; // 0x0
		// static const ::System::Int32 LINGUISTIC_IGNORECASE = 0x10; // 0x0
		// static const ::System::Int32 NORM_IGNORECASE = 0x1; // 0x0
		// static const ::System::Int32 NORM_IGNOREKANATYPE = 0x10000; // 0x0
		// static const ::System::Int32 LINGUISTIC_IGNOREDIACRITIC = 0x20; // 0x0
		// static const ::System::Int32 NORM_IGNORENONSPACE = 0x2; // 0x0
		// static const ::System::Int32 NORM_IGNORESYMBOLS = 0x4; // 0x0
		// static const ::System::Int32 NORM_IGNOREWIDTH = 0x20000; // 0x0
		// static const ::System::Int32 SORT_STRINGSORT = 0x1000; // 0x0
		// static const ::System::Int32 COMPARE_OPTIONS_ORDINAL = 0x40000000; // 0x0
		// static const ::System::Int32 NORM_LINGUISTIC_CASING = 0x8000000; // 0x0
		// static const ::System::Int32 RESERVED_FIND_ASCII_STRING = 0x20000000; // 0x0
		// static const ::System::Int32 SORT_VERSION_WHIDBEY = 0x1000; // 0x0
		// static const ::System::Int32 SORT_VERSION_V4 = 0x60101; // 0x0
		::System::Globalization::SortVersion* m_SortVersion; // 0x10
		::Mono::Globalization::Unicode::SimpleCollator* collator; // 0x18
		::System::String* m_sortName; // 0x20
		::System::String* m_name; // 0x28
		::System::Int32 culture; // 0x30
		::System::Int32 win32LCID; // 0x34

		::System::Void _ctor(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO__CTOR_OFFSET))(this, culture);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO__CTOR_1_OFFSET))(this);
		}

		static ::System::Globalization::CompareInfo* GetCompareInfo(::System::Int32 culture, ::System::Reflection::Assembly* assembly)
		{
			return ((::System::Globalization::CompareInfo*(*)(::System::Int32, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_OFFSET))(culture, assembly);
		}

		static ::System::Globalization::CompareInfo* GetCompareInfo_1(::System::String* name, ::System::Reflection::Assembly* assembly)
		{
			return ((::System::Globalization::CompareInfo*(*)(::System::String*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_1_OFFSET))(name, assembly);
		}

		static ::System::Globalization::CompareInfo* GetCompareInfo_2(::System::Int32 culture)
		{
			return ((::System::Globalization::CompareInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_2_OFFSET))(culture);
		}

		static ::System::Globalization::CompareInfo* GetCompareInfo_3(::System::String* name)
		{
			return ((::System::Globalization::CompareInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_3_OFFSET))(name);
		}

		static ::System::Boolean IsSortable(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ISSORTABLE_OFFSET))(ch);
		}

		static ::System::Boolean IsSortable_1(::System::String* text)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ISSORTABLE_1_OFFSET))(text);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void OnDeserialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZED_OFFSET))(this);
		}

		::System::Void OnDeserialized_1(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZED_1_OFFSET))(this, ctx);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ONSERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GET_NAME_OFFSET))(this);
		}

		static ::System::Int32 GetNativeCompareFlags(::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETNATIVECOMPAREFLAGS_OFFSET))(options);
		}

		::System::Int32 Compare(::System::String* string1, ::System::String* string2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_OFFSET))(this, string1, string2);
		}

		::System::Int32 Compare_1(::System::String* string1, ::System::String* string2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_1_OFFSET))(this, string1, string2, options);
		}

		::System::Int32 Compare_2(::System::String* string1, ::System::Int32 offset1, ::System::Int32 length1, ::System::String* string2, ::System::Int32 offset2, ::System::Int32 length2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_2_OFFSET))(this, string1, offset1, length1, string2, offset2, length2);
		}

		::System::Int32 Compare_3(::System::String* string1, ::System::Int32 offset1, ::System::String* string2, ::System::Int32 offset2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_3_OFFSET))(this, string1, offset1, string2, offset2, options);
		}

		::System::Int32 Compare_4(::System::String* string1, ::System::Int32 offset1, ::System::String* string2, ::System::Int32 offset2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_4_OFFSET))(this, string1, offset1, string2, offset2);
		}

		::System::Int32 Compare_5(::System::String* string1, ::System::Int32 offset1, ::System::Int32 length1, ::System::String* string2, ::System::Int32 offset2, ::System::Int32 length2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_5_OFFSET))(this, string1, offset1, length1, string2, offset2, length2, options);
		}

		static ::System::Int32 CompareOrdinal(::System::String* string1, ::System::Int32 offset1, ::System::Int32 length1, ::System::String* string2, ::System::Int32 offset2, ::System::Int32 length2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPAREORDINAL_OFFSET))(string1, offset1, length1, string2, offset2, length2);
		}

		::System::Boolean IsPrefix(::System::String* source, ::System::String* prefix, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ISPREFIX_OFFSET))(this, source, prefix, options);
		}

		::System::Boolean IsPrefix_1(::System::String* source, ::System::String* prefix)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ISPREFIX_1_OFFSET))(this, source, prefix);
		}

		::System::Boolean IsSuffix(::System::String* source, ::System::String* suffix, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ISSUFFIX_OFFSET))(this, source, suffix, options);
		}

		::System::Boolean IsSuffix_1(::System::String* source, ::System::String* suffix)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ISSUFFIX_1_OFFSET))(this, source, suffix);
		}

		::System::Int32 IndexOf(::System::String* source, ::System::Char value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_OFFSET))(this, source, value);
		}

		::System::Int32 IndexOf_1(::System::String* source, ::System::String* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_1_OFFSET))(this, source, value);
		}

		::System::Int32 IndexOf_2(::System::String* source, ::System::Char value, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_2_OFFSET))(this, source, value, options);
		}

		::System::Int32 IndexOf_3(::System::String* source, ::System::String* value, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_3_OFFSET))(this, source, value, options);
		}

		::System::Int32 IndexOf_4(::System::String* source, ::System::Char value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_4_OFFSET))(this, source, value, startIndex);
		}

		::System::Int32 IndexOf_5(::System::String* source, ::System::String* value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_5_OFFSET))(this, source, value, startIndex);
		}

		::System::Int32 IndexOf_6(::System::String* source, ::System::Char value, ::System::Int32 startIndex, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_6_OFFSET))(this, source, value, startIndex, options);
		}

		::System::Int32 IndexOf_7(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_7_OFFSET))(this, source, value, startIndex, options);
		}

		::System::Int32 IndexOf_8(::System::String* source, ::System::Char value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_8_OFFSET))(this, source, value, startIndex, count);
		}

		::System::Int32 IndexOf_9(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_9_OFFSET))(this, source, value, startIndex, count);
		}

		::System::Int32 IndexOf_10(::System::String* source, ::System::Char value, ::System::Int32 startIndex, ::System::Int32 count, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_10_OFFSET))(this, source, value, startIndex, count, options);
		}

		::System::Int32 IndexOf_11(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Int32 count, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_11_OFFSET))(this, source, value, startIndex, count, options);
		}

		::System::Int32 LastIndexOf(::System::String* source, ::System::Char value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_OFFSET))(this, source, value);
		}

		::System::Int32 LastIndexOf_1(::System::String* source, ::System::String* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_1_OFFSET))(this, source, value);
		}

		::System::Int32 LastIndexOf_2(::System::String* source, ::System::Char value, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_2_OFFSET))(this, source, value, options);
		}

		::System::Int32 LastIndexOf_3(::System::String* source, ::System::String* value, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_3_OFFSET))(this, source, value, options);
		}

		::System::Int32 LastIndexOf_4(::System::String* source, ::System::Char value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_4_OFFSET))(this, source, value, startIndex);
		}

		::System::Int32 LastIndexOf_5(::System::String* source, ::System::String* value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_5_OFFSET))(this, source, value, startIndex);
		}

		::System::Int32 LastIndexOf_6(::System::String* source, ::System::Char value, ::System::Int32 startIndex, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_6_OFFSET))(this, source, value, startIndex, options);
		}

		::System::Int32 LastIndexOf_7(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_7_OFFSET))(this, source, value, startIndex, options);
		}

		::System::Int32 LastIndexOf_8(::System::String* source, ::System::Char value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_8_OFFSET))(this, source, value, startIndex, count);
		}

		::System::Int32 LastIndexOf_9(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_9_OFFSET))(this, source, value, startIndex, count);
		}

		::System::Int32 LastIndexOf_10(::System::String* source, ::System::Char value, ::System::Int32 startIndex, ::System::Int32 count, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Char, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_10_OFFSET))(this, source, value, startIndex, count, options);
		}

		::System::Int32 LastIndexOf_11(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Int32 count, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_11_OFFSET))(this, source, value, startIndex, count, options);
		}

		::System::Globalization::SortKey* GetSortKey(::System::String* source, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETSORTKEY_OFFSET))(this, source, options);
		}

		::System::Globalization::SortKey* GetSortKey_1(::System::String* source)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETSORTKEY_1_OFFSET))(this, source);
		}

		::System::Globalization::SortKey* CreateSortKey(::System::String* source, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_CREATESORTKEY_OFFSET))(this, source, options);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCode_1(::System::String* source, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODE_1_OFFSET))(this, source, options);
		}

		::System::Int32 GetHashCodeOfString(::System::String* source, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODEOFSTRING_OFFSET))(this, source, options);
		}

		::System::Int32 GetHashCodeOfString_1(::System::String* source, ::System::Globalization::CompareOptions options, ::System::Boolean forceRandomizedHashing, ::System::Int64 additionalEntropy)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODEOFSTRING_1_OFFSET))(this, source, options, forceRandomizedHashing, additionalEntropy);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_TOSTRING_OFFSET))(this);
		}

		::System::Int32 get_LCID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GET_LCID_OFFSET))(this);
		}

		static ::System::Boolean get_IsLegacy20SortingBehaviorRequested()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GET_ISLEGACY20SORTINGBEHAVIORREQUESTED_OFFSET))();
		}

		static ::System::UInt32 get_InternalSortVersion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GET_INTERNALSORTVERSION_OFFSET))();
		}

		::System::Globalization::SortVersion* get_Version()
		{
			return ((::System::Globalization::SortVersion*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GET_VERSION_OFFSET))(this);
		}

		static ::System::Boolean get_UseManagedCollation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GET_USEMANAGEDCOLLATION_OFFSET))();
		}

		::Mono::Globalization::Unicode::SimpleCollator* GetCollator()
		{
			return ((::Mono::Globalization::Unicode::SimpleCollator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOLLATOR_OFFSET))(this);
		}

		::System::Globalization::SortKey* CreateSortKeyCore(::System::String* source, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_CREATESORTKEYCORE_OFFSET))(this, source, options);
		}

		::System::Int32 internal_index_switch(::System::String* s, ::System::Int32 sindex, ::System::Int32 count, ::System::Char c, ::System::Globalization::CompareOptions opt, ::System::Boolean first)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Char, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_SWITCH_OFFSET))(this, s, sindex, count, c, opt, first);
		}

		::System::Int32 internal_index_switch_1(::System::String* s1, ::System::Int32 sindex, ::System::Int32 count, ::System::String* s2, ::System::Globalization::CompareOptions opt, ::System::Boolean first)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_SWITCH_1_OFFSET))(this, s1, sindex, count, s2, opt, first);
		}

		::System::Int32 internal_compare_switch(::System::String* str1, ::System::Int32 offset1, ::System::Int32 length1, ::System::String* str2, ::System::Int32 offset2, ::System::Int32 length2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_SWITCH_OFFSET))(this, str1, offset1, length1, str2, offset2, length2, options);
		}

		::System::Int32 internal_compare_managed(::System::String* str1, ::System::Int32 offset1, ::System::Int32 length1, ::System::String* str2, ::System::Int32 offset2, ::System::Int32 length2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_MANAGED_OFFSET))(this, str1, offset1, length1, str2, offset2, length2, options);
		}

		::System::Int32 internal_index_managed(::System::String* s, ::System::Int32 sindex, ::System::Int32 count, ::System::Char c, ::System::Globalization::CompareOptions opt, ::System::Boolean first)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Char, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_MANAGED_OFFSET))(this, s, sindex, count, c, opt, first);
		}

		::System::Int32 internal_index_managed_1(::System::String* s1, ::System::Int32 sindex, ::System::Int32 count, ::System::String* s2, ::System::Globalization::CompareOptions opt, ::System::Boolean first)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_MANAGED_1_OFFSET))(this, s1, sindex, count, s2, opt, first);
		}

		::System::Void assign_sortkey(::System::Object* key, ::System::String* source, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ASSIGN_SORTKEY_OFFSET))(this, key, source, options);
		}

		::System::Int32 internal_compare(::System::String* str1, ::System::Int32 offset1, ::System::Int32 length1, ::System::String* str2, ::System::Int32 offset2, ::System::Int32 length2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_OFFSET))(this, str1, offset1, length1, str2, offset2, length2, options);
		}

		::System::Int32 internal_index(::System::String* source, ::System::Int32 sindex, ::System::Int32 count, ::System::Char value, ::System::Globalization::CompareOptions options, ::System::Boolean first)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Char, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_OFFSET))(this, source, sindex, count, value, options, first);
		}

		::System::Int32 internal_index_1(::System::String* source, ::System::Int32 sindex, ::System::Int32 count, ::System::String* value, ::System::Globalization::CompareOptions options, ::System::Boolean first)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_1_OFFSET))(this, source, sindex, count, value, options, first);
		}
	};
}
