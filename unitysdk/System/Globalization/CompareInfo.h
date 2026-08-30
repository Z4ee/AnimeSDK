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

#define SYSTEM_GLOBALIZATION_COMPAREINFO_ASSIGN_SORTKEY_OFFSET UNITYSDK_OFFSET(0x1BD0A090)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPAREORDINAL_OFFSET UNITYSDK_OFFSET(0x1BD082E0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x1BD07C90)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_2_OFFSET UNITYSDK_OFFSET(0x1BD08010)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BD07BF0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_CREATESORTKEYCORE_OFFSET UNITYSDK_OFFSET(0x1BD097E0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_CREATESORTKEY_OFFSET UNITYSDK_OFFSET(0x1BD09710)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BD09A80)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOLLATOR_OFFSET UNITYSDK_OFFSET(0x1BD087C0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_OFFSET UNITYSDK_OFFSET(0x1BD07700)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODEOFSTRING_1_OFFSET UNITYSDK_OFFSET(0x1BD09CE0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODEOFSTRING_OFFSET UNITYSDK_OFFSET(0x1BD09CC0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BD09BD0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GETSORTKEY_OFFSET UNITYSDK_OFFSET(0x1BD09700)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD07B70)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_GET_USEMANAGEDCOLLATION_OFFSET UNITYSDK_OFFSET(0x1BD08690)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1BD08E50)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_MANAGED_OFFSET UNITYSDK_OFFSET(0x1BD0A2F0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BD0A2E0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_SWITCH_OFFSET UNITYSDK_OFFSET(0x1BD07DD0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_MANAGED_OFFSET UNITYSDK_OFFSET(0x1BD0A250)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_OFFSET UNITYSDK_OFFSET(0x1BD0A160)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_SWITCH_OFFSET UNITYSDK_OFFSET(0x1BD09110)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ISPREFIX_OFFSET UNITYSDK_OFFSET(0x1BD08330)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ISSUFFIX_OFFSET UNITYSDK_OFFSET(0x1BD08AA0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x1BD09510)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZED_1_OFFSET UNITYSDK_OFFSET(0x1BD079D0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1BD077E0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BD077D0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BD07A20)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1BD07B20)
#define SYSTEM_GLOBALIZATION_COMPAREINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BD09FC0)
#define SYSTEM_GLOBALIZATION_COMPAREINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD0A330)
#define SYSTEM_GLOBALIZATION_COMPAREINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD076E0)

namespace System::Globalization
{
	inline static constexpr unsigned int CompareInfo_TypeDefinitionIndex = 737;

	class CompareInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Mono::Globalization::Unicode::SimpleCollator*>** StaticGet_collators()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Mono::Globalization::Unicode::SimpleCollator*>**)Il2CppClass::FromTypeDefinitionIndex(CompareInfo_TypeDefinitionIndex)->GetStaticField(0x7AC0);
		}
		static ::System::Boolean* StaticGet_managedCollation()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CompareInfo_TypeDefinitionIndex)->GetStaticField(0x2100);
		}
		static ::System::Boolean* StaticGet_managedCollationChecked()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CompareInfo_TypeDefinitionIndex)->GetStaticField(0x2101);
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
		::System::String* m_name; // 0x10
		::System::String* m_sortName; // 0x18
		::Mono::Globalization::Unicode::SimpleCollator* collator; // 0x20
		::System::Globalization::SortVersion* m_SortVersion; // 0x28
		::System::Int32 win32LCID; // 0x30
		::System::Int32 culture; // 0x34

		::System::Void _ctor(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO__CTOR_1_OFFSET))(this);
		}

		static ::System::Globalization::CompareInfo* GetCompareInfo(::System::String* a1)
		{
			return ((::System::Globalization::CompareInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETCOMPAREINFO_OFFSET))(a1);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZING_OFFSET))(this, a1);
		}

		::System::Void OnDeserialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZED_OFFSET))(this);
		}

		::System::Void OnDeserialized_1(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ONDESERIALIZED_1_OFFSET))(this, a1);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ONSERIALIZING_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GET_NAME_OFFSET))(this);
		}

		::System::Int32 Compare(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Int32 Compare_1(::System::String* a1, ::System::String* a2, ::System::Globalization::CompareOptions a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Compare_2(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Globalization::CompareOptions a7)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPARE_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 CompareOrdinal(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_COMPAREORDINAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean IsPrefix(::System::String* a1, ::System::String* a2, ::System::Globalization::CompareOptions a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ISPREFIX_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsSuffix(::System::String* a1, ::System::String* a2, ::System::Globalization::CompareOptions a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ISSUFFIX_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 IndexOf(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::CompareOptions a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INDEXOF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 LastIndexOf(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Globalization::CompareOptions a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_LASTINDEXOF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Globalization::SortKey* GetSortKey(::System::String* a1, ::System::Globalization::CompareOptions a2)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETSORTKEY_OFFSET))(this, a1, a2);
		}

		::System::Globalization::SortKey* CreateSortKey(::System::String* a1, ::System::Globalization::CompareOptions a2)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_CREATESORTKEY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeOfString(::System::String* a1, ::System::Globalization::CompareOptions a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODEOFSTRING_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCodeOfString_1(::System::String* a1, ::System::Globalization::CompareOptions a2, ::System::Boolean a3, ::System::Int64 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_GETHASHCODEOFSTRING_1_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Globalization::SortKey* CreateSortKeyCore(::System::String* a1, ::System::Globalization::CompareOptions a2)
		{
			return ((::System::Globalization::SortKey*(*)(::PVOID, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_CREATESORTKEYCORE_OFFSET))(this, a1, a2);
		}

		::System::Int32 internal_index_switch(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Globalization::CompareOptions a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_SWITCH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 internal_compare_switch(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Globalization::CompareOptions a7)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_SWITCH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 internal_compare_managed(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Globalization::CompareOptions a7)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_MANAGED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 internal_index_managed(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Globalization::CompareOptions a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_MANAGED_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void assign_sortkey(::System::Object* a1, ::System::String* a2, ::System::Globalization::CompareOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_ASSIGN_SORTKEY_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 internal_compare(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Globalization::CompareOptions a7)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_COMPARE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 internal_index(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Globalization::CompareOptions a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Globalization::CompareOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_COMPAREINFO_INTERNAL_INDEX_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
