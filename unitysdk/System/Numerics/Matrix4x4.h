#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_MATRIX4X4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20FC3C0)
#define SYSTEM_NUMERICS_MATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x20FC2B0)
#define SYSTEM_NUMERICS_MATRIX4X4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20FC3E0)
#define SYSTEM_NUMERICS_MATRIX4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20FC3D0)
#define SYSTEM_NUMERICS_MATRIX4X4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1853B480)
#define SYSTEM_NUMERICS_MATRIX4X4__CTOR_OFFSET UNITYSDK_OFFSET(0x20FC140)

namespace System::Numerics
{
	inline static constexpr unsigned int Matrix4x4_TypeDefinitionIndex = 4870;

	struct alignas(4) Matrix4x4
	{
		static ::System::Numerics::Matrix4x4* StaticGet__identity()
		{
			return (::System::Numerics::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(Matrix4x4_TypeDefinitionIndex)->GetStaticField(0x170);
		}
		::System::Single M11; // 0x10
		::System::Single M12; // 0x14
		::System::Single M13; // 0x18
		::System::Single M14; // 0x1C
		::System::Single M21; // 0x20
		::System::Single M22; // 0x24
		::System::Single M23; // 0x28
		::System::Single M24; // 0x2C
		::System::Single M31; // 0x30
		::System::Single M32; // 0x34
		::System::Single M33; // 0x38
		::System::Single M34; // 0x3C
		::System::Single M41; // 0x40
		::System::Single M42; // 0x44
		::System::Single M43; // 0x48
		::System::Single M44; // 0x4C

		::System::Void _ctor(::System::Single m11, ::System::Single m12, ::System::Single m13, ::System::Single m14, ::System::Single m21, ::System::Single m22, ::System::Single m23, ::System::Single m24, ::System::Single m31, ::System::Single m32, ::System::Single m33, ::System::Single m34, ::System::Single m41, ::System::Single m42, ::System::Single m43, ::System::Single m44)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4__CTOR_OFFSET))(this, m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Numerics::Matrix4x4 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Matrix4x4))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_EQUALS_1_OFFSET))(this, obj);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_GETHASHCODE_OFFSET))(this);
		}
	};
}
