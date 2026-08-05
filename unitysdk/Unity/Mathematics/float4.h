#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA60EB0)
#define UNITY_MATHEMATICS_FLOAT4_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0F500)
#define UNITY_MATHEMATICS_FLOAT4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA60EC0)
#define UNITY_MATHEMATICS_FLOAT4_GET_WWWW_OFFSET UNITYSDK_OFFSET(0xA60EA0)
#define UNITY_MATHEMATICS_FLOAT4_GET_WWWX_OFFSET UNITYSDK_OFFSET(0xA60E80)
#define UNITY_MATHEMATICS_FLOAT4_GET_WZYX_OFFSET UNITYSDK_OFFSET(0xA60E70)
#define UNITY_MATHEMATICS_FLOAT4_GET_XYZX_OFFSET UNITYSDK_OFFSET(0xA60DC0)
#define UNITY_MATHEMATICS_FLOAT4_GET_YZXY_OFFSET UNITYSDK_OFFSET(0xA60DE0)
#define UNITY_MATHEMATICS_FLOAT4_GET_YZXZ_OFFSET UNITYSDK_OFFSET(0xA60E00)
#define UNITY_MATHEMATICS_FLOAT4_GET_ZWXY_OFFSET UNITYSDK_OFFSET(0xA60E60)
#define UNITY_MATHEMATICS_FLOAT4_GET_ZXYY_OFFSET UNITYSDK_OFFSET(0xA60E20)
#define UNITY_MATHEMATICS_FLOAT4_GET_ZXYZ_OFFSET UNITYSDK_OFFSET(0xA60E40)
#define UNITY_MATHEMATICS_FLOAT4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1EBCFE30)
#define UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1EBCFDF0)
#define UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1EBCFE10)
#define UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EBCFDD0)
#define UNITY_MATHEMATICS_FLOAT4_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1EBCFE50)
#define UNITY_MATHEMATICS_FLOAT4_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA61240)
#define UNITY_MATHEMATICS_FLOAT4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA60F10)
#define UNITY_MATHEMATICS_FLOAT4__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA12F80)
#define UNITY_MATHEMATICS_FLOAT4__CTOR_OFFSET UNITYSDK_OFFSET(0x5E7E90)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float4_TypeDefinitionIndex = 32734;

	struct alignas(4) float4
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4__CTOR_OFFSET))(this, x, y, z, w);
		}

		/*
		::System::Void _ctor_1(::Unity::Mathematics::float3 xyz, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4__CTOR_1_OFFSET))(this, xyz, w);
		}
		*/

		static ::Unity::Mathematics::float4 op_Multiply(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::float4 op_Multiply_1(::Unity::Mathematics::float4 lhs, ::System::Single rhs)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float4, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_1_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::float4 op_Multiply_2(::System::Single lhs, ::Unity::Mathematics::float4 rhs)
		{
			return ((::Unity::Mathematics::float4(*)(::System::Single, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_MULTIPLY_2_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::float4 op_Addition(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_ADDITION_OFFSET))(lhs, rhs);
		}

		static ::Unity::Mathematics::float4 op_Subtraction(::Unity::Mathematics::float4 lhs, ::Unity::Mathematics::float4 rhs)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_OP_SUBTRACTION_OFFSET))(lhs, rhs);
		}

		::Unity::Mathematics::float4 get_xyzx()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_XYZX_OFFSET))(this);
		}

		::Unity::Mathematics::float4 get_yzxy()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_YZXY_OFFSET))(this);
		}

		::Unity::Mathematics::float4 get_yzxz()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_YZXZ_OFFSET))(this);
		}

		::Unity::Mathematics::float4 get_zxyy()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_ZXYY_OFFSET))(this);
		}

		::Unity::Mathematics::float4 get_zxyz()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_ZXYZ_OFFSET))(this);
		}

		::Unity::Mathematics::float4 get_zwxy()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_ZWXY_OFFSET))(this);
		}

		::Unity::Mathematics::float4 get_wzyx()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_WZYX_OFFSET))(this);
		}

		::Unity::Mathematics::float4 get_wwwx()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_WWWX_OFFSET))(this);
		}

		::Unity::Mathematics::float4 get_wwww()
		{
			return ((::Unity::Mathematics::float4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GET_WWWW_OFFSET))(this);
		}

		::System::Boolean Equals(::Unity::Mathematics::float4 rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_EQUALS_OFFSET))(this, rhs);
		}

		::System::Boolean Equals_1(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_EQUALS_1_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4_TOSTRING_1_OFFSET))(this, format, formatProvider);
		}
	};
}
