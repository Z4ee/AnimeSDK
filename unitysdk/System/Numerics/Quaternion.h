#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_QUATERNION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20FC480)
#define SYSTEM_NUMERICS_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x20FC440)
#define SYSTEM_NUMERICS_QUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20FC520)
#define SYSTEM_NUMERICS_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20FC510)
#define SYSTEM_NUMERICS_QUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x24C40)

namespace System::Numerics
{
	inline static constexpr unsigned int Quaternion_TypeDefinitionIndex = 4871;

	struct alignas(4) Quaternion
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18
		::System::Single W; // 0x1C

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION__CTOR_OFFSET))(this, x, y, z, w);
		}

		::System::Boolean Equals(::System::Numerics::Quaternion other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Quaternion))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_EQUALS_1_OFFSET))(this, obj);
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
