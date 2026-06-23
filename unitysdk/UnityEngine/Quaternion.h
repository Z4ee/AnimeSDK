#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_QUATERNION_ANGLEAXIS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58CFA0)
#define UNITYENGINE_QUATERNION_ANGLEAXIS_OFFSET UNITYSDK_OFFSET(0x1D58CF60)
#define UNITYENGINE_QUATERNION_ANGLE_OFFSET UNITYSDK_OFFSET(0x1D58D560)
#define UNITYENGINE_QUATERNION_AXISANGLE_OFFSET UNITYSDK_OFFSET(0x1D58E780)
#define UNITYENGINE_QUATERNION_DOT_OFFSET UNITYSDK_OFFSET(0x1D58D430)
#define UNITYENGINE_QUATERNION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9F4FB0)
#define UNITYENGINE_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F4EB0)
#define UNITYENGINE_QUATERNION_EULERANGLES_1_OFFSET UNITYSDK_OFFSET(0x1D58E590)
#define UNITYENGINE_QUATERNION_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x1D58E540)
#define UNITYENGINE_QUATERNION_EULERROTATION_1_OFFSET UNITYSDK_OFFSET(0x1D58E410)
#define UNITYENGINE_QUATERNION_EULERROTATION_OFFSET UNITYSDK_OFFSET(0x1D58E3C0)
#define UNITYENGINE_QUATERNION_EULER_1_OFFSET UNITYSDK_OFFSET(0x1D58D7B0)
#define UNITYENGINE_QUATERNION_EULER_OFFSET UNITYSDK_OFFSET(0x1D587650)
#define UNITYENGINE_QUATERNION_FROMTOROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58CCF0)
#define UNITYENGINE_QUATERNION_FROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x1D58CCB0)
#define UNITYENGINE_QUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C4CF0)
#define UNITYENGINE_QUATERNION_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x9F4BD0)
#define UNITYENGINE_QUATERNION_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1D58D1F0)
#define UNITYENGINE_QUATERNION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9F49B0)
#define UNITYENGINE_QUATERNION_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x9F4E30)
#define UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58CED0)
#define UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_OFFSET UNITYSDK_OFFSET(0x1D58CE90)
#define UNITYENGINE_QUATERNION_INTERNAL_MAKEPOSITIVE_OFFSET UNITYSDK_OFFSET(0x1D58D5D0)
#define UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58CF50)
#define UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_OFFSET UNITYSDK_OFFSET(0x1D58CF40)
#define UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58CF30)
#define UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_OFFSET UNITYSDK_OFFSET(0x1D58CEE0)
#define UNITYENGINE_QUATERNION_INVERSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58CD40)
#define UNITYENGINE_QUATERNION_INVERSE_OFFSET UNITYSDK_OFFSET(0x1D58CD00)
#define UNITYENGINE_QUATERNION_ISEQUALUSINGDOT_OFFSET UNITYSDK_OFFSET(0x1D58D3E0)
#define UNITYENGINE_QUATERNION_LERPUNCLAMPED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58CE80)
#define UNITYENGINE_QUATERNION_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1D58CE40)
#define UNITYENGINE_QUATERNION_LERP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58CE30)
#define UNITYENGINE_QUATERNION_LERP_OFFSET UNITYSDK_OFFSET(0x1D58CDF0)
#define UNITYENGINE_QUATERNION_LOOKROTATION_1_OFFSET UNITYSDK_OFFSET(0x1D58D000)
#define UNITYENGINE_QUATERNION_LOOKROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58CFF0)
#define UNITYENGINE_QUATERNION_LOOKROTATION_OFFSET UNITYSDK_OFFSET(0x1D58CFB0)
#define UNITYENGINE_QUATERNION_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x9F4DB0)
#define UNITYENGINE_QUATERNION_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1D58D990)
#define UNITYENGINE_QUATERNION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D58D3F0)
#define UNITYENGINE_QUATERNION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D58D460)
#define UNITYENGINE_QUATERNION_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1D58D2B0)
#define UNITYENGINE_QUATERNION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1D58D200)
#define UNITYENGINE_QUATERNION_ROTATETOWARDS_OFFSET UNITYSDK_OFFSET(0x1D58D8B0)
#define UNITYENGINE_QUATERNION_SETAXISANGLE_OFFSET UNITYSDK_OFFSET(0x9F5210)
#define UNITYENGINE_QUATERNION_SETEULERANGLES_1_OFFSET UNITYSDK_OFFSET(0x9F51C0)
#define UNITYENGINE_QUATERNION_SETEULERANGLES_OFFSET UNITYSDK_OFFSET(0x9F50B0)
#define UNITYENGINE_QUATERNION_SETEULERROTATION_1_OFFSET UNITYSDK_OFFSET(0x9F5100)
#define UNITYENGINE_QUATERNION_SETEULERROTATION_OFFSET UNITYSDK_OFFSET(0x9F50B0)
#define UNITYENGINE_QUATERNION_SETFROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x9F4D50)
#define UNITYENGINE_QUATERNION_SETLOOKROTATION_1_OFFSET UNITYSDK_OFFSET(0x9F4B70)
#define UNITYENGINE_QUATERNION_SETLOOKROTATION_OFFSET UNITYSDK_OFFSET(0x9F4B10)
#define UNITYENGINE_QUATERNION_SET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x9F4CB0)
#define UNITYENGINE_QUATERNION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9F4A60)
#define UNITYENGINE_QUATERNION_SET_OFFSET UNITYSDK_OFFSET(0x776510)
#define UNITYENGINE_QUATERNION_SLERPUNCLAMPED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58CDE0)
#define UNITYENGINE_QUATERNION_SLERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1D58CDA0)
#define UNITYENGINE_QUATERNION_SLERP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58CD90)
#define UNITYENGINE_QUATERNION_SLERP_OFFSET UNITYSDK_OFFSET(0x1D58CD50)
#define UNITYENGINE_QUATERNION_TOANGLEAXIS_OFFSET UNITYSDK_OFFSET(0x9F4D10)
#define UNITYENGINE_QUATERNION_TOAXISANGLE_OFFSET UNITYSDK_OFFSET(0x9F51A0)
#define UNITYENGINE_QUATERNION_TOEULERANGLES_1_OFFSET UNITYSDK_OFFSET(0x9F5150)
#define UNITYENGINE_QUATERNION_TOEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1D58E690)
#define UNITYENGINE_QUATERNION_TOEULER_OFFSET UNITYSDK_OFFSET(0x9F5150)
#define UNITYENGINE_QUATERNION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x9F50A0)
#define UNITYENGINE_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F5090)
#define UNITYENGINE_QUATERNION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D58E7D0)
#define UNITYENGINE_QUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x776510)

