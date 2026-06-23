#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR2_ANGLE_OFFSET UNITYSDK_OFFSET(0x1D2AACA0)
#define UNITYENGINE_VECTOR2_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1D2AAF00)
#define UNITYENGINE_VECTOR2_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1D2AAEC0)
#define UNITYENGINE_VECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0x1D2AAC40)
#define UNITYENGINE_VECTOR2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C3840)
#define UNITYENGINE_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x9EAD10)
#define UNITYENGINE_VECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C3790)
#define UNITYENGINE_VECTOR2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1D2AB4A0)
#define UNITYENGINE_VECTOR2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9EAAD0)
#define UNITYENGINE_VECTOR2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1D2AB4B0)
#define UNITYENGINE_VECTOR2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9C3560)
#define UNITYENGINE_VECTOR2_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1D2AB4E0)
#define UNITYENGINE_VECTOR2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x9EAC70)
#define UNITYENGINE_VECTOR2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1D2AB480)
#define UNITYENGINE_VECTOR2_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1D2AB4D0)
#define UNITYENGINE_VECTOR2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1D2AB4C0)
#define UNITYENGINE_VECTOR2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9C3590)
#define UNITYENGINE_VECTOR2_GET_UP_OFFSET UNITYSDK_OFFSET(0x1D2AB490)
#define UNITYENGINE_VECTOR2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1D2AA6C0)
#define UNITYENGINE_VECTOR2_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1D2AA4E0)
#define UNITYENGINE_VECTOR2_LERP_OFFSET UNITYSDK_OFFSET(0x1D2AA470)
#define UNITYENGINE_VECTOR2_MAX_OFFSET UNITYSDK_OFFSET(0x1D2AB000)
#define UNITYENGINE_VECTOR2_MIN_OFFSET UNITYSDK_OFFSET(0x1D2AAFD0)
#define UNITYENGINE_VECTOR2_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1D2AA520)
#define UNITYENGINE_VECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x9EAC00)
#define UNITYENGINE_VECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1D2AB290)
#define UNITYENGINE_VECTOR2_OP_DIVISION_1_OFFSET UNITYSDK_OFFSET(0x1D2AA690)
#define UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1D2AB320)
#define UNITYENGINE_VECTOR2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D2AB3D0)
#define UNITYENGINE_VECTOR2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1D2AB460)
#define UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D2AB450)
#define UNITYENGINE_VECTOR2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D2AB410)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1D2AB370)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1D2AB3A0)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1D2AB2F0)
#define UNITYENGINE_VECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1D2AB2C0)
#define UNITYENGINE_VECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1D2AB350)
#define UNITYENGINE_VECTOR2_PERPENDICULAR_OFFSET UNITYSDK_OFFSET(0x1D2AAC70)
#define UNITYENGINE_VECTOR2_REFLECT_OFFSET UNITYSDK_OFFSET(0x1D2AABE0)
#define UNITYENGINE_VECTOR2_SCALE_1_OFFSET UNITYSDK_OFFSET(0x9EABE0)
#define UNITYENGINE_VECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0x1D2AA5E0)
#define UNITYENGINE_VECTOR2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9EAB50)
#define UNITYENGINE_VECTOR2_SET_OFFSET UNITYSDK_OFFSET(0x48A560)
#define UNITYENGINE_VECTOR2_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1D2AAD90)
#define UNITYENGINE_VECTOR2_SMOOTHDAMP_1_OFFSET UNITYSDK_OFFSET(0x1D2AB240)
#define UNITYENGINE_VECTOR2_SMOOTHDAMP_2_OFFSET UNITYSDK_OFFSET(0x1D2AB090)
#define UNITYENGINE_VECTOR2_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x1D2AB030)
#define UNITYENGINE_VECTOR2_SQRMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x9C3590)
#define UNITYENGINE_VECTOR2_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1D2AAFA0)
#define UNITYENGINE_VECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x9EAD00)
#define UNITYENGINE_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9EACF0)
#define UNITYENGINE_VECTOR2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2AB4F0)
#define UNITYENGINE_VECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x48A560)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 5303;

	struct alignas(4) Vector2
	{
		static ::UnityEngine::Vector2* StaticGet_rightVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x2340);
		}
		static ::UnityEngine::Vector2* StaticGet_downVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x2348);
		}
		static ::UnityEngine::Vector2* StaticGet_leftVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x2350);
		}
		static ::UnityEngine::Vector2* StaticGet_positiveInfinityVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x2358);
		}
		static ::UnityEngine::Vector2* StaticGet_zeroVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x2360);
		}
		static ::UnityEngine::Vector2* StaticGet_oneVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x2368);
		}
		static ::UnityEngine::Vector2* StaticGet_upVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x2370);
		}
		static ::UnityEngine::Vector2* StaticGet_negativeInfinityVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x2378);
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

		::System::Void _ctor(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2__CTOR_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2__CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void Set(::System::Single newX, ::System::Single newY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SET_OFFSET))(this, newX, newY);
		}

		static ::UnityEngine::Vector2 Lerp(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_LERP_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector2 LerpUnclamped(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector2 MoveTowards(::UnityEngine::Vector2 current, ::UnityEngine::Vector2 target, ::System::Single maxDistanceDelta)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MOVETOWARDS_OFFSET))(current, target, maxDistanceDelta);
		}

		static ::UnityEngine::Vector2 Scale(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SCALE_OFFSET))(a, b);
		}

		::System::Void Scale_1(::UnityEngine::Vector2 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SCALE_1_OFFSET))(this, scale);
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

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_TOSTRING_1_OFFSET))(this, format);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector2 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_EQUALS_1_OFFSET))(this, other);
		}

		static ::UnityEngine::Vector2 Reflect(::UnityEngine::Vector2 inDirection, ::UnityEngine::Vector2 inNormal)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_REFLECT_OFFSET))(inDirection, inNormal);
		}

		static ::UnityEngine::Vector2 Perpendicular(::UnityEngine::Vector2 inDirection)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_PERPENDICULAR_OFFSET))(inDirection);
		}

		static ::System::Single Dot(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_DOT_OFFSET))(lhs, rhs);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::System::Single Angle(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_ANGLE_OFFSET))(from, to);
		}

		static ::System::Single SignedAngle(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SIGNEDANGLE_OFFSET))(from, to);
		}

		static ::System::Single Distance(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_DISTANCE_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2 ClampMagnitude(::UnityEngine::Vector2 vector, ::System::Single maxLength)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_CLAMPMAGNITUDE_OFFSET))(vector, maxLength);
		}

		static ::System::Single SqrMagnitude(::UnityEngine::Vector2 a)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SQRMAGNITUDE_OFFSET))(a);
		}

		::System::Single SqrMagnitude_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SQRMAGNITUDE_1_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 Min(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MIN_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector2 Max(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MAX_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector2 SmoothDamp(::UnityEngine::Vector2 current, ::UnityEngine::Vector2 target, ::UnityEngine::Vector2& currentVelocity, ::System::Single smoothTime, ::System::Single maxSpeed)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SMOOTHDAMP_OFFSET))(current, target, currentVelocity, smoothTime, maxSpeed);
		}

		static ::UnityEngine::Vector2 SmoothDamp_1(::UnityEngine::Vector2 current, ::UnityEngine::Vector2 target, ::UnityEngine::Vector2& currentVelocity, ::System::Single smoothTime)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SMOOTHDAMP_1_OFFSET))(current, target, currentVelocity, smoothTime);
		}

		static ::UnityEngine::Vector2 SmoothDamp_2(::UnityEngine::Vector2 current, ::UnityEngine::Vector2 target, ::UnityEngine::Vector2& currentVelocity, ::System::Single smoothTime, ::System::Single maxSpeed, ::System::Single deltaTime)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SMOOTHDAMP_2_OFFSET))(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
		}

		static ::UnityEngine::Vector2 op_Addition(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_ADDITION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2 op_Subtraction(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2 op_Multiply(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2 op_Division(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2 op_UnaryNegation(::UnityEngine::Vector2 a)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::UnityEngine::Vector2 op_Multiply_1(::UnityEngine::Vector2 a, ::System::Single d)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_1_OFFSET))(a, d);
		}

		static ::UnityEngine::Vector2 op_Multiply_2(::System::Single d, ::UnityEngine::Vector2 a)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_2_OFFSET))(d, a);
		}

		static ::UnityEngine::Vector2 op_Division_1(::UnityEngine::Vector2 a, ::System::Single d)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_DIVISION_1_OFFSET))(a, d);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector2 op_Implicit(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 op_Implicit_1(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_IMPLICIT_1_OFFSET))(v);
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
