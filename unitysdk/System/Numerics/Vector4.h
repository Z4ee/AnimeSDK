#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_VECTOR4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B9FAE0)
#define SYSTEM_NUMERICS_VECTOR4_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BA00C0)
#define SYSTEM_NUMERICS_VECTOR4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B9FFE0)
#define SYSTEM_NUMERICS_VECTOR4_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3BA01E0)
#define SYSTEM_NUMERICS_VECTOR4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BA0150)
#define SYSTEM_NUMERICS_VECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x3BA01F0)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector4_TypeDefinitionIndex = 3865;

	struct alignas(4) Vector4
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18
		::System::Single W; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR4__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR4_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR4_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR4_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR4_TOSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals_1(::System::Numerics::Vector4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Vector4))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR4_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
