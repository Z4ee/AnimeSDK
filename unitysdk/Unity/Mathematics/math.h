#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float2.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/float3x3.h"
#include "unitysdk/Unity/Mathematics/float4.h"
#include "unitysdk/Unity/Mathematics/float4x4.h"
#include "unitysdk/Unity/Mathematics/quaternion.h"
#include "unitysdk/Unity/Mathematics/uint2.h"
#include "unitysdk/Unity/Mathematics/uint3.h"
#include "unitysdk/Unity/Mathematics/uint4.h"

#define UNITY_MATHEMATICS_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x1EBD2460)
#define UNITY_MATHEMATICS_MATH_ASFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1EBD2390)
#define UNITY_MATHEMATICS_MATH_ASFLOAT_2_OFFSET UNITYSDK_OFFSET(0x1EBD23A0)
#define UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1EBD2380)
#define UNITY_MATHEMATICS_MATH_ASINT_OFFSET UNITYSDK_OFFSET(0x1EBD2330)
#define UNITY_MATHEMATICS_MATH_ASUINT_1_OFFSET UNITYSDK_OFFSET(0x1EBD2350)
#define UNITY_MATHEMATICS_MATH_ASUINT_2_OFFSET UNITYSDK_OFFSET(0x1EBD2360)
#define UNITY_MATHEMATICS_MATH_ASUINT_3_OFFSET UNITYSDK_OFFSET(0x1EBD2370)
#define UNITY_MATHEMATICS_MATH_ASUINT_OFFSET UNITYSDK_OFFSET(0x1EBD2340)
#define UNITY_MATHEMATICS_MATH_COS_1_OFFSET UNITYSDK_OFFSET(0x1EBD24F0)
#define UNITY_MATHEMATICS_MATH_COS_OFFSET UNITYSDK_OFFSET(0x1EBD24D0)
#define UNITY_MATHEMATICS_MATH_CROSS_OFFSET UNITYSDK_OFFSET(0x1EBD2730)
#define UNITY_MATHEMATICS_MATH_CSUM_1_OFFSET UNITYSDK_OFFSET(0x1EBD28E0)
#define UNITY_MATHEMATICS_MATH_CSUM_2_OFFSET UNITYSDK_OFFSET(0x1EBD28F0)
#define UNITY_MATHEMATICS_MATH_CSUM_OFFSET UNITYSDK_OFFSET(0x1EBD28D0)
#define UNITY_MATHEMATICS_MATH_DOT_1_OFFSET UNITYSDK_OFFSET(0x1EBD24A0)
#define UNITY_MATHEMATICS_MATH_DOT_OFFSET UNITYSDK_OFFSET(0x1EBD2470)
#define UNITY_MATHEMATICS_MATH_FLOAT3X3_OFFSET UNITYSDK_OFFSET(0x1EBD2120)
#define UNITY_MATHEMATICS_MATH_FLOAT3_OFFSET UNITYSDK_OFFSET(0x1EBD20E0)
#define UNITY_MATHEMATICS_MATH_FLOAT4_1_OFFSET UNITYSDK_OFFSET(0x1EBD21F0)
#define UNITY_MATHEMATICS_MATH_FLOAT4_OFFSET UNITYSDK_OFFSET(0x1EBD21D0)
#define UNITY_MATHEMATICS_MATH_HASH_1_OFFSET UNITYSDK_OFFSET(0x1EBD2100)
#define UNITY_MATHEMATICS_MATH_HASH_2_OFFSET UNITYSDK_OFFSET(0x1EBD2150)
#define UNITY_MATHEMATICS_MATH_HASH_3_OFFSET UNITYSDK_OFFSET(0x1EBD2210)
#define UNITY_MATHEMATICS_MATH_HASH_4_OFFSET UNITYSDK_OFFSET(0x1EBD2260)
#define UNITY_MATHEMATICS_MATH_HASH_5_OFFSET UNITYSDK_OFFSET(0x1EBD2CE0)
#define UNITY_MATHEMATICS_MATH_HASH_6_OFFSET UNITYSDK_OFFSET(0x1EBD2D40)
#define UNITY_MATHEMATICS_MATH_HASH_7_OFFSET UNITYSDK_OFFSET(0x1EBD2D80)
#define UNITY_MATHEMATICS_MATH_HASH_8_OFFSET UNITYSDK_OFFSET(0x1EBD2DE0)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x1EBD20B0)
#define UNITY_MATHEMATICS_MATH_ISFINITE_OFFSET UNITYSDK_OFFSET(0x1EBD23B0)
#define UNITY_MATHEMATICS_MATH_ISNAN_OFFSET UNITYSDK_OFFSET(0x1EBD23D0)
#define UNITY_MATHEMATICS_MATH_LENGTHSQ_OFFSET UNITYSDK_OFFSET(0x1EBD2710)
#define UNITY_MATHEMATICS_MATH_LENGTH_OFFSET UNITYSDK_OFFSET(0x1EBD26E0)
#define UNITY_MATHEMATICS_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x1EBD2430)
#define UNITY_MATHEMATICS_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x1EBD23F0)
#define UNITY_MATHEMATICS_MATH_MUL_1_OFFSET UNITYSDK_OFFSET(0x1EBD2C60)
#define UNITY_MATHEMATICS_MATH_MUL_OFFSET UNITYSDK_OFFSET(0x1EBD2930)
#define UNITY_MATHEMATICS_MATH_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1EBD2690)
#define UNITY_MATHEMATICS_MATH_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1EBD2640)
#define UNITY_MATHEMATICS_MATH_QUATERNION_1_OFFSET UNITYSDK_OFFSET(0x1EBD29C0)
#define UNITY_MATHEMATICS_MATH_QUATERNION_2_OFFSET UNITYSDK_OFFSET(0x1EBD29D0)
#define UNITY_MATHEMATICS_MATH_QUATERNION_OFFSET UNITYSDK_OFFSET(0x1EBD29A0)
#define UNITY_MATHEMATICS_MATH_RADIANS_OFFSET UNITYSDK_OFFSET(0x1EBD28C0)
#define UNITY_MATHEMATICS_MATH_RSQRT_OFFSET UNITYSDK_OFFSET(0x1EBD2610)
#define UNITY_MATHEMATICS_MATH_SELECT_OFFSET UNITYSDK_OFFSET(0x1EBD2780)
#define UNITY_MATHEMATICS_MATH_SINCOS_1_OFFSET UNITYSDK_OFFSET(0x1EBD27F0)
#define UNITY_MATHEMATICS_MATH_SINCOS_OFFSET UNITYSDK_OFFSET(0x1EBD27A0)
#define UNITY_MATHEMATICS_MATH_SIN_1_OFFSET UNITYSDK_OFFSET(0x1EBD2580)
#define UNITY_MATHEMATICS_MATH_SIN_OFFSET UNITYSDK_OFFSET(0x1EBD2560)
#define UNITY_MATHEMATICS_MATH_SQRT_OFFSET UNITYSDK_OFFSET(0x1EBD25F0)
#define UNITY_MATHEMATICS_MATH_UINT2_OFFSET UNITYSDK_OFFSET(0x1EBD2D30)
#define UNITY_MATHEMATICS_MATH_UINT3_OFFSET UNITYSDK_OFFSET(0x1EBD2D70)
#define UNITY_MATHEMATICS_MATH_UINT4_1_OFFSET UNITYSDK_OFFSET(0x1EBD2DC0)
#define UNITY_MATHEMATICS_MATH_UINT4_OFFSET UNITYSDK_OFFSET(0x1EBD2DA0)
#define UNITY_MATHEMATICS_MATH_UP_OFFSET UNITYSDK_OFFSET(0x1EBD2910)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int math_TypeDefinitionIndex = 32728;

	class math : public ::System::Object
	{
	public:
		static ::System::UInt32 hash(::Unity::Mathematics::float2 v)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(v);
		}

		static ::Unity::Mathematics::float3 float3(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::Unity::Mathematics::float3(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_FLOAT3_OFFSET))(x, y, z);
		}

		static ::System::UInt32 hash_1(::Unity::Mathematics::float3 v)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_1_OFFSET))(v);
		}

		static ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2)
		{
			return ((::Unity::Mathematics::float3x3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_FLOAT3X3_OFFSET))(c0, c1, c2);
		}

		static ::System::UInt32 hash_2(::Unity::Mathematics::float3x3 v)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::float3x3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_2_OFFSET))(v);
		}

		static ::Unity::Mathematics::float4 float4(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::Unity::Mathematics::float4(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_FLOAT4_OFFSET))(x, y, z, w);
		}

		static ::Unity::Mathematics::float4 float4_1(::Unity::Mathematics::float3 xyz, ::System::Single w)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float3, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_FLOAT4_1_OFFSET))(xyz, w);
		}

		static ::System::UInt32 hash_3(::Unity::Mathematics::float4 v)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_3_OFFSET))(v);
		}

		static ::System::UInt32 hash_4(::Unity::Mathematics::float4x4 v)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::float4x4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_4_OFFSET))(v);
		}

		static ::System::Int32 asint(::System::Single x)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASINT_OFFSET))(x);
		}

		static ::System::UInt32 asuint(::System::Single x)
		{
			return ((::System::UInt32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASUINT_OFFSET))(x);
		}

		static ::Unity::Mathematics::uint2 asuint_1(::Unity::Mathematics::float2 x)
		{
			return ((::Unity::Mathematics::uint2(*)(::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASUINT_1_OFFSET))(x);
		}

		static ::Unity::Mathematics::uint3 asuint_2(::Unity::Mathematics::float3 x)
		{
			return ((::Unity::Mathematics::uint3(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASUINT_2_OFFSET))(x);
		}

		static ::Unity::Mathematics::uint4 asuint_3(::Unity::Mathematics::float4 x)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASUINT_3_OFFSET))(x);
		}

		static ::System::Single asfloat(::System::Int32 x)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET))(x);
		}

		static ::System::Single asfloat_1(::System::UInt32 x)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASFLOAT_1_OFFSET))(x);
		}

		static ::Unity::Mathematics::float4 asfloat_2(::Unity::Mathematics::uint4 x)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASFLOAT_2_OFFSET))(x);
		}

		static ::System::Boolean isfinite(::System::Single x)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ISFINITE_OFFSET))(x);
		}

		static ::System::Boolean isnan(::System::Single x)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ISNAN_OFFSET))(x);
		}

		static ::System::Single min(::System::Single x, ::System::Single y)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MIN_OFFSET))(x, y);
		}

		static ::System::Single max(::System::Single x, ::System::Single y)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MAX_OFFSET))(x, y);
		}

		static ::System::Single abs(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ABS_OFFSET))(x);
		}

		static ::System::Single dot(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y)
		{
			return ((::System::Single(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_DOT_OFFSET))(x, y);
		}

		static ::System::Single dot_1(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y)
		{
			return ((::System::Single(*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_DOT_1_OFFSET))(x, y);
		}

		static ::System::Single cos(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_COS_OFFSET))(x);
		}

		static ::Unity::Mathematics::float3 cos_1(::Unity::Mathematics::float3 x)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_COS_1_OFFSET))(x);
		}

		static ::System::Single sin(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SIN_OFFSET))(x);
		}

		static ::Unity::Mathematics::float3 sin_1(::Unity::Mathematics::float3 x)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SIN_1_OFFSET))(x);
		}

		static ::System::Single sqrt(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SQRT_OFFSET))(x);
		}

		static ::System::Single rsqrt(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_RSQRT_OFFSET))(x);
		}

		static ::Unity::Mathematics::float3 normalize(::Unity::Mathematics::float3 x)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_NORMALIZE_OFFSET))(x);
		}

		static ::Unity::Mathematics::float4 normalize_1(::Unity::Mathematics::float4 x)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_NORMALIZE_1_OFFSET))(x);
		}

		static ::System::Single length(::Unity::Mathematics::float3 x)
		{
			return ((::System::Single(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_LENGTH_OFFSET))(x);
		}

		static ::System::Single lengthsq(::Unity::Mathematics::float3 x)
		{
			return ((::System::Single(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_LENGTHSQ_OFFSET))(x);
		}

		static ::Unity::Mathematics::float3 cross(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CROSS_OFFSET))(x, y);
		}

		static ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::System::Boolean c)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SELECT_OFFSET))(a, b, c);
		}

		static ::System::Void sincos(::System::Single x, ::System::Single& s, ::System::Single& c)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SINCOS_OFFSET))(x, s, c);
		}

		static ::System::Void sincos_1(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3& s, ::Unity::Mathematics::float3& c)
		{
			return ((::System::Void(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3&, ::Unity::Mathematics::float3&))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SINCOS_1_OFFSET))(x, s, c);
		}

		static ::System::Single radians(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_RADIANS_OFFSET))(x);
		}

		static ::System::UInt32 csum(::Unity::Mathematics::uint2 x)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::uint2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CSUM_OFFSET))(x);
		}

		static ::System::UInt32 csum_1(::Unity::Mathematics::uint3 x)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::uint3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CSUM_1_OFFSET))(x);
		}

		static ::System::UInt32 csum_2(::Unity::Mathematics::uint4 x)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CSUM_2_OFFSET))(x);
		}

		static ::Unity::Mathematics::float3 up()
		{
			return ((::Unity::Mathematics::float3(*)())((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_UP_OFFSET))();
		}

		static ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4 b)
		{
			return ((::Unity::Mathematics::float4(*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MUL_OFFSET))(a, b);
		}

		static ::Unity::Mathematics::quaternion quaternion(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::Unity::Mathematics::quaternion(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_QUATERNION_OFFSET))(x, y, z, w);
		}

		static ::Unity::Mathematics::quaternion quaternion_1(::Unity::Mathematics::float4 value)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_QUATERNION_1_OFFSET))(value);
		}

		static ::Unity::Mathematics::quaternion quaternion_2(::Unity::Mathematics::float3x3 m)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3x3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_QUATERNION_2_OFFSET))(m);
		}

		static ::Unity::Mathematics::quaternion mul_1(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::quaternion, ::Unity::Mathematics::quaternion))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MUL_1_OFFSET))(a, b);
		}

		static ::System::UInt32 hash_5(::Unity::Mathematics::quaternion q)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::quaternion))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_5_OFFSET))(q);
		}

		static ::Unity::Mathematics::uint2 uint2(::System::UInt32 x, ::System::UInt32 y)
		{
			return ((::Unity::Mathematics::uint2(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_UINT2_OFFSET))(x, y);
		}

		static ::System::UInt32 hash_6(::Unity::Mathematics::uint2 v)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::uint2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_6_OFFSET))(v);
		}

		static ::Unity::Mathematics::uint3 uint3(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::Unity::Mathematics::uint3(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_UINT3_OFFSET))(x, y, z);
		}

		static ::System::UInt32 hash_7(::Unity::Mathematics::uint3 v)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::uint3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_7_OFFSET))(v);
		}

		static ::Unity::Mathematics::uint4 uint4(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z, ::System::UInt32 w)
		{
			return ((::Unity::Mathematics::uint4(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_UINT4_OFFSET))(x, y, z, w);
		}

		static ::Unity::Mathematics::uint4 uint4_1(::System::Int32 v)
		{
			return ((::Unity::Mathematics::uint4(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_UINT4_1_OFFSET))(v);
		}

		static ::System::UInt32 hash_8(::Unity::Mathematics::uint4 v)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_8_OFFSET))(v);
		}
	};
}
