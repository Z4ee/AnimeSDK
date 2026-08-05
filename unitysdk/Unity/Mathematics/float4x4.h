#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float4.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT4X4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA61800)
#define UNITY_MATHEMATICS_FLOAT4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0xA616F0)
#define UNITY_MATHEMATICS_FLOAT4X4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA61810)
#define UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA622E0)
#define UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA618E0)
#define UNITY_MATHEMATICS_FLOAT4X4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBD2060)
#define UNITY_MATHEMATICS_FLOAT4X4__CTOR_OFFSET UNITYSDK_OFFSET(0xA61580)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float4x4_TypeDefinitionIndex = 32735;

	struct alignas(4) float4x4
	{
		static ::Unity::Mathematics::float4x4* StaticGet_identity()
		{
			return (::Unity::Mathematics::float4x4*)Il2CppClass::FromTypeDefinitionIndex(float4x4_TypeDefinitionIndex)->GetStaticField(0x7E30);
		}
		::Unity::Mathematics::float4 c0; // 0x10
		::Unity::Mathematics::float4 c1; // 0x20
		::Unity::Mathematics::float4 c2; // 0x30
		::Unity::Mathematics::float4 c3; // 0x40

		::System::Void _ctor(::System::Single m00, ::System::Single m01, ::System::Single m02, ::System::Single m03, ::System::Single m10, ::System::Single m11, ::System::Single m12, ::System::Single m13, ::System::Single m20, ::System::Single m21, ::System::Single m22, ::System::Single m23, ::System::Single m30, ::System::Single m31, ::System::Single m32, ::System::Single m33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4__CTOR_OFFSET))(this, m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::Unity::Mathematics::float4x4 rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::float4x4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_EQUALS_OFFSET))(this, rhs);
		}

		::System::Boolean Equals_1(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_EQUALS_1_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT4X4_TOSTRING_1_OFFSET))(this, format, formatProvider);
		}
	};
}
