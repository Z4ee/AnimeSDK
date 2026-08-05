#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float4.h"
#include "unitysdk/Unity/Mathematics/math_RotationOrder.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_QUATERNION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA62E30)
#define UNITY_MATHEMATICS_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0F500)
#define UNITY_MATHEMATICS_QUATERNION_EULERXYZ_OFFSET UNITYSDK_OFFSET(0x1EBD2E80)
#define UNITY_MATHEMATICS_QUATERNION_EULERXZY_OFFSET UNITYSDK_OFFSET(0x1EBD2FF0)
#define UNITY_MATHEMATICS_QUATERNION_EULERYXZ_OFFSET UNITYSDK_OFFSET(0x1EBD3150)
#define UNITY_MATHEMATICS_QUATERNION_EULERYZX_OFFSET UNITYSDK_OFFSET(0x1EBD32A0)
#define UNITY_MATHEMATICS_QUATERNION_EULERZXY_OFFSET UNITYSDK_OFFSET(0x1EBD3410)
#define UNITY_MATHEMATICS_QUATERNION_EULERZYX_OFFSET UNITYSDK_OFFSET(0x1EBD3550)
#define UNITY_MATHEMATICS_QUATERNION_EULER_1_OFFSET UNITYSDK_OFFSET(0x1EBD3E30)
#define UNITY_MATHEMATICS_QUATERNION_EULER_OFFSET UNITYSDK_OFFSET(0x1EBD36C0)
#define UNITY_MATHEMATICS_QUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA60EC0)
#define UNITY_MATHEMATICS_QUATERNION_LOOKROTATIONSAFE_OFFSET UNITYSDK_OFFSET(0x1EBD3F50)
#define UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EBD2E40)
#define UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EBD2E30)
#define UNITY_MATHEMATICS_QUATERNION_ROTATEZ_OFFSET UNITYSDK_OFFSET(0x1EBD3EF0)
#define UNITY_MATHEMATICS_QUATERNION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA63240)
#define UNITY_MATHEMATICS_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA62F10)
#define UNITY_MATHEMATICS_QUATERNION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBD4B40)
#define UNITY_MATHEMATICS_QUATERNION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x31EB80)
#define UNITY_MATHEMATICS_QUATERNION__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA62CF0)
#define UNITY_MATHEMATICS_QUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x5E7E90)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int quaternion_TypeDefinitionIndex = 32736;

	struct alignas(4) quaternion
	{
		static ::Unity::Mathematics::quaternion* StaticGet_identity()
		{
			return (::Unity::Mathematics::quaternion*)Il2CppClass::FromTypeDefinitionIndex(quaternion_TypeDefinitionIndex)->GetStaticField(0x7E70);
		}
		::Unity::Mathematics::float4 value; // 0x10

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION__CTOR_OFFSET))(this, x, y, z, w);
		}

		::System::Void _ctor_1(::Unity::Mathematics::float4 value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION__CTOR_1_OFFSET))(this, value);
		}

		/*
		::System::Void _ctor_2(::Unity::Mathematics::float3x3 m)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3x3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION__CTOR_2_OFFSET))(this, m);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Quaternion op_Implicit(::Unity::Mathematics::quaternion q)
		{
			return ((::UnityEngine::Quaternion(*)(::Unity::Mathematics::quaternion))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_OFFSET))(q);
		}
		*/

		/*
		static ::Unity::Mathematics::quaternion op_Implicit_1(::UnityEngine::Quaternion q)
		{
			return ((::Unity::Mathematics::quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_OP_IMPLICIT_1_OFFSET))(q);
		}
		*/

		/*
		static ::Unity::Mathematics::quaternion EulerXYZ(::Unity::Mathematics::float3 xyz)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EULERXYZ_OFFSET))(xyz);
		}
		*/

		/*
		static ::Unity::Mathematics::quaternion EulerXZY(::Unity::Mathematics::float3 xyz)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EULERXZY_OFFSET))(xyz);
		}
		*/

		/*
		static ::Unity::Mathematics::quaternion EulerYXZ(::Unity::Mathematics::float3 xyz)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EULERYXZ_OFFSET))(xyz);
		}
		*/

		/*
		static ::Unity::Mathematics::quaternion EulerYZX(::Unity::Mathematics::float3 xyz)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EULERYZX_OFFSET))(xyz);
		}
		*/

		/*
		static ::Unity::Mathematics::quaternion EulerZXY(::Unity::Mathematics::float3 xyz)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EULERZXY_OFFSET))(xyz);
		}
		*/

		/*
		static ::Unity::Mathematics::quaternion EulerZYX(::Unity::Mathematics::float3 xyz)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EULERZYX_OFFSET))(xyz);
		}
		*/

		/*
		static ::Unity::Mathematics::quaternion Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::math_RotationOrder order)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::math_RotationOrder))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EULER_OFFSET))(xyz, order);
		}
		*/

		static ::Unity::Mathematics::quaternion Euler_1(::System::Single x, ::System::Single y, ::System::Single z, ::Unity::Mathematics::math_RotationOrder order)
		{
			return ((::Unity::Mathematics::quaternion(*)(::System::Single, ::System::Single, ::System::Single, ::Unity::Mathematics::math_RotationOrder))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EULER_1_OFFSET))(x, y, z, order);
		}

		static ::Unity::Mathematics::quaternion RotateZ(::System::Single angle)
		{
			return ((::Unity::Mathematics::quaternion(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_ROTATEZ_OFFSET))(angle);
		}

		/*
		static ::Unity::Mathematics::quaternion LookRotationSafe(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up)
		{
			return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_LOOKROTATIONSAFE_OFFSET))(forward, up);
		}
		*/

		::System::Boolean Equals(::Unity::Mathematics::quaternion x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::quaternion))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EQUALS_OFFSET))(this, x);
		}

		::System::Boolean Equals_1(::System::Object* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_EQUALS_1_OFFSET))(this, x);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_QUATERNION_TOSTRING_1_OFFSET))(this, format, formatProvider);
		}
	};
}
