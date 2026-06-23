#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA85920)
#define UNITY_MATHEMATICS_FLOAT3_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C4230)
#define UNITY_MATHEMATICS_FLOAT3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA859F0)
#define UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E87D630)
#define UNITY_MATHEMATICS_FLOAT3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA85AE0)
#define UNITY_MATHEMATICS_FLOAT3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA85A10)
#define UNITY_MATHEMATICS_FLOAT3__CTOR_OFFSET UNITYSDK_OFFSET(0x5D9040)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float3_TypeDefinitionIndex = 32110;

	struct alignas(4) float3
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3__CTOR_OFFSET))(this, x, y, z);
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
