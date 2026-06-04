#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR3_ANGLEBETWEEN_OFFSET UNITYSDK_OFFSET(0x1B2E7A40)
#define UNITYENGINE_VECTOR3_ANGLE_OFFSET UNITYSDK_OFFSET(0x1B2E6E90)
#define UNITYENGINE_VECTOR3_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1B2E7170)
#define UNITYENGINE_VECTOR3_CROSS_OFFSET UNITYSDK_OFFSET(0x1B2E6960)
#define UNITYENGINE_VECTOR3_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1B2E7120)
#define UNITYENGINE_VECTOR3_DOT_OFFSET UNITYSDK_OFFSET(0x1B2E6AF0)
#define UNITYENGINE_VECTOR3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3869A80)
#define UNITYENGINE_VECTOR3_EQUALS_OFFSET UNITYSDK_OFFSET(0x388DAC0)
#define UNITYENGINE_VECTOR3_EXCLUDE_OFFSET UNITYSDK_OFFSET(0x1B2E7B90)
#define UNITYENGINE_VECTOR3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3863CF0)
#define UNITYENGINE_VECTOR3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1B2E7300)
#define UNITYENGINE_VECTOR3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1B2E7340)
#define UNITYENGINE_VECTOR3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1B2E72E0)
#define UNITYENGINE_VECTOR3_GET_FWD_OFFSET UNITYSDK_OFFSET(0x1B2E7A20)
#define UNITYENGINE_VECTOR3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x388DA00)
#define UNITYENGINE_VECTOR3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1B2E7360)
#define UNITYENGINE_VECTOR3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3863F30)
#define UNITYENGINE_VECTOR3_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1B2E73C0)
#define UNITYENGINE_VECTOR3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x388DBA0)
#define UNITYENGINE_VECTOR3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1B2E72C0)
#define UNITYENGINE_VECTOR3_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1B2E73A0)
#define UNITYENGINE_VECTOR3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1B2E7380)
#define UNITYENGINE_VECTOR3_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3863F60)
#define UNITYENGINE_VECTOR3_GET_UP_OFFSET UNITYSDK_OFFSET(0x1B2E7320)
#define UNITYENGINE_VECTOR3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1B2E6C00)
#define UNITYENGINE_VECTOR3_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1B2E6320)
#define UNITYENGINE_VECTOR3_LERP_OFFSET UNITYSDK_OFFSET(0x1B2E62D0)
#define UNITYENGINE_VECTOR3_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1B2E6BB0)
#define UNITYENGINE_VECTOR3_MAX_OFFSET UNITYSDK_OFFSET(0x1B2E7290)
#define UNITYENGINE_VECTOR3_MIN_OFFSET UNITYSDK_OFFSET(0x1B2E7260)
#define UNITYENGINE_VECTOR3_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1B2E6360)
#define UNITYENGINE_VECTOR3_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x388DB10)
#define UNITYENGINE_VECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1B2E6B20)
#define UNITYENGINE_VECTOR3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B2E73E0)
#define UNITYENGINE_VECTOR3_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1B2E6BE0)
#define UNITYENGINE_VECTOR3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2E74B0)
#define UNITYENGINE_VECTOR3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2E7500)
#define UNITYENGINE_VECTOR3_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1B2E7490)
#define UNITYENGINE_VECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B2E7470)
#define UNITYENGINE_VECTOR3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B2E7410)
#define UNITYENGINE_VECTOR3_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1B2E7440)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE2_OFFSET UNITYSDK_OFFSET(0x1B2E6240)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE3_OFFSET UNITYSDK_OFFSET(0x1B2E6260)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1B2E6270)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE_OFFSET UNITYSDK_OFFSET(0x1B2E6250)
#define UNITYENGINE_VECTOR3_PROJECTONPLANE_OFFSET UNITYSDK_OFFSET(0x1B2E6DE0)
#define UNITYENGINE_VECTOR3_PROJECT_OFFSET UNITYSDK_OFFSET(0x1B2E6D40)
#define UNITYENGINE_VECTOR3_REFLECT_OFFSET UNITYSDK_OFFSET(0x1B2E6A80)
#define UNITYENGINE_VECTOR3_ROTATETOWARDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E7CE0)
#define UNITYENGINE_VECTOR3_ROTATETOWARDS_OFFSET UNITYSDK_OFFSET(0x1B2E6280)
#define UNITYENGINE_VECTOR3_SCALE_1_OFFSET UNITYSDK_OFFSET(0x3863CD0)
#define UNITYENGINE_VECTOR3_SCALE_OFFSET UNITYSDK_OFFSET(0x1B2E6900)
#define UNITYENGINE_VECTOR3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x388DA60)
#define UNITYENGINE_VECTOR3_SET_OFFSET UNITYSDK_OFFSET(0x137290)
#define UNITYENGINE_VECTOR3_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1B2E6FA0)
#define UNITYENGINE_VECTOR3_SLERPUNCLAMPED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E7CD0)
#define UNITYENGINE_VECTOR3_SLERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1B2E61F0)
#define UNITYENGINE_VECTOR3_SLERP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E7CC0)
#define UNITYENGINE_VECTOR3_SLERP_OFFSET UNITYSDK_OFFSET(0x1B2E61A0)
#define UNITYENGINE_VECTOR3_SMOOTHDAMP_1_OFFSET UNITYSDK_OFFSET(0x1B2E6780)
#define UNITYENGINE_VECTOR3_SMOOTHDAMP_2_OFFSET UNITYSDK_OFFSET(0x1B2E64D0)
#define UNITYENGINE_VECTOR3_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x1B2E6430)
#define UNITYENGINE_VECTOR3_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1B2E7240)
#define UNITYENGINE_VECTOR3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x388DC40)
#define UNITYENGINE_VECTOR3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x388DC30)
#define UNITYENGINE_VECTOR3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2E7C50)
#define UNITYENGINE_VECTOR3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3863CB0)
#define UNITYENGINE_VECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x137290)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector3_TypeDefinitionIndex = 4209;

	struct alignas(4) Vector3
	{
		static ::UnityEngine::Vector3* StaticGet_leftVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x130);
		}
		static ::UnityEngine::Vector3* StaticGet_zeroVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x13C);
		}
		static ::UnityEngine::Vector3* StaticGet_forwardVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x148);
		}
		static ::UnityEngine::Vector3* StaticGet_negativeInfinityVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x154);
		}
		static ::UnityEngine::Vector3* StaticGet_backVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x160);
		}
		static ::UnityEngine::Vector3* StaticGet_positiveInfinityVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x16C);
		}
		static ::UnityEngine::Vector3* StaticGet_rightVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x178);
		}
		static ::UnityEngine::Vector3* StaticGet_downVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x184);
		}
		static ::UnityEngine::Vector3* StaticGet_upVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x190);
		}
		static ::UnityEngine::Vector3* StaticGet_oneVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x19C);
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