namespace UnityEngine
{
	inline static constexpr unsigned int Quaternion_TypeDefinitionIndex = 5301;

	struct alignas(4) Quaternion
	{
		static ::UnityEngine::Quaternion* StaticGet_identityQuaternion()
		{
			return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(Quaternion_TypeDefinitionIndex)->GetStaticField(0x2DE0);
		}
		// static const ::System::Single kEpsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION__CTOR_OFFSET))(this, x, y, z, w);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Vector3 fromDirection, ::UnityEngine::Vector3 toDirection)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_FROMTOROTATION_OFFSET))(fromDirection, toDirection);
		}
		*/

		static ::UnityEngine::Quaternion Inverse(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INVERSE_OFFSET))(rotation);
		}

		static ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, ::System::Single t)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERP_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Quaternion SlerpUnclamped(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, ::System::Single t)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, ::System::Single t)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LERP_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Quaternion LerpUnclamped(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, ::System::Single t)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		/*
		static ::UnityEngine::Quaternion Internal_FromEulerRad(::UnityEngine::Vector3 euler)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_OFFSET))(euler);
		}
		*/

		/*
		static ::UnityEngine::Vector3 Internal_ToEulerRad(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_OFFSET))(rotation);
		}
		*/

		/*
		static ::System::Void Internal_ToAxisAngleRad(::UnityEngine::Quaternion q, ::UnityEngine::Vector3& axis, ::System::Single& angle)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_OFFSET))(q, axis, angle);
		}
		*/

		/*
		static ::UnityEngine::Quaternion AngleAxis(::System::Single angle, ::UnityEngine::Vector3 axis)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ANGLEAXIS_OFFSET))(angle, axis);
		}
		*/

		/*
		static ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 upwards)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LOOKROTATION_OFFSET))(forward, upwards);
		}
		*/

		/*
		static ::UnityEngine::Quaternion LookRotation_1(::UnityEngine::Vector3 forward)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LOOKROTATION_1_OFFSET))(forward);
		}
		*/

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void Set(::System::Single newX, ::System::Single newY, ::System::Single newZ, ::System::Single newW)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SET_OFFSET))(this, newX, newY, newZ, newW);
		}

		static ::UnityEngine::Quaternion get_identity()
		{
			return ((::UnityEngine::Quaternion(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GET_IDENTITY_OFFSET))();
		}

		static ::UnityEngine::Quaternion op_Multiply(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		/*
		static ::UnityEngine::Vector3 op_Multiply_1(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_MULTIPLY_1_OFFSET))(rotation, point);
		}
		*/

		static ::System::Boolean IsEqualUsingDot(::System::Single dot)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ISEQUALUSINGDOT_OFFSET))(dot);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Single Dot(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_DOT_OFFSET))(a, b);
		}

		/*
		::System::Void SetLookRotation(::UnityEngine::Vector3 view)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SETLOOKROTATION_OFFSET))(this, view);
		}
		*/

		/*
		::System::Void SetLookRotation_1(::UnityEngine::Vector3 view, ::UnityEngine::Vector3 up)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SETLOOKROTATION_1_OFFSET))(this, view, up);
		}
		*/

		static ::System::Single Angle(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ANGLE_OFFSET))(a, b);
		}

		/*
		static ::UnityEngine::Vector3 Internal_MakePositive(::UnityEngine::Vector3 euler)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_MAKEPOSITIVE_OFFSET))(euler);
		}
		*/

		/*
		::UnityEngine::Vector3 get_eulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GET_EULERANGLES_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_eulerAngles(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SET_EULERANGLES_OFFSET))(this, value);
		}
		*/

		static ::UnityEngine::Quaternion Euler(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EULER_OFFSET))(x, y, z);
		}

		/*
		static ::UnityEngine::Quaternion Euler_1(::UnityEngine::Vector3 euler)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EULER_1_OFFSET))(euler);
		}
		*/

		/*
		::System::Void ToAngleAxis(::System::Single& angle, ::UnityEngine::Vector3& axis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOANGLEAXIS_OFFSET))(this, angle, axis);
		}
		*/

		/*
		::System::Void SetFromToRotation(::UnityEngine::Vector3 fromDirection, ::UnityEngine::Vector3 toDirection)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SETFROMTOROTATION_OFFSET))(this, fromDirection, toDirection);
		}
		*/

		static ::UnityEngine::Quaternion RotateTowards(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to, ::System::Single maxDegreesDelta)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ROTATETOWARDS_OFFSET))(from, to, maxDegreesDelta);
		}

		static ::UnityEngine::Quaternion Normalize(::UnityEngine::Quaternion q)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_NORMALIZE_OFFSET))(q);
		}

		::System::Void Normalize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_NORMALIZE_1_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_normalized()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GET_NORMALIZED_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Quaternion other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOSTRING_1_OFFSET))(this, format);
		}

		static ::UnityEngine::Quaternion EulerRotation(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EULERROTATION_OFFSET))(x, y, z);
		}

		/*
		static ::UnityEngine::Quaternion EulerRotation_1(::UnityEngine::Vector3 euler)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EULERROTATION_1_OFFSET))(euler);
		}
		*/

		::System::Void SetEulerRotation(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SETEULERROTATION_OFFSET))(this, x, y, z);
		}

		/*
		::System::Void SetEulerRotation_1(::UnityEngine::Vector3 euler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SETEULERROTATION_1_OFFSET))(this, euler);
		}
		*/

		/*
		::UnityEngine::Vector3 ToEuler()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOEULER_OFFSET))(this);
		}
		*/

		static ::UnityEngine::Quaternion EulerAngles(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EULERANGLES_OFFSET))(x, y, z);
		}

		/*
		static ::UnityEngine::Quaternion EulerAngles_1(::UnityEngine::Vector3 euler)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EULERANGLES_1_OFFSET))(euler);
		}
		*/

		/*
		::System::Void ToAxisAngle(::UnityEngine::Vector3& axis, ::System::Single& angle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOAXISANGLE_OFFSET))(this, axis, angle);
		}
		*/

		::System::Void SetEulerAngles(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SETEULERANGLES_OFFSET))(this, x, y, z);
		}

		/*
		::System::Void SetEulerAngles_1(::UnityEngine::Vector3 euler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SETEULERANGLES_1_OFFSET))(this, euler);
		}
		*/

		/*
		static ::UnityEngine::Vector3 ToEulerAngles(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOEULERANGLES_OFFSET))(rotation);
		}
		*/

		/*
		::UnityEngine::Vector3 ToEulerAngles_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOEULERANGLES_1_OFFSET))(this);
		}
		*/

		/*
		::System::Void SetAxisAngle(::UnityEngine::Vector3 axis, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SETAXISANGLE_OFFSET))(this, axis, angle);
		}
		*/

		/*
		static ::UnityEngine::Quaternion AxisAngle(::UnityEngine::Vector3 axis, ::System::Single angle)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_AXISANGLE_OFFSET))(axis, angle);
		}
		*/

		/*
		static ::System::Void FromToRotation_Injected(::UnityEngine::Vector3& fromDirection, ::UnityEngine::Vector3& toDirection, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_FROMTOROTATION_INJECTED_OFFSET))(fromDirection, toDirection, ret);
		}
		*/

		static ::System::Void Inverse_Injected(::UnityEngine::Quaternion& rotation, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INVERSE_INJECTED_OFFSET))(rotation, ret);
		}

		static ::System::Void Slerp_Injected(::UnityEngine::Quaternion& a, ::UnityEngine::Quaternion& b, ::System::Single t, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERP_INJECTED_OFFSET))(a, b, t, ret);
		}

		static ::System::Void SlerpUnclamped_Injected(::UnityEngine::Quaternion& a, ::UnityEngine::Quaternion& b, ::System::Single t, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERPUNCLAMPED_INJECTED_OFFSET))(a, b, t, ret);
		}

		static ::System::Void Lerp_Injected(::UnityEngine::Quaternion& a, ::UnityEngine::Quaternion& b, ::System::Single t, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LERP_INJECTED_OFFSET))(a, b, t, ret);
		}

		static ::System::Void LerpUnclamped_Injected(::UnityEngine::Quaternion& a, ::UnityEngine::Quaternion& b, ::System::Single t, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LERPUNCLAMPED_INJECTED_OFFSET))(a, b, t, ret);
		}

		/*
		static ::System::Void Internal_FromEulerRad_Injected(::UnityEngine::Vector3& euler, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_INJECTED_OFFSET))(euler, ret);
		}
		*/

		/*
		static ::System::Void Internal_ToEulerRad_Injected(::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_INJECTED_OFFSET))(rotation, ret);
		}
		*/

		/*
		static ::System::Void Internal_ToAxisAngleRad_Injected(::UnityEngine::Quaternion& q, ::UnityEngine::Vector3& axis, ::System::Single& angle)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_INJECTED_OFFSET))(q, axis, angle);
		}
		*/

		/*
		static ::System::Void AngleAxis_Injected(::System::Single angle, ::UnityEngine::Vector3& axis, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ANGLEAXIS_INJECTED_OFFSET))(angle, axis, ret);
		}
		*/

		/*
		static ::System::Void LookRotation_Injected(::UnityEngine::Vector3& forward, ::UnityEngine::Vector3& upwards, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LOOKROTATION_INJECTED_OFFSET))(forward, upwards, ret);
		}
		*/
	};
}
