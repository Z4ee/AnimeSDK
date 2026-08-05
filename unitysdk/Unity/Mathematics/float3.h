#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA5FD20)
#define UNITY_MATHEMATICS_FLOAT3_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0E9C0)
#define UNITY_MATHEMATICS_FLOAT3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA5FDF0)
#define UNITY_MATHEMATICS_FLOAT3_GET_XYZ_OFFSET UNITYSDK_OFFSET(0xA5FCE0)
#define UNITY_MATHEMATICS_FLOAT3_GET_YXXY_OFFSET UNITYSDK_OFFSET(0xA5FCC0)
#define UNITY_MATHEMATICS_FLOAT3_GET_YZX_OFFSET UNITYSDK_OFFSET(0xA5FD00)
#define UNITY_MATHEMATICS_FLOAT3_GET_ZZYZ_OFFSET UNITYSDK_OFFSET(0xA5FCD0)
#define UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EBCEE40)
#define UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1EBCEAA0)
#define UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1EBCEAC0)
#define UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EBCEA70)
#define UNITY_MATHEMATICS_FLOAT3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1EBCEAE0)
#define UNITY_MATHEMATICS_FLOAT3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA5FEE0)
#define UNITY_MATHEMATICS_FLOAT3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA5FE10)
#define UNITY_MATHEMATICS_FLOAT3__CTOR_OFFSET UNITYSDK_OFFSET(0x5CABA0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float3_TypeDefinitionIndex = 32732;

	struct alignas(4) float3
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3__CTOR_OFFSET))(this, x, y, z);
		}

		static ::Unity::Mathematics::float3 op_Multiply(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::float3 op_Multiply_1(::Unity::Mathematics::float3 lhs, ::System::Single rhs)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_1_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::float3 op_Multiply_2(::System::Single lhs, ::Unity::Mathematics::float3 rhs)
		{
			return ((::Unity::Mathematics::float3(*)(::System::Single, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_2_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::float3 op_Subtraction(::Unity::Mathematics::float3 lhs, ::Unity::Mathematics::float3 rhs)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_SUBTRACTION_OFFSET))(lhs, rhs);
		}

		/*
		::Unity::Mathematics::float4 get_yxxy()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GET_YXXY_OFFSET))(this);
		}
		*/

		/*
		::Unity::Mathematics::float4 get_zzyz()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GET_ZZYZ_OFFSET))(this);
		}
		*/

		::Unity::Mathematics::float3 get_xyz()
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GET_XYZ_OFFSET))(this);
		}

		::Unity::Mathematics::float3 get_yzx()
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GET_YZX_OFFSET))(this);
		}

		::System::Boolean Equals(::Unity::Mathematics::float3 rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_EQUALS_OFFSET))(this, rhs);
		}

		::System::Boolean Equals_1(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_EQUALS_1_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_TOSTRING_1_OFFSET))(this, format, formatProvider);
		}

		/*
		static ::Unity::Mathematics::float3 op_Implicit(::UnityEngine::Vector3 v)
		{
			return ((::Unity::Mathematics::float3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_OFFSET))(v);
		}
		*/
	};
}
