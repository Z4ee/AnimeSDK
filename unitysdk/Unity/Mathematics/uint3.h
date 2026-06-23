#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_UINT3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA85BC0)
#define UNITY_MATHEMATICS_UINT3_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C4980)
#define UNITY_MATHEMATICS_UINT3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA85C80)
#define UNITY_MATHEMATICS_UINT3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E87D6F0)
#define UNITY_MATHEMATICS_UINT3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA85D60)
#define UNITY_MATHEMATICS_UINT3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA85CA0)
#define UNITY_MATHEMATICS_UINT3__CTOR_OFFSET UNITYSDK_OFFSET(0x4E6C30)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int uint3_TypeDefinitionIndex = 32111;

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
