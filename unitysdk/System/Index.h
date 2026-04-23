#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_INDEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x299F0)
#define SYSTEM_INDEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x229AC80)
#define SYSTEM_INDEX_FROMSTART_OFFSET UNITYSDK_OFFSET(0x1738E850)
#define SYSTEM_INDEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define SYSTEM_INDEX_GETOFFSET_OFFSET UNITYSDK_OFFSET(0x229AC70)
#define SYSTEM_INDEX_GET_ISFROMEND_OFFSET UNITYSDK_OFFSET(0x229AC60)
#define SYSTEM_INDEX_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x229AC50)
#define SYSTEM_INDEX_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1738E970)
#define SYSTEM_INDEX_THROWVALUEARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1738E7E0)
#define SYSTEM_INDEX_TOSTRINGFROMEND_OFFSET UNITYSDK_OFFSET(0x229AD60)
#define SYSTEM_INDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x229ACE0)
#define SYSTEM_INDEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x299E0)
#define SYSTEM_INDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x229ABE0)

namespace System
{
	inline static constexpr unsigned int Index_TypeDefinitionIndex = 5295;

	struct alignas(4) Index
	{
		::System::Int32 _value; // 0x10

		::System::Void _ctor(::System::Int32 value, ::System::Boolean fromEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_INDEX__CTOR_OFFSET))(this, value, fromEnd);
		}

		::System::Void _ctor_1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Index FromStart(::System::Int32 value)
		{
			return ((::System::Index(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_FROMSTART_OFFSET))(value);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean get_IsFromEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GET_ISFROMEND_OFFSET))(this);
		}

		::System::Int32 GetOffset(::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GETOFFSET_OFFSET))(this, length);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_EQUALS_OFFSET))(this, value);
		}

		::System::Boolean Equals_1(::System::Index other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Index))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Index op_Implicit(::System::Int32 value)
		{
			return ((::System::Index(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_OP_IMPLICIT_OFFSET))(value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_TOSTRING_OFFSET))(this);
		}

		static ::System::Void ThrowValueArgumentOutOfRange_NeedNonNegNumException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_INDEX_THROWVALUEARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET))();
		}

		::System::String* ToStringFromEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_TOSTRINGFROMEND_OFFSET))(this);
		}
	};
}
