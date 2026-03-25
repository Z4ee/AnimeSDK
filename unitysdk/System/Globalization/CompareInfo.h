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

#define SYSTEM_GLOBALIZATION_COMPAREINFO_ASSIGN_SORTKEY_OFFSET UNITYSDK_OFFSET(0x162F1AB0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPAREORDINAL_OFFSET UNITYSDK_OFFSET(0x162EFFB0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x162EF960)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_2_OFFSET UNITYSDK_OFFSET(0x162EFCE0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_OFFSET UNITYSDK_OFFSET(0x162EF940)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_CREATESORTKEYCORE_OFFSET UNITYSDK_OFFSET(0x162F1400)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_CREATESORTKEY_OFFSET UNITYSDK_OFFSET(0x162F1330)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x162F16A0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOLLATOR_OFFSET UNITYSDK_OFFSET(0x162F0420)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_OFFSET UNITYSDK_OFFSET(0x162EF530)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODEOFSTRING_1_OFFSET UNITYSDK_OFFSET(0x162F17E0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODEOFSTRING_OFFSET UNITYSDK_OFFSET(0x162F17C0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x162F1730)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETSORTKEY_OFFSET UNITYSDK_OFFSET(0x162F1320)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x162EF8C0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GET_USEMANAGEDCOLLATION_OFFSET UNITYSDK_OFFSET(0x162F02F0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_OFFSET UNITYSDK_OFFSET(0x162F0A70)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_MANAGED_OFFSET UNITYSDK_OFFSET(0x162F1D10)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_OFFSET UNITYSDK_OFFSET(0x162F1D00)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_SWITCH_OFFSET UNITYSDK_OFFSET(0x162EFAA0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_MANAGED_OFFSET UNITYSDK_OFFSET(0x162F1C70)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_OFFSET UNITYSDK_OFFSET(0x162F1B80)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_SWITCH_OFFSET UNITYSDK_OFFSET(0x162F0D30)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ISPREFIX_OFFSET UNITYSDK_OFFSET(0x162F0000)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ISSUFFIX_OFFSET UNITYSDK_OFFSET(0x162F0720)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x162F1130)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZED_1_OFFSET UNITYSDK_OFFSET(0x162EF7E0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x162EF5A0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x162EF590)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x162EF830)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x162EF870)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x162F1A50)
#define SYSTEM_GLOBALIZATION_COMPAREINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162F1D50)
#define SYSTEM_GLOBALIZATION_COMPAREINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x162EF510)

namespace System::Globalization
{
	inline static constexpr unsigned int CompareInfo_TypeDefinitionIndex = 735;

	class CompareInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Mono::Globalization::Unicode::SimpleCollator*>** StaticGet_collators()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Mono::Globalization::Unicode::SimpleCollator*>**)Il2CppClass::FromTypeDefinitionIndex(CompareInfo_TypeDefinitionIndex)->GetStaticField(0x46A0);
		}
		static ::System::Boolean* StaticGet_managedCollation()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CompareInfo_TypeDefinitionIndex)->GetStaticField(0x2690);
		}
		static ::System::Boolean* StaticGet_managedCollationChecked()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CompareInfo_TypeDefinitionIndex)->GetStaticField(0x2691);
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
		::System::String* m_sortName; // 0x18
		::System::String* m_name; // 0x20
		::Mono::Globalization::Unicode::SimpleCollator* collator; // 0x28
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

		static ::System::Globalization::CompareInfo* GetCompareInfo(::System::String* name)
		{
			return ((::System::Globalization::CompareInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_OFFSET))(name);
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

		::System::Int32 Compare(::System::String* string1, ::System::String* string2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_OFFSET))(this, string1, string2);
		}

		::System::Int32 Compare_1(::System::String* string1, ::System::String* string2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_1_OFFSET))(this, string1, string2, options);
		}

		::System::Int32 Compare_2(::System::String* string1, ::System::Int32 offset1, ::System::Int32 length1, ::System::String* string2, ::System::Int32 offset2, ::System::Int32 length2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_2_OFFSET))(this, string1, offset1, length1, string2, offset2, length2, options);
		}

		static ::System::Int32 CompareOrdinal(::System::String* string1, ::System::Int32 offset1, ::System::Int32 length1, ::System::String* string2, ::System::Int32 offset2, ::System::Int32 length2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPAREORDINAL_OFFSET))(string1, offset1, length1, string2, offset2, length2);
		}

		::System::Boolean IsPrefix(::System::String* source, ::System::String* prefix, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ISPREFIX_OFFSET))(this, source, prefix, options);
		}

		::System::Boolean IsSuffix(::System::String* source, ::System::String* suffix, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ISSUFFIX_OFFSET))(this, source, suffix, options);
		}

		::System::Int32 IndexOf(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Int32 count, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_OFFSET))(this, source, value, startIndex, count, options);
		}

		::System::Int32 LastIndexOf(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Int32 count, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_OFFSET))(this, source, value, startIndex, count, options);
		}

		::System::Globalization::SortKey* GetSortKey(::System::String* source, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETSORTKEY_OFFSET))(this, source, options);
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

		::System::Int32 internal_index_switch(::System::String* s1, ::System::Int32 sindex, ::System::Int32 count, ::System::String* s2, ::System::Globalization::CompareOptions opt, ::System::Boolean first)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_SWITCH_OFFSET))(this, s1, sindex, count, s2, opt, first);
		}

		::System::Int32 internal_compare_switch(::System::String* str1, ::System::Int32 offset1, ::System::Int32 length1, ::System::String* str2, ::System::Int32 offset2, ::System::Int32 length2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_SWITCH_OFFSET))(this, str1, offset1, length1, str2, offset2, length2, options);
		}

		::System::Int32 internal_compare_managed(::System::String* str1, ::System::Int32 offset1, ::System::Int32 length1, ::System::String* str2, ::System::Int32 offset2, ::System::Int32 length2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_MANAGED_OFFSET))(this, str1, offset1, length1, str2, offset2, length2, options);
		}

		::System::Int32 internal_index_managed(::System::String* s1, ::System::Int32 sindex, ::System::Int32 count, ::System::String* s2, ::System::Globalization::CompareOptions opt, ::System::Boolean first)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_MANAGED_OFFSET))(this, s1, sindex, count, s2, opt, first);
		}

		::System::Void assign_sortkey(::System::Object* key, ::System::String* source, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ASSIGN_SORTKEY_OFFSET))(this, key, source, options);
		}

		::System::Int32 internal_compare(::System::String* str1, ::System::Int32 offset1, ::System::Int32 length1, ::System::String* str2, ::System::Int32 offset2, ::System::Int32 length2, ::System::Globalization::CompareOptions options)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_OFFSET))(this, str1, offset1, length1, str2, offset2, length2, options);
		}

		::System::Int32 internal_index(::System::String* source, ::System::Int32 sindex, ::System::Int32 count, ::System::String* value, ::System::Globalization::CompareOptions options, ::System::Boolean first)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_OFFSET))(this, source, sindex, count, value, options, first);
		}
	};
}
