#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SCHEMA_BITSET_AND_OFFSET UNITYSDK_OFFSET(0x1AE27580)
#define SYSTEM_XML_SCHEMA_BITSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AE27390)
#define SYSTEM_XML_SCHEMA_BITSET_CLONE_OFFSET UNITYSDK_OFFSET(0x1AE27950)
#define SYSTEM_XML_SCHEMA_BITSET_ENSURELENGTH_OFFSET UNITYSDK_OFFSET(0x1AE27470)
#define SYSTEM_XML_SCHEMA_BITSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AE27810)
#define SYSTEM_XML_SCHEMA_BITSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AE277D0)
#define SYSTEM_XML_SCHEMA_BITSET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AE27300)
#define SYSTEM_XML_SCHEMA_BITSET_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AE27310)
#define SYSTEM_XML_SCHEMA_BITSET_GET_OFFSET UNITYSDK_OFFSET(0x1AE27350)
#define SYSTEM_XML_SCHEMA_BITSET_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x1AE27A90)
#define SYSTEM_XML_SCHEMA_BITSET_NEXTSET_OFFSET UNITYSDK_OFFSET(0x1AE274D0)
#define SYSTEM_XML_SCHEMA_BITSET_OR_OFFSET UNITYSDK_OFFSET(0x1AE276C0)
#define SYSTEM_XML_SCHEMA_BITSET_SET_OFFSET UNITYSDK_OFFSET(0x1AE273E0)
#define SYSTEM_XML_SCHEMA_BITSET_SUBSCRIPT_OFFSET UNITYSDK_OFFSET(0x1AE272F0)
#define SYSTEM_XML_SCHEMA_BITSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE272C0)
#define SYSTEM_XML_SCHEMA_BITSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE272B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int BitSet_TypeDefinitionIndex = 2052;

	class BitSet : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* bits; // 0x10
		::System::Int32 count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET__CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_CLEAR_OFFSET))(this);
		}

		::System::Void Set(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_SET_OFFSET))(this, a1);
		}

		::System::Boolean Get(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_GET_OFFSET))(this, a1);
		}

		::System::Int32 NextSet(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_NEXTSET_OFFSET))(this, a1);
		}

		::System::Void And(::System::Xml::Schema::BitSet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_AND_OFFSET))(this, a1);
		}

		::System::Void Or(::System::Xml::Schema::BitSet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_OR_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_EQUALS_OFFSET))(this, a1);
		}

		::System::Xml::Schema::BitSet* Clone()
		{
			return ((::System::Xml::Schema::BitSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_CLONE_OFFSET))(this);
		}

		::System::Boolean Intersects(::System::Xml::Schema::BitSet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::BitSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_INTERSECTS_OFFSET))(this, a1);
		}

		::System::Int32 Subscript(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_SUBSCRIPT_OFFSET))(this, a1);
		}

		::System::Void EnsureLength(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_ENSURELENGTH_OFFSET))(this, a1);
		}
	};
}
