#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR3_ANGLEBETWEEN_OFFSET UNITYSDK_OFFSET(0x1EED5490)
#define UNITYENGINE_VECTOR3_ANGLE_OFFSET UNITYSDK_OFFSET(0x1EED48B0)
#define UNITYENGINE_VECTOR3_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1EED4B90)
#define UNITYENGINE_VECTOR3_CROSS_OFFSET UNITYSDK_OFFSET(0x1EED4390)
#define UNITYENGINE_VECTOR3_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1EED4B40)
#define UNITYENGINE_VECTOR3_DOT_OFFSET UNITYSDK_OFFSET(0x1EED4520)
#define UNITYENGINE_VECTOR3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C90F50)
#define UNITYENGINE_VECTOR3_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C90F00)
#define UNITYENGINE_VECTOR3_EXCLUDE_OFFSET UNITYSDK_OFFSET(0x1EED55F0)
#define UNITYENGINE_VECTOR3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C90EA0)
#define UNITYENGINE_VECTOR3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1EED4D10)
#define UNITYENGINE_VECTOR3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1EED4D50)
#define UNITYENGINE_VECTOR3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1EED4CF0)
#define UNITYENGINE_VECTOR3_GET_FWD_OFFSET UNITYSDK_OFFSET(0x1EED5470)
#define UNITYENGINE_VECTOR3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C90DA0)
#define UNITYENGINE_VECTOR3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1EED4D70)
#define UNITYENGINE_VECTOR3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3C910A0)
#define UNITYENGINE_VECTOR3_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1EED4DD0)
#define UNITYENGINE_VECTOR3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x3C91010)
#define UNITYENGINE_VECTOR3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1EED4CD0)
#define UNITYENGINE_VECTOR3_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1EED4DB0)
#define UNITYENGINE_VECTOR3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1EED4D90)
#define UNITYENGINE_VECTOR3_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3C910D0)
#define UNITYENGINE_VECTOR3_GET_UP_OFFSET UNITYSDK_OFFSET(0x1EED4D30)
#define UNITYENGINE_VECTOR3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1EED4630)
#define UNITYENGINE_VECTOR3_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1EED3D50)
#define UNITYENGINE_VECTOR3_LERP_OFFSET UNITYSDK_OFFSET(0x1EED3CF0)
#define UNITYENGINE_VECTOR3_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1EED45E0)
#define UNITYENGINE_VECTOR3_MAX_OFFSET UNITYSDK_OFFSET(0x1EED4CA0)
#define UNITYENGINE_VECTOR3_MIN_OFFSET UNITYSDK_OFFSET(0x1EED4C70)
#define UNITYENGINE_VECTOR3_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1EED3D90)
#define UNITYENGINE_VECTOR3_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x3C90F80)
#define UNITYENGINE_VECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1EED4550)
#define UNITYENGINE_VECTOR3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1EED4DF0)
#define UNITYENGINE_VECTOR3_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1EED4610)
#define UNITYENGINE_VECTOR3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EED4EC0)
#define UNITYENGINE_VECTOR3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EED4F10)
#define UNITYENGINE_VECTOR3_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1EED4EA0)
#define UNITYENGINE_VECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EED4E80)
#define UNITYENGINE_VECTOR3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1EED4E20)
#define UNITYENGINE_VECTOR3_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1EED4E50)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE2_OFFSET UNITYSDK_OFFSET(0x1EED3C50)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE3_OFFSET UNITYSDK_OFFSET(0x1EED3C70)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1EED3C80)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE_OFFSET UNITYSDK_OFFSET(0x1EED3C60)
#define UNITYENGINE_VECTOR3_PROJECTONPLANE_OFFSET UNITYSDK_OFFSET(0x1EED4810)
#define UNITYENGINE_VECTOR3_PROJECT_OFFSET UNITYSDK_OFFSET(0x1EED4770)
#define UNITYENGINE_VECTOR3_REFLECT_OFFSET UNITYSDK_OFFSET(0x1EED44B0)
#define UNITYENGINE_VECTOR3_ROTATETOWARDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EED3CE0)
#define UNITYENGINE_VECTOR3_ROTATETOWARDS_OFFSET UNITYSDK_OFFSET(0x1EED3C90)
#define UNITYENGINE_VECTOR3_SCALE_1_OFFSET UNITYSDK_OFFSET(0x3C90E80)
#define UNITYENGINE_VECTOR3_SCALE_OFFSET UNITYSDK_OFFSET(0x1EED4330)
#define UNITYENGINE_VECTOR3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C90E00)
#define UNITYENGINE_VECTOR3_SET_OFFSET UNITYSDK_OFFSET(0x3B198B0)
#define UNITYENGINE_VECTOR3_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1EED49C0)
#define UNITYENGINE_VECTOR3_SLERPUNCLAMPED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EED3C40)
#define UNITYENGINE_VECTOR3_SLERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1EED3BF0)
#define UNITYENGINE_VECTOR3_SLERP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EED3BE0)
#define UNITYENGINE_VECTOR3_SLERP_OFFSET UNITYSDK_OFFSET(0x1EED3B90)
#define UNITYENGINE_VECTOR3_SMOOTHDAMP_1_OFFSET UNITYSDK_OFFSET(0x1EED41B0)
#define UNITYENGINE_VECTOR3_SMOOTHDAMP_2_OFFSET UNITYSDK_OFFSET(0x1EED3F00)
#define UNITYENGINE_VECTOR3_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x1EED3E60)
#define UNITYENGINE_VECTOR3_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1EED4C50)
#define UNITYENGINE_VECTOR3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3C91100)
#define UNITYENGINE_VECTOR3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C910F0)
#define UNITYENGINE_VECTOR3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EED5690)
#define UNITYENGINE_VECTOR3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C90E60)
#define UNITYENGINE_VECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x3B198B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector3_TypeDefinitionIndex = 4224;

	struct alignas(4) Vector3
	{
		static ::UnityEngine::Vector3* StaticGet_oneVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x8F90);
		}
		static ::UnityEngine::Vector3* StaticGet_negativeInfinityVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x8F9C);
		}
		static ::UnityEngine::Vector3* StaticGet_leftVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x8FA8);
		}
		static ::UnityEngine::Vector3* StaticGet_upVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x8FB4);
		}
		static ::UnityEngine::Vector3* StaticGet_forwardVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x8FC0);
		}
		static ::UnityEngine::Vector3* StaticGet_zeroVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x8FCC);
		}
		static ::UnityEngine::Vector3* StaticGet_backVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x8FD8);
		}
		static ::UnityEngine::Vector3* StaticGet_positiveInfinityVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x8FE4);
		}
		static ::UnityEngine::Vector3* StaticGet_rightVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x8FF0);
		}
		static ::UnityEngine::Vector3* StaticGet_downVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x8FFC);
		}
		// static const ::System::Single kEpsilon; // 0x0
		// static const ::System::Single kEpsilonNormalSqrt; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		UnityEngine::Vector3 operator+(const UnityEngine::Vector3& b) const
		{
			return { x + b.x, y + b.y, z + b.z };
		}

		UnityEngine::Vector3 operator-(const UnityEngine::Vector3& b) const
		{
			return { x - b.x, y - b.y, z - b.z };
		}

		UnityEngine::Vector3 operator-() const
		{
			return { -x, -y, -z };
		}

		UnityEngine::Vector3 operator*(float s) const
		{
			return { x * s, y * s, z * s };
		}

		UnityEngine::Vector3 operator/(float s) const
		{
			return { x / s, y / s, z / s };
		}

		float operator*(const UnityEngine::Vector3& b) const
		{
			return x * b.x + y * b.y + z * b.z;
		}

		bool operator==(const UnityEngine::Vector3& b) const
		{
			return x == b.x && y == b.y && z == b.z;
		}

		bool operator!=(const UnityEngine::Vector3& b) const
		{
			return x != b.x || y != b.y || z != b.z;
		}

		UnityEngine::Vector3& operator+=(const UnityEngine::Vector3& b)
		{
			x += b.x;
			y += b.y;
			z += b.z;

			return *this;
		}

		UnityEngine::Vector3& operator-=(const UnityEngine::Vector3& b)
		{
			x -= b.x;
			y -= b.y;
			z -= b.z;

			return *this;
		}

		UnityEngine::Vector3& operator*=(float s)
		{
			x *= s;
			y *= s;
			z *= s;

			return *this;
		}

		UnityEngine::Vector3& operator/=(float s)
		{
			x /= s;
			y /= s;
			z /= s;

			return *this;
		}

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SLERP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 SlerpUnclamped(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SLERPUNCLAMPED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OrthoNormalize2(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ORTHONORMALIZE2_OFFSET))(a1, a2);
		}

		static ::System::Void OrthoNormalize(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ORTHONORMALIZE_OFFSET))(a1, a2);
		}

		static ::System::Void OrthoNormalize3(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ORTHONORMALIZE3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OrthoNormalize_1(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ORTHONORMALIZE_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 RotateTowards(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ROTATETOWARDS_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_LERP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 LerpUnclamped(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_LERPUNCLAMPED_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 MoveTowards(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MOVETOWARDS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 SmoothDamp(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SMOOTHDAMP_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 SmoothDamp_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SMOOTHDAMP_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 SmoothDamp_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SMOOTHDAMP_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Single get_Item(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Set(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SET_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::Vector3 Scale(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SCALE_OFFSET))(a1, a2);
		}

		::System::Void Scale_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SCALE_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 Cross(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_CROSS_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_EQUALS_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 Reflect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_REFLECT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 Normalize(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_NORMALIZE_OFFSET))(a1);
		}

		::System::Void Normalize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_NORMALIZE_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_normalized()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_NORMALIZED_OFFSET))(this);
		}

		static ::System::Single Dot(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_DOT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 Project(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_PROJECT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 ProjectOnPlane(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_PROJECTONPLANE_OFFSET))(a1, a2);
		}

		static ::System::Single Angle(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single SignedAngle(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SIGNEDANGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Distance(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_DISTANCE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 ClampMagnitude(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_CLAMPMAGNITUDE_OFFSET))(a1, a2);
		}

		static ::System::Single Magnitude(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MAGNITUDE_OFFSET))(a1);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_MAGNITUDE_OFFSET))(this);
		}

		static ::System::Single SqrMagnitude(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SQRMAGNITUDE_OFFSET))(a1);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 Min(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MIN_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 Max(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MAX_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 get_zero()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_one()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_ONE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_forward()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_FORWARD_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_back()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_BACK_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_UP_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_down()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_DOWN_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_left()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_LEFT_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_right()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_RIGHT_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_positiveInfinity()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_POSITIVEINFINITY_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_negativeInfinity()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_NEGATIVEINFINITY_OFFSET))();
		}

		static ::UnityEngine::Vector3 op_Addition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 op_Subtraction(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 op_UnaryNegation(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 op_Multiply_1(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 op_Division(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_TOSTRING_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 get_fwd()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_FWD_OFFSET))();
		}

		static ::System::Single AngleBetween(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ANGLEBETWEEN_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 Exclude(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_EXCLUDE_OFFSET))(a1, a2);
		}

		static ::System::Void Slerp_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SLERP_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SlerpUnclamped_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SLERPUNCLAMPED_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RotateTowards_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3& a5)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ROTATETOWARDS_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
