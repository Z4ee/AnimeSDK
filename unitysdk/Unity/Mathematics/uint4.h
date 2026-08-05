#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_UINT4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA63A30)
#define UNITY_MATHEMATICS_UINT4_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0FDD0)
#define UNITY_MATHEMATICS_UINT4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA63A40)
#define UNITY_MATHEMATICS_UINT4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1EBD5130)
#define UNITY_MATHEMATICS_UINT4_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1EBD5170)
#define UNITY_MATHEMATICS_UINT4_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1EBD5190)
#define UNITY_MATHEMATICS_UINT4_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x1EBD51B0)
#define UNITY_MATHEMATICS_UINT4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EBD50F0)
#define UNITY_MATHEMATICS_UINT4_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1EBD5150)
#define UNITY_MATHEMATICS_UINT4_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA63DB0)
#define UNITY_MATHEMATICS_UINT4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA63A90)
#define UNITY_MATHEMATICS_UINT4__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0FCA0)
#define UNITY_MATHEMATICS_UINT4__CTOR_OFFSET UNITYSDK_OFFSET(0x6245C0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int uint4_TypeDefinitionIndex = 32739;

	struct alignas(4) uint4
	{
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14
		::System::UInt32 z; // 0x18
		::System::UInt32 w; // 0x1C

		::System::Void _ctor(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z, ::System::UInt32 w)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4__CTOR_OFFSET))(this, x, y, z, w);
		}

		::System::Void _ctor_1(::System::Int32 v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4__CTOR_1_OFFSET))(this, v);
		}

		static ::Unity::Mathematics::uint4 op_Multiply(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::uint4 op_Addition(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_ADDITION_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::uint4 op_OnesComplement(::Unity::Mathematics::uint4 val)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_ONESCOMPLEMENT_OFFSET))(val);
		}

		static ::Unity::Mathematics::uint4 op_BitwiseAnd(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_BITWISEAND_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::uint4 op_BitwiseOr(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_BITWISEOR_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::uint4 op_ExclusiveOr(::Unity::Mathematics::uint4 lhs, ::Unity::Mathematics::uint4 rhs)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_EXCLUSIVEOR_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::Unity::Mathematics::uint4 rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_EQUALS_OFFSET))(this, rhs);
		}

		::System::Boolean Equals_1(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_EQUALS_1_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_TOSTRING_1_OFFSET))(this, format, formatProvider);
		}
	};
}
