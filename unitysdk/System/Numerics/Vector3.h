#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_VECTOR3_CROSS_OFFSET UNITYSDK_OFFSET(0x1D5C7B30)
#define SYSTEM_NUMERICS_VECTOR3_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1D5C7A60)
#define SYSTEM_NUMERICS_VECTOR3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C4230)
#define SYSTEM_NUMERICS_VECTOR3_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F7AA0)
#define SYSTEM_NUMERICS_VECTOR3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F79E0)
#define SYSTEM_NUMERICS_VECTOR3_LENGTHSQUARED_OFFSET UNITYSDK_OFFSET(0x9C3EF0)
#define SYSTEM_NUMERICS_VECTOR3_MAX_OFFSET UNITYSDK_OFFSET(0x1D5C7DA0)
#define SYSTEM_NUMERICS_VECTOR3_MIN_OFFSET UNITYSDK_OFFSET(0x1D5C7D70)
#define SYSTEM_NUMERICS_VECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1D5C7AB0)
#define SYSTEM_NUMERICS_VECTOR3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1D5C7DD0)
#define SYSTEM_NUMERICS_VECTOR3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D5C7E80)
#define SYSTEM_NUMERICS_VECTOR3_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1D5C7E60)
#define SYSTEM_NUMERICS_VECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1D5C7E30)
#define SYSTEM_NUMERICS_VECTOR3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1D5C7E00)
#define SYSTEM_NUMERICS_VECTOR3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x9F7B70)
#define SYSTEM_NUMERICS_VECTOR3_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x9F7BA0)
#define SYSTEM_NUMERICS_VECTOR3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F7B20)
#define SYSTEM_NUMERICS_VECTOR3_TRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x1D5C7C10)
#define SYSTEM_NUMERICS_VECTOR3_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D5C7B80)
#define SYSTEM_NUMERICS_VECTOR3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x5D9040)
#define SYSTEM_NUMERICS_VECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x643D60)

namespace System::Numerics
{
	inline static constexpr unsigned int Vector3_TypeDefinitionIndex = 6380;

	struct alignas(4) Vector3
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18

		::System::Void _ctor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3__CTOR_1_OFFSET))(this, x, y, z);
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

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* ToString_2(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_TOSTRING_2_OFFSET))(this, format, formatProvider);
		}

		::System::Single LengthSquared()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_LENGTHSQUARED_OFFSET))(this);
		}

		static ::System::Single Distance(::System::Numerics::Vector3 value1, ::System::Numerics::Vector3 value2)
		{
			return ((::System::Single(*)(::System::Numerics::Vector3, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_DISTANCE_OFFSET))(value1, value2);
		}

		static ::System::Numerics::Vector3 Normalize(::System::Numerics::Vector3 value)
		{
			return ((::System::Numerics::Vector3(*)(::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_NORMALIZE_OFFSET))(value);
		}

		static ::System::Numerics::Vector3 Cross(::System::Numerics::Vector3 vector1, ::System::Numerics::Vector3 vector2)
		{
			return ((::System::Numerics::Vector3(*)(::System::Numerics::Vector3, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_CROSS_OFFSET))(vector1, vector2);
		}

		/*
		static ::System::Numerics::Vector3 Transform(::System::Numerics::Vector3 position, ::System::Numerics::Matrix4x4 matrix)
		{
			return ((::System::Numerics::Vector3(*)(::System::Numerics::Vector3, ::System::Numerics::Matrix4x4))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_TRANSFORM_OFFSET))(position, matrix);
		}
		*/

		/*
		static ::System::Numerics::Vector3 Transform_1(::System::Numerics::Vector3 value, ::System::Numerics::Quaternion rotation)
		{
			return ((::System::Numerics::Vector3(*)(::System::Numerics::Vector3, ::System::Numerics::Quaternion))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_TRANSFORM_1_OFFSET))(value, rotation);
		}
		*/

		::System::Boolean Equals_1(::System::Numerics::Vector3 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Numerics::Vector3 Min(::System::Numerics::Vector3 value1, ::System::Numerics::Vector3 value2)
		{
			return ((::System::Numerics::Vector3(*)(::System::Numerics::Vector3, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_MIN_OFFSET))(value1, value2);
		}

		static ::System::Numerics::Vector3 Max(::System::Numerics::Vector3 value1, ::System::Numerics::Vector3 value2)
		{
			return ((::System::Numerics::Vector3(*)(::System::Numerics::Vector3, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_MAX_OFFSET))(value1, value2);
		}

		static ::System::Numerics::Vector3 op_Addition(::System::Numerics::Vector3 left, ::System::Numerics::Vector3 right)
		{
			return ((::System::Numerics::Vector3(*)(::System::Numerics::Vector3, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_OP_ADDITION_OFFSET))(left, right);
		}

		static ::System::Numerics::Vector3 op_Subtraction(::System::Numerics::Vector3 left, ::System::Numerics::Vector3 right)
		{
			return ((::System::Numerics::Vector3(*)(::System::Numerics::Vector3, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_OP_SUBTRACTION_OFFSET))(left, right);
		}

		static ::System::Numerics::Vector3 op_Multiply(::System::Numerics::Vector3 left, ::System::Numerics::Vector3 right)
		{
			return ((::System::Numerics::Vector3(*)(::System::Numerics::Vector3, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_OP_MULTIPLY_OFFSET))(left, right);
		}

		static ::System::Numerics::Vector3 op_Multiply_1(::System::Numerics::Vector3 left, ::System::Single right)
		{
			return ((::System::Numerics::Vector3(*)(::System::Numerics::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_OP_MULTIPLY_1_OFFSET))(left, right);
		}

		static ::System::Boolean op_Equality(::System::Numerics::Vector3 left, ::System::Numerics::Vector3 right)
		{
			return ((::System::Boolean(*)(::System::Numerics::Vector3, ::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_VECTOR3_OP_EQUALITY_OFFSET))(left, right);
		}
	};
}
