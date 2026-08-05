#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT3X3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA60120)
#define UNITY_MATHEMATICS_FLOAT3X3_EQUALS_OFFSET UNITYSDK_OFFSET(0xA600A0)
#define UNITY_MATHEMATICS_FLOAT3X3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA60130)
#define UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA607B0)
#define UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA601B0)
#define UNITY_MATHEMATICS_FLOAT3X3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBCFD50)
#define UNITY_MATHEMATICS_FLOAT3X3__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA60020)
#define UNITY_MATHEMATICS_FLOAT3X3__CTOR_OFFSET UNITYSDK_OFFSET(0xA5FFC0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float3x3_TypeDefinitionIndex = 32733;

	struct alignas(4) float3x3
	{
		static ::Unity::Mathematics::float3x3* StaticGet_identity()
		{
			return (::Unity::Mathematics::float3x3*)Il2CppClass::FromTypeDefinitionIndex(float3x3_TypeDefinitionIndex)->GetStaticField(0x7E00);
		}
		::Unity::Mathematics::float3 c0; // 0x10
		::Unity::Mathematics::float3 c1; // 0x1C
		::Unity::Mathematics::float3 c2; // 0x28

		::System::Void _ctor(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3__CTOR_OFFSET))(this, c0, c1, c2);
		}

		::System::Void _ctor_1(::System::Single m00, ::System::Single m01, ::System::Single m02, ::System::Single m10, ::System::Single m11, ::System::Single m12, ::System::Single m20, ::System::Single m21, ::System::Single m22)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3__CTOR_1_OFFSET))(this, m00, m01, m02, m10, m11, m12, m20, m21, m22);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::Unity::Mathematics::float3x3 rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::float3x3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_EQUALS_OFFSET))(this, rhs);
		}

		::System::Boolean Equals_1(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_EQUALS_1_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3X3_TOSTRING_1_OFFSET))(this, format, formatProvider);
		}
	};
}
