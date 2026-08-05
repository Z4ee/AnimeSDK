#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_UINT2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA63580)
#define UNITY_MATHEMATICS_UINT2_EQUALS_OFFSET UNITYSDK_OFFSET(0x6340C0)
#define UNITY_MATHEMATICS_UINT2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA63640)
#define UNITY_MATHEMATICS_UINT2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EBD4B60)
#define UNITY_MATHEMATICS_UINT2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA63710)
#define UNITY_MATHEMATICS_UINT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA63670)
#define UNITY_MATHEMATICS_UINT2__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int uint2_TypeDefinitionIndex = 32737;

	struct alignas(4) uint2
	{
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14

		::System::Void _ctor(::System::UInt32 x, ::System::UInt32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2__CTOR_OFFSET))(this, x, y);
		}

		static ::Unity::Mathematics::uint2 op_Multiply(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs)
		{
			return ((::Unity::Mathematics::uint2(*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::Unity::Mathematics::uint2 rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::uint2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_EQUALS_OFFSET))(this, rhs);
		}

		::System::Boolean Equals_1(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_EQUALS_1_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_TOSTRING_1_OFFSET))(this, format, formatProvider);
		}
	};
}
