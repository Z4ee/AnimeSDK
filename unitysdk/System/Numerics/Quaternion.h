#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_QUATERNION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C99900)
#define SYSTEM_NUMERICS_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C91350)
#define SYSTEM_NUMERICS_QUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C999A0)
#define SYSTEM_NUMERICS_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C99990)
#define SYSTEM_NUMERICS_QUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x82E380)

namespace System::Numerics
{
	inline static constexpr unsigned int Quaternion_TypeDefinitionIndex = 3858;

	struct alignas(4) Quaternion
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18
		::System::Single W; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals(::System::Numerics::Quaternion a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Quaternion))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_EQUALS_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_GETHASHCODE_OFFSET))(this);
		}
	};
}
