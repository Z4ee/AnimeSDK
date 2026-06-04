#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_INDEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2C4D0)
#define SYSTEM_INDEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x3828780)
#define SYSTEM_INDEX_FROMSTART_OFFSET UNITYSDK_OFFSET(0x18199040)
#define SYSTEM_INDEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define SYSTEM_INDEX_GETOFFSET_OFFSET UNITYSDK_OFFSET(0x3828770)
#define SYSTEM_INDEX_GET_ISFROMEND_OFFSET UNITYSDK_OFFSET(0x3828760)
#define SYSTEM_INDEX_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3828750)
#define SYSTEM_INDEX_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18199160)
#define SYSTEM_INDEX_THROWVALUEARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18198FD0)
#define SYSTEM_INDEX_TOSTRINGFROMEND_OFFSET UNITYSDK_OFFSET(0x3828860)
#define SYSTEM_INDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38287E0)
#define SYSTEM_INDEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define SYSTEM_INDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x38286E0)

namespace System
{
	inline static constexpr unsigned int Index_TypeDefinitionIndex = 5046;

	struct alignas(4) Index
	{
		::System::Int32 _value; // 0x10

		::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_INDEX__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Index FromStart(::System::Int32 a1)
		{
			return ((::System::Index(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_FROMSTART_OFFSET))(a1);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean get_IsFromEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GET_ISFROMEND_OFFSET))(this);
		}

		::System::Int32 GetOffset(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GETOFFSET_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Index a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Index))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Index op_Implicit(::System::Int32 a1)
		{
			return ((::System::Index(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_OP_IMPLICIT_OFFSET))(a1);
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
