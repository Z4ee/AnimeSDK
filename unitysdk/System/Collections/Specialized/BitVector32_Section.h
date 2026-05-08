#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8A6AD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x8A6A60)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8A6AF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_GET_MASK_OFFSET UNITYSDK_OFFSET(0x361400)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x3A5E10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19ADBEB0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19ADBEC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x8A6B50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19ADBF30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3A5E00)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int BitVector32_Section_TypeDefinitionIndex = 3908;

	struct alignas(2) BitVector32_Section
	{
		::System::Int16 mask; // 0x10
		::System::Int16 offset; // 0x12

		::System::Void _ctor(::System::Int16 mask, ::System::Int16 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION__CTOR_OFFSET))(this, mask, offset);
		}

		::System::Int16 get_Mask()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_GET_MASK_OFFSET))(this);
		}

		::System::Int16 get_Offset()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_GET_OFFSET_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_EQUALS_OFFSET))(this, o);
		}

		::System::Boolean Equals_1(::System::Collections::Specialized::BitVector32_Section obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Specialized::BitVector32_Section))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::System::Collections::Specialized::BitVector32_Section a, ::System::Collections::Specialized::BitVector32_Section b)
		{
			return ((::System::Boolean(*)(::System::Collections::Specialized::BitVector32_Section, ::System::Collections::Specialized::BitVector32_Section))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::System::Collections::Specialized::BitVector32_Section a, ::System::Collections::Specialized::BitVector32_Section b)
		{
			return ((::System::Boolean(*)(::System::Collections::Specialized::BitVector32_Section, ::System::Collections::Specialized::BitVector32_Section))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_GETHASHCODE_OFFSET))(this);
		}

		static ::System::String* ToString(::System::Collections::Specialized::BitVector32_Section value)
		{
			return ((::System::String*(*)(::System::Collections::Specialized::BitVector32_Section))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_TOSTRING_OFFSET))(value);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_BITVECTOR32_SECTION_TOSTRING_1_OFFSET))(this);
		}
	};
}
