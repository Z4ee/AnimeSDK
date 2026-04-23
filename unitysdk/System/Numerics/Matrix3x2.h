#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_MATRIX3X2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22CEC60)
#define SYSTEM_NUMERICS_MATRIX3X2_EQUALS_OFFSET UNITYSDK_OFFSET(0x22CEC00)
#define SYSTEM_NUMERICS_MATRIX3X2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22CED10)
#define SYSTEM_NUMERICS_MATRIX3X2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22CED00)
#define SYSTEM_NUMERICS_MATRIX3X2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F753F0)
#define SYSTEM_NUMERICS_MATRIX3X2__CTOR_OFFSET UNITYSDK_OFFSET(0x22CEBC0)

namespace System::Numerics
{
	inline static constexpr unsigned int Matrix3x2_TypeDefinitionIndex = 4877;

	struct alignas(4) Matrix3x2
	{
		static ::System::Numerics::Matrix3x2* StaticGet__identity()
		{
			return (::System::Numerics::Matrix3x2*)Il2CppClass::FromTypeDefinitionIndex(Matrix3x2_TypeDefinitionIndex)->GetStaticField(0x1D0);
		}
		::System::Single M11; // 0x10
		::System::Single M12; // 0x14
		::System::Single M21; // 0x18
		::System::Single M22; // 0x1C
		::System::Single M31; // 0x20
		::System::Single M32; // 0x24

		::System::Void _ctor(::System::Single m11, ::System::Single m12, ::System::Single m21, ::System::Single m22, ::System::Single m31, ::System::Single m32)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2__CTOR_OFFSET))(this, m11, m12, m21, m22, m31, m32);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Numerics::Matrix3x2 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Matrix3x2))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2_EQUALS_1_OFFSET))(this, obj);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_MATRIX3X2_GETHASHCODE_OFFSET))(this);
		}
	};
}
