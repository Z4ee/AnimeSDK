#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SCHEMA_BITSET_AND_OFFSET UNITYSDK_OFFSET(0x19FB26D0)
#define SYSTEM_XML_SCHEMA_BITSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x19FB24B0)
#define SYSTEM_XML_SCHEMA_BITSET_CLONE_OFFSET UNITYSDK_OFFSET(0x19FB2B20)
#define SYSTEM_XML_SCHEMA_BITSET_ENSURELENGTH_OFFSET UNITYSDK_OFFSET(0x19FB25B0)
#define SYSTEM_XML_SCHEMA_BITSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x19FB29A0)
#define SYSTEM_XML_SCHEMA_BITSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19FB2950)
#define SYSTEM_XML_SCHEMA_BITSET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19FB2400)
#define SYSTEM_XML_SCHEMA_BITSET_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19FB2410)
#define SYSTEM_XML_SCHEMA_BITSET_GET_OFFSET UNITYSDK_OFFSET(0x19FB2460)
#define SYSTEM_XML_SCHEMA_BITSET_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x19FB2C60)
#define SYSTEM_XML_SCHEMA_BITSET_NEXTSET_OFFSET UNITYSDK_OFFSET(0x19FB2610)
#define SYSTEM_XML_SCHEMA_BITSET_OR_OFFSET UNITYSDK_OFFSET(0x19FB2830)
#define SYSTEM_XML_SCHEMA_BITSET_SET_OFFSET UNITYSDK_OFFSET(0x19FB2510)
#define SYSTEM_XML_SCHEMA_BITSET_SUBSCRIPT_OFFSET UNITYSDK_OFFSET(0x19FB23F0)
#define SYSTEM_XML_SCHEMA_BITSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FB23C0)
#define SYSTEM_XML_SCHEMA_BITSET__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB23B0)

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

		::System::Void _ctor_1(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET__CTOR_1_OFFSET))(this, count);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_CLEAR_OFFSET))(this);
		}

		::System::Void Set(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_SET_OFFSET))(this, index);
		}

		::System::Boolean Get(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_GET_OFFSET))(this, index);
		}

		::System::Int32 NextSet(::System::Int32 startFrom)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_NEXTSET_OFFSET))(this, startFrom);
		}

		::System::Void And(::System::Xml::Schema::BitSet* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_AND_OFFSET))(this, other);
		}

		::System::Void Or(::System::Xml::Schema::BitSet* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_OR_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_EQUALS_OFFSET))(this, obj);
		}

		::System::Xml::Schema::BitSet* Clone()
		{
			return ((::System::Xml::Schema::BitSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_CLONE_OFFSET))(this);
		}

		::System::Boolean Intersects(::System::Xml::Schema::BitSet* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::BitSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_INTERSECTS_OFFSET))(this, other);
		}

		::System::Int32 Subscript(::System::Int32 bitIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_SUBSCRIPT_OFFSET))(this, bitIndex);
		}

		::System::Void EnsureLength(::System::Int32 nRequiredLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BITSET_ENSURELENGTH_OFFSET))(this, nRequiredLength);
		}
	};
}
