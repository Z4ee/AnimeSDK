#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_VECTOR3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22CF540)
#define SYSTEM_NUMERICS_VECTOR3_EQUALS_OFFSET UNITYSDK_OFFSET(0x22CF420)
#define SYSTEM_NUMERICS_VECTOR3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22CF360)
#define SYSTEM_NUMERICS_VECTOR3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x22CF530)
#define SYSTEM_NUMERICS_VECTOR3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22CF4A0)
#define SYSTEM_NUMERICS_VECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0xD4E60)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector3_TypeDefinitionIndex = 4885;

	struct alignas(4) Vector3
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3__CTOR_OFFSET))(this, x, y, z);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_EQUALS_OFFSET))(this, obj);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_TOSTRING_1_OFFSET))(this, format, formatProvider);
		}

		::System::Boolean Equals_1(::System::Numerics::Vector3 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_EQUALS_1_OFFSET))(this, other);
		}
	};
}
