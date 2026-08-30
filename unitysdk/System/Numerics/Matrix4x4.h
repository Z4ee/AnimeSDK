#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_MATRIX4X4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B9FA60)
#define SYSTEM_NUMERICS_MATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B9F950)
#define SYSTEM_NUMERICS_MATRIX4X4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B9FA80)
#define SYSTEM_NUMERICS_MATRIX4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B9FA70)
#define SYSTEM_NUMERICS_MATRIX4X4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79E940)
#define SYSTEM_NUMERICS_MATRIX4X4__CTOR_OFFSET UNITYSDK_OFFSET(0x3B9F7E0)

namespace System::Numerics
{
	inline static constexpr unsigned int Matrix4x4_TypeDefinitionIndex = 3857;

	struct alignas(4) Matrix4x4
	{
		static ::System::Numerics::Matrix4x4* StaticGet__identity()
		{
			return (::System::Numerics::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(Matrix4x4_TypeDefinitionIndex)->GetStaticField(0xB0);
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

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Single a14, ::System::Single a15, ::System::Single a16)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Numerics::Matrix4x4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Matrix4x4))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX4X4_EQUALS_1_OFFSET))(this, a1);
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
