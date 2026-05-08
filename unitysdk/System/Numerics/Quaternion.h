#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_QUATERNION_CREATEFROMAXISANGLE_OFFSET UNITYSDK_OFFSET(0x1B1DED70)
#define SYSTEM_NUMERICS_QUATERNION_CREATEFROMYAWPITCHROLL_OFFSET UNITYSDK_OFFSET(0x1B1DEDF0)
#define SYSTEM_NUMERICS_QUATERNION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x954230)
#define SYSTEM_NUMERICS_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9197F0)
#define SYSTEM_NUMERICS_QUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9542D0)
#define SYSTEM_NUMERICS_QUATERNION_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1B1DECC0)
#define SYSTEM_NUMERICS_QUATERNION_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1B1DED00)
#define SYSTEM_NUMERICS_QUATERNION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B1DF0A0)
#define SYSTEM_NUMERICS_QUATERNION_SLERP_OFFSET UNITYSDK_OFFSET(0x1B1DEF10)
#define SYSTEM_NUMERICS_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9542C0)
#define SYSTEM_NUMERICS_QUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x41FAF0)

namespace System::Numerics
{
	inline static constexpr unsigned int Quaternion_TypeDefinitionIndex = 6477;

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

		static ::System::Numerics::Quaternion get_Identity()
		{
			return ((::System::Numerics::Quaternion(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_GET_IDENTITY_OFFSET))();
		}

		static ::System::Numerics::Quaternion Normalize(::System::Numerics::Quaternion value)
		{
			return ((::System::Numerics::Quaternion(*)(::System::Numerics::Quaternion))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_NORMALIZE_OFFSET))(value);
		}

		/*
		static ::System::Numerics::Quaternion CreateFromAxisAngle(::System::Numerics::Vector3 axis, ::System::Single angle)
		{
			return ((::System::Numerics::Quaternion(*)(::System::Numerics::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_CREATEFROMAXISANGLE_OFFSET))(axis, angle);
		}
		*/

		static ::System::Numerics::Quaternion CreateFromYawPitchRoll(::System::Single yaw, ::System::Single pitch, ::System::Single roll)
		{
			return ((::System::Numerics::Quaternion(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_CREATEFROMYAWPITCHROLL_OFFSET))(yaw, pitch, roll);
		}

		static ::System::Numerics::Quaternion Slerp(::System::Numerics::Quaternion quaternion1, ::System::Numerics::Quaternion quaternion2, ::System::Single amount)
		{
			return ((::System::Numerics::Quaternion(*)(::System::Numerics::Quaternion, ::System::Numerics::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_SLERP_OFFSET))(quaternion1, quaternion2, amount);
		}

		static ::System::Numerics::Quaternion op_Multiply(::System::Numerics::Quaternion value1, ::System::Numerics::Quaternion value2)
		{
			return ((::System::Numerics::Quaternion(*)(::System::Numerics::Quaternion, ::System::Numerics::Quaternion))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_QUATERNION_OP_MULTIPLY_OFFSET))(value1, value2);
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
