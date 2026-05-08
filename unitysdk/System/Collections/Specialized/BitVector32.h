#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_COUNTBITSSET_OFFSET UNITYSDK_OFFSET(0x19A411C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATEMASKFROMHIGHVALUE_OFFSET UNITYSDK_OFFSET(0x19A412A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATEMASK_1_OFFSET UNITYSDK_OFFSET(0x19A41220)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATEMASK_OFFSET UNITYSDK_OFFSET(0x19A411E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATESECTIONHELPER_OFFSET UNITYSDK_OFFSET(0x19A412F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATESECTION_1_OFFSET UNITYSDK_OFFSET(0x19A414B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATESECTION_OFFSET UNITYSDK_OFFSET(0x19A412E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_EQUALS_OFFSET UNITYSDK_OFFSET(0x8A5B80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8A5BE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GET_DATA_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8A5B30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A5B00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8A5B50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A5B10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x8A5C40)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A41580)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2E85F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32__CTOR_OFFSET UNITYSDK_OFFSET(0x2E85F0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int BitVector32_TypeDefinitionIndex = 3907;

	struct alignas(4) BitVector32
	{
		::System::UInt32 data; // 0x10

		::System::Void _ctor(::System::Int32 data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32__CTOR_OFFSET))(this, data);
		}

		::System::Void _ctor_1(::System::Collections::Specialized::BitVector32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::BitVector32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32__CTOR_1_OFFSET))(this, value);
		}

		::System::Boolean get_Item(::System::Int32 bit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GET_ITEM_OFFSET))(this, bit);
		}

		::System::Void set_Item(::System::Int32 bit, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SET_ITEM_OFFSET))(this, bit, value);
		}

		/*
		::System::Int32 get_Item_1(::System::Collections::Specialized::BitVector32_Section section)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Specialized::BitVector32_Section))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GET_ITEM_1_OFFSET))(this, section);
		}
		*/

		/*
		::System::Void set_Item_1(::System::Collections::Specialized::BitVector32_Section section, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::BitVector32_Section, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SET_ITEM_1_OFFSET))(this, section, value);
		}
		*/

		::System::Int32 get_Data()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GET_DATA_OFFSET))(this);
		}

		static ::System::Int16 CountBitsSet(::System::Int16 mask)
		{
			return ((::System::Int16(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_COUNTBITSSET_OFFSET))(mask);
		}

		static ::System::Int32 CreateMask()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATEMASK_OFFSET))();
		}

		static ::System::Int32 CreateMask_1(::System::Int32 previous)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATEMASK_1_OFFSET))(previous);
		}

		static ::System::Int16 CreateMaskFromHighValue(::System::Int16 highValue)
		{
			return ((::System::Int16(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATEMASKFROMHIGHVALUE_OFFSET))(highValue);
		}

		/*
		static ::System::Collections::Specialized::BitVector32_Section CreateSection(::System::Int16 maxValue)
		{
			return ((::System::Collections::Specialized::BitVector32_Section(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATESECTION_OFFSET))(maxValue);
		}
		*/

		/*
		static ::System::Collections::Specialized::BitVector32_Section CreateSection_1(::System::Int16 maxValue, ::System::Collections::Specialized::BitVector32_Section previous)
		{
			return ((::System::Collections::Specialized::BitVector32_Section(*)(::System::Int16, ::System::Collections::Specialized::BitVector32_Section))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATESECTION_1_OFFSET))(maxValue, previous);
		}
		*/

		/*
		static ::System::Collections::Specialized::BitVector32_Section CreateSectionHelper(::System::Int16 maxValue, ::System::Int16 priorMask, ::System::Int16 priorOffset)
		{
			return ((::System::Collections::Specialized::BitVector32_Section(*)(::System::Int16, ::System::Int16, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_CREATESECTIONHELPER_OFFSET))(maxValue, priorMask, priorOffset);
		}
		*/

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_GETHASHCODE_OFFSET))(this);
		}

		static ::System::String* ToString(::System::Collections::Specialized::BitVector32 value)
		{
			return ((::System::String*(*)(::System::Collections::Specialized::BitVector32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_TOSTRING_OFFSET))(value);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_TOSTRING_1_OFFSET))(this);
		}
	};
}
