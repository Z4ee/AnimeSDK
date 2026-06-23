#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/uint3.h"

#define UNITY_MATHEMATICS_MATH_ASINT_OFFSET UNITYSDK_OFFSET(0x1E87D670)
#define UNITY_MATHEMATICS_MATH_ASUINT_1_OFFSET UNITYSDK_OFFSET(0x1E87D690)
#define UNITY_MATHEMATICS_MATH_ASUINT_OFFSET UNITYSDK_OFFSET(0x1E87D680)
#define UNITY_MATHEMATICS_MATH_CSUM_OFFSET UNITYSDK_OFFSET(0x1E87D6A0)
#define UNITY_MATHEMATICS_MATH_HASH_1_OFFSET UNITYSDK_OFFSET(0x1E87D6C0)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x1E87D650)
#define UNITY_MATHEMATICS_MATH_UINT3_OFFSET UNITYSDK_OFFSET(0x1E87D6B0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int math_TypeDefinitionIndex = 32108;

	class math : public ::System::Object
	{
	public:
		static ::System::UInt32 hash(::Unity::Mathematics::float3 v)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(v);
		}

		static ::System::Int32 asint(::System::Single x)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASINT_OFFSET))(x);
		}

		static ::System::UInt32 asuint(::System::Single x)
		{
			return ((::System::UInt32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASUINT_OFFSET))(x);
		}

		static ::Unity::Mathematics::uint3 asuint_1(::Unity::Mathematics::float3 x)
		{
			return ((::Unity::Mathematics::uint3(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASUINT_1_OFFSET))(x);
		}

		static ::System::UInt32 csum(::Unity::Mathematics::uint3 x)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::uint3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CSUM_OFFSET))(x);
		}

		static ::Unity::Mathematics::uint3 uint3(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::Unity::Mathematics::uint3(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_UINT3_OFFSET))(x, y, z);
		}

		static ::System::UInt32 hash_1(::Unity::Mathematics::uint3 v)
		{
			return ((::System::UInt32(*)(::Unity::Mathematics::uint3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_1_OFFSET))(v);
		}
	};
}
