#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_INDEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x29140)
#define SYSTEM_INDEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x20C8FC0)
#define SYSTEM_INDEX_FROMSTART_OFFSET UNITYSDK_OFFSET(0x15D91060)
#define SYSTEM_INDEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define SYSTEM_INDEX_GETOFFSET_OFFSET UNITYSDK_OFFSET(0x20C8FB0)
#define SYSTEM_INDEX_GET_ISFROMEND_OFFSET UNITYSDK_OFFSET(0x20C8FA0)
#define SYSTEM_INDEX_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x20C8F90)
#define SYSTEM_INDEX_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x15D911E0)
#define SYSTEM_INDEX_THROWVALUEARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x15D910D0)
#define SYSTEM_INDEX_TOSTRINGFROMEND_OFFSET UNITYSDK_OFFSET(0x20C90A0)
#define SYSTEM_INDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20C9020)
#define SYSTEM_INDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x29130)

namespace System
{
	inline static constexpr unsigned int Index_TypeDefinitionIndex = 5284;

	struct alignas(4) Index
	{
		::System::Int32 _value; // 0x10

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX__CTOR_OFFSET))(this, value);
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
