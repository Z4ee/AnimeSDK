#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR2_ANGLE_OFFSET UNITYSDK_OFFSET(0x1EE13DC0)
#define UNITYENGINE_VECTOR2_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1EE14020)
#define UNITYENGINE_VECTOR2_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1EE13FE0)
#define UNITYENGINE_VECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0x1EE13D60)
#define UNITYENGINE_VECTOR2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BFED60)
#define UNITYENGINE_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C6EB30)
#define UNITYENGINE_VECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A54FC0)
#define UNITYENGINE_VECTOR2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1EE145C0)
#define UNITYENGINE_VECTOR2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C6E980)
#define UNITYENGINE_VECTOR2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1EE145D0)
#define UNITYENGINE_VECTOR2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3A55080)
#define UNITYENGINE_VECTOR2_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1EE14600)
#define UNITYENGINE_VECTOR2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x3C6EA90)
#define UNITYENGINE_VECTOR2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1EE145A0)
#define UNITYENGINE_VECTOR2_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1EE145F0)
#define UNITYENGINE_VECTOR2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1EE145E0)
#define UNITYENGINE_VECTOR2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3A550B0)
#define UNITYENGINE_VECTOR2_GET_UP_OFFSET UNITYSDK_OFFSET(0x1EE145B0)
#define UNITYENGINE_VECTOR2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1EE06B10)
#define UNITYENGINE_VECTOR2_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1EE13600)
#define UNITYENGINE_VECTOR2_LERP_OFFSET UNITYSDK_OFFSET(0x1EE13590)
#define UNITYENGINE_VECTOR2_MAX_OFFSET UNITYSDK_OFFSET(0x1EE14120)
#define UNITYENGINE_VECTOR2_MIN_OFFSET UNITYSDK_OFFSET(0x1EE140F0)
#define UNITYENGINE_VECTOR2_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1EE13640)
#define UNITYENGINE_VECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x3C6EA20)
#define UNITYENGINE_VECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1EE143B0)
#define UNITYENGINE_VECTOR2_OP_DIVISION_1_OFFSET UNITYSDK_OFFSET(0x1EE137E0)
#define UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1EE14440)
#define UNITYENGINE_VECTOR2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EE144F0)
#define UNITYENGINE_VECTOR2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EE14580)
#define UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EE14570)
#define UNITYENGINE_VECTOR2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EE14530)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1EE14490)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1EE144C0)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EE14410)
#define UNITYENGINE_VECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1EE143E0)
#define UNITYENGINE_VECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1EE14470)
#define UNITYENGINE_VECTOR2_PERPENDICULAR_OFFSET UNITYSDK_OFFSET(0x1EE13D90)
#define UNITYENGINE_VECTOR2_REFLECT_OFFSET UNITYSDK_OFFSET(0x1EE13D00)
#define UNITYENGINE_VECTOR2_SCALE_1_OFFSET UNITYSDK_OFFSET(0x3A54D50)
#define UNITYENGINE_VECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0x1EE13700)
#define UNITYENGINE_VECTOR2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C6E9D0)
#define UNITYENGINE_VECTOR2_SET_OFFSET UNITYSDK_OFFSET(0x6B9800)
#define UNITYENGINE_VECTOR2_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1EE13EB0)
#define UNITYENGINE_VECTOR2_SMOOTHDAMP_1_OFFSET UNITYSDK_OFFSET(0x1EE14360)
#define UNITYENGINE_VECTOR2_SMOOTHDAMP_2_OFFSET UNITYSDK_OFFSET(0x1EE141B0)
#define UNITYENGINE_VECTOR2_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x1EE14150)
#define UNITYENGINE_VECTOR2_SQRMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x3A550B0)
#define UNITYENGINE_VECTOR2_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1EE140C0)
#define UNITYENGINE_VECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3C6EB20)
#define UNITYENGINE_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C6EB10)
#define UNITYENGINE_VECTOR2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE14610)
#define UNITYENGINE_VECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x6B9800)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 4227;

	struct alignas(4) Vector2
	{
		static ::UnityEngine::Vector2* StaticGet_oneVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x8C30);
		}
		static ::UnityEngine::Vector2* StaticGet_upVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x8C38);
		}
		static ::UnityEngine::Vector2* StaticGet_leftVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x8C40);
		}
		static ::UnityEngine::Vector2* StaticGet_rightVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x8C48);
		}
		static ::UnityEngine::Vector2* StaticGet_negativeInfinityVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x8C50);
		}
		static ::UnityEngine::Vector2* StaticGet_positiveInfinityVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x8C58);
		}
		static ::UnityEngine::Vector2* StaticGet_downVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x8C60);
		}
		static ::UnityEngine::Vector2* StaticGet_zeroVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x8C68);
		}
		// static const ::System::Single kEpsilon; // 0x0
		// static const ::System::Single kEpsilonNormalSqrt; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14

		UnityEngine::Vector2(float x = 0.f, float y = 0.f) : x(x), y(y) {}
		UnityEngine::Vector2(const UnityEngine::Vector3& v) : x(v.x), y(v.y) {}

		UnityEngine::Vector2 operator+(const UnityEngine::Vector2& b) const
		{
			return { x + b.x, y + b.y };
		}

		UnityEngine::Vector2 operator-(const UnityEngine::Vector2& b) const
		{
			return { x - b.x, y - b.y };
		}

		UnityEngine::Vector2 operator-() const
		{
			return { -x, -y };
		}

		UnityEngine::Vector2 operator*(float s) const
		{
			return { x * s, y * s };
		}

		UnityEngine::Vector2 operator/(float s) const
		{
			return { x / s, y / s };
		}

		float operator*(const UnityEngine::Vector2& b) const
		{
			return x * b.x + y * b.y;
		}

		bool operator==(const UnityEngine::Vector2& b) const
		{
			return x == b.x && y == b.y;
		}

		bool operator!=(const UnityEngine::Vector2& b) const
		{
			return x != b.x || y != b.y;
		}

		UnityEngine::Vector2& operator+=(const UnityEngine::Vector2& b)
		{
			x += b.x;
			y += b.y;

			return *this;
		}

		UnityEngine::Vector2& operator-=(const UnityEngine::Vector2& b)
		{
			x -= b.x;
			y -= b.y;

			return *this;
		}

		UnityEngine::Vector2& operator*=(float s)
		{
			x *= s;
			y *= s;

			return *this;
		}

		UnityEngine::Vector2& operator/=(float s)
		{
			x /= s;
			y /= s;

			return *this;
		}

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2__CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Set(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SET_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector2 Lerp(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_LERP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 LerpUnclamped(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_LERPUNCLAMPED_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 MoveTowards(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MOVETOWARDS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 Scale(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SCALE_OFFSET))(a1, a2);
		}

		::System::Void Scale_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SCALE_1_OFFSET))(this, a1);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_NORMALIZE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_normalized()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_NORMALIZED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_EQUALS_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector2 Reflect(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_REFLECT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 Perpendicular(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_PERPENDICULAR_OFFSET))(a1);
		}

		static ::System::Single Dot(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_DOT_OFFSET))(a1, a2);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::System::Single Angle(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_ANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single SignedAngle(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SIGNEDANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single Distance(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_DISTANCE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 ClampMagnitude(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_CLAMPMAGNITUDE_OFFSET))(a1, a2);
		}

		static ::System::Single SqrMagnitude(::UnityEngine::Vector2 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SQRMAGNITUDE_OFFSET))(a1);
		}

		::System::Single SqrMagnitude_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SQRMAGNITUDE_1_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 Min(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MIN_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 Max(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MAX_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 SmoothDamp(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2& a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SMOOTHDAMP_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector2 SmoothDamp_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2& a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SMOOTHDAMP_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector2 SmoothDamp_2(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2& a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SMOOTHDAMP_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Vector2 op_Addition(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 op_Subtraction(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 op_Multiply(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 op_Division(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 op_UnaryNegation(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 op_Multiply_1(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 op_Multiply_2(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_2_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 op_Division_1(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_DIVISION_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 op_Implicit(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 op_Implicit_1(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 get_zero()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_one()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ONE_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_up()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_UP_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_down()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_DOWN_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_left()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_LEFT_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_right()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_RIGHT_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_positiveInfinity()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_POSITIVEINFINITY_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_negativeInfinity()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_NEGATIVEINFINITY_OFFSET))();
		}
	};
}
