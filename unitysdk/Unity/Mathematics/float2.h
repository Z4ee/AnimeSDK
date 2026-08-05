#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA5FA50)
#define UNITY_MATHEMATICS_FLOAT2_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0DFF0)
#define UNITY_MATHEMATICS_FLOAT2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA5FB20)
#define UNITY_MATHEMATICS_FLOAT2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1EBCE790)
#define UNITY_MATHEMATICS_FLOAT2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA5FC00)
#define UNITY_MATHEMATICS_FLOAT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA5FB50)
#define UNITY_MATHEMATICS_FLOAT2__CTOR_OFFSET UNITYSDK_OFFSET(0x4E4210)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float2_TypeDefinitionIndex = 32731;

	struct alignas(4) float2
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14

		::System::Void _ctor(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2__CTOR_OFFSET))(this, x, y);
		}

		static ::Unity::Mathematics::float2 op_Division(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs)
		{
			return ((::Unity::Mathematics::float2(*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_OP_DIVISION_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::Unity::Mathematics::float2 rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_EQUALS_OFFSET))(this, rhs);
		}

		::System::Boolean Equals_1(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_EQUALS_1_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_TOSTRING_1_OFFSET))(this, format, formatProvider);
		}
	};
}
