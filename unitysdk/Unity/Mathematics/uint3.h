#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_UINT3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA637C0)
#define UNITY_MATHEMATICS_UINT3_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0F0F0)
#define UNITY_MATHEMATICS_UINT3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA63880)
#define UNITY_MATHEMATICS_UINT3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1EBD4E10)
#define UNITY_MATHEMATICS_UINT3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EBD4DE0)
#define UNITY_MATHEMATICS_UINT3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA63960)
#define UNITY_MATHEMATICS_UINT3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA638A0)
#define UNITY_MATHEMATICS_UINT3__CTOR_OFFSET UNITYSDK_OFFSET(0x586780)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int uint3_TypeDefinitionIndex = 32738;

	struct alignas(4) uint3
	{
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14
		::System::UInt32 z; // 0x18

		::System::Void _ctor(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3__CTOR_OFFSET))(this, x, y, z);
		}

		static ::Unity::Mathematics::uint3 op_Multiply(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs)
		{
			return ((::Unity::Mathematics::uint3(*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::uint3 op_Addition(::Unity::Mathematics::uint3 lhs, ::Unity::Mathematics::uint3 rhs)
		{
			return ((::Unity::Mathematics::uint3(*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_OP_ADDITION_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::Unity::Mathematics::uint3 rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::uint3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_EQUALS_OFFSET))(this, rhs);
		}

		::System::Boolean Equals_1(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_EQUALS_1_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_TOSTRING_1_OFFSET))(this, format, formatProvider);
		}
	};
}
