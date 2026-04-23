#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR4_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1A4981B0)
#define UNITYENGINE_VECTOR4_DOT_OFFSET UNITYSDK_OFFSET(0x1A4980D0)
#define UNITYENGINE_VECTOR4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22CF070)
#define UNITYENGINE_VECTOR4_EQUALS_OFFSET UNITYSDK_OFFSET(0x22EF730)
#define UNITYENGINE_VECTOR4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22C8A20)
#define UNITYENGINE_VECTOR4_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x22EF5B0)
#define UNITYENGINE_VECTOR4_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x22C8CA0)
#define UNITYENGINE_VECTOR4_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1A4982F0)
#define UNITYENGINE_VECTOR4_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x22EF800)
#define UNITYENGINE_VECTOR4_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1A4982D0)
#define UNITYENGINE_VECTOR4_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1A4982E0)
#define UNITYENGINE_VECTOR4_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x22C8CE0)
#define UNITYENGINE_VECTOR4_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1A497FC0)
#define UNITYENGINE_VECTOR4_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1A497CA0)
#define UNITYENGINE_VECTOR4_LERP_OFFSET UNITYSDK_OFFSET(0x1A497C60)
#define UNITYENGINE_VECTOR4_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1A497F60)
#define UNITYENGINE_VECTOR4_MAX_OFFSET UNITYSDK_OFFSET(0x1A4982B0)
#define UNITYENGINE_VECTOR4_MIN_OFFSET UNITYSDK_OFFSET(0x1A498290)
#define UNITYENGINE_VECTOR4_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1A497CC0)
#define UNITYENGINE_VECTOR4_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x22EF780)
#define UNITYENGINE_VECTOR4_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1A497EE0)
#define UNITYENGINE_VECTOR4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1A498300)
#define UNITYENGINE_VECTOR4_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1A497FA0)
#define UNITYENGINE_VECTOR4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A498360)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A498420)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1A498440)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1A498460)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A498400)
#define UNITYENGINE_VECTOR4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A4983B0)
#define UNITYENGINE_VECTOR4_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1A498340)
#define UNITYENGINE_VECTOR4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1A498190)
#define UNITYENGINE_VECTOR4_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1A498200)
#define UNITYENGINE_VECTOR4_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1A498320)
#define UNITYENGINE_VECTOR4_PROJECT_OFFSET UNITYSDK_OFFSET(0x1A498100)
#define UNITYENGINE_VECTOR4_SCALE_1_OFFSET UNITYSDK_OFFSET(0x22C8A10)
#define UNITYENGINE_VECTOR4_SCALE_OFFSET UNITYSDK_OFFSET(0x1A497D70)
#define UNITYENGINE_VECTOR4_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x22EF660)
#define UNITYENGINE_VECTOR4_SET_OFFSET UNITYSDK_OFFSET(0x24C30)
#define UNITYENGINE_VECTOR4_SQRMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x22C8CE0)
#define UNITYENGINE_VECTOR4_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1A498B80)
#define UNITYENGINE_VECTOR4_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x22EF890)
#define UNITYENGINE_VECTOR4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22EF880)
#define UNITYENGINE_VECTOR4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A498BE0)
#define UNITYENGINE_VECTOR4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22C89D0)
#define UNITYENGINE_VECTOR4__CTOR_2_OFFSET UNITYSDK_OFFSET(0x22C89F0)
#define UNITYENGINE_VECTOR4__CTOR_3_OFFSET UNITYSDK_OFFSET(0x22EF710)
#define UNITYENGINE_VECTOR4__CTOR_4_OFFSET UNITYSDK_OFFSET(0x22EF710)
#define UNITYENGINE_VECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x24C30)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector4_TypeDefinitionIndex = 4041;

	struct alignas(4) Vector4
	{
		static ::UnityEngine::Vector4* StaticGet_negativeInfinityVector()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Vector4_TypeDefinitionIndex)->GetStaticField(0x100);
		}
		static ::UnityEngine::Vector4* StaticGet_zeroVector()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Vector4_TypeDefinitionIndex)->GetStaticField(0x110);
		}
		static ::UnityEngine::Vector4* StaticGet_oneVector()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Vector4_TypeDefinitionIndex)->GetStaticField(0x120);
		}
		static ::UnityEngine::Vector4* StaticGet_positiveInfinityVector()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Vector4_TypeDefinitionIndex)->GetStaticField(0x130);
		}
		// static const ::System::Single kEpsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CTOR_OFFSET))(this, x, y, z, w);
		}

		::System::Void _ctor_1(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CTOR_1_OFFSET))(this, x, y, z);
		}

		::System::Void _ctor_2(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CTOR_2_OFFSET))(this, x, y);
		}

		/*
		::System::Void _ctor_3(::UnityEngine::Vector3 xyz, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CTOR_3_OFFSET))(this, xyz, w);
		}
		*/

		/*
		::System::Void _ctor_4(::UnityEngine::Color rgb, ::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CTOR_4_OFFSET))(this, rgb, a);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void Set(::System::Single newX, ::System::Single newY, ::System::Single newZ, ::System::Single newW)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SET_OFFSET))(this, newX, newY, newZ, newW);
		}

		static ::UnityEngine::Vector4 Lerp(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_LERP_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector4 LerpUnclamped(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector4 MoveTowards(::UnityEngine::Vector4 current, ::UnityEngine::Vector4 target, ::System::Single maxDistanceDelta)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_MOVETOWARDS_OFFSET))(current, target, maxDistanceDelta);
		}

		static ::UnityEngine::Vector4 Scale(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SCALE_OFFSET))(a, b);
		}

		::System::Void Scale_1(::UnityEngine::Vector4 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SCALE_1_OFFSET))(this, scale);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector4 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_EQUALS_1_OFFSET))(this, other);
		}

		static ::UnityEngine::Vector4 Normalize(::UnityEngine::Vector4 a)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_NORMALIZE_OFFSET))(a);
		}

		::System::Void Normalize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_NORMALIZE_1_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_normalized()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_NORMALIZED_OFFSET))(this);
		}

		static ::System::Single Dot(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_DOT_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector4 Project(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_PROJECT_OFFSET))(a, b);
		}

		static ::System::Single Distance(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_DISTANCE_OFFSET))(a, b);
		}

		static ::System::Single Magnitude(::UnityEngine::Vector4 a)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_MAGNITUDE_OFFSET))(a);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::UnityEngine::Vector4 Min(::UnityEngine::Vector4 lhs, ::UnityEngine::Vector4 rhs)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_MIN_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector4 Max(::UnityEngine::Vector4 lhs, ::UnityEngine::Vector4 rhs)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_MAX_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector4 get_zero()
		{
			return ((::UnityEngine::Vector4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Vector4 get_one()
		{
			return ((::UnityEngine::Vector4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_ONE_OFFSET))();
		}

		static ::UnityEngine::Vector4 get_positiveInfinity()
		{
			return ((::UnityEngine::Vector4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_POSITIVEINFINITY_OFFSET))();
		}

		static ::UnityEngine::Vector4 get_negativeInfinity()
		{
			return ((::UnityEngine::Vector4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_NEGATIVEINFINITY_OFFSET))();
		}

		static ::UnityEngine::Vector4 op_Addition(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_ADDITION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector4 op_Subtraction(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector4 op_UnaryNegation(::UnityEngine::Vector4 a)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::UnityEngine::Vector4 op_Multiply(::UnityEngine::Vector4 a, ::System::Single d)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::UnityEngine::Vector4 op_Multiply_1(::System::Single d, ::UnityEngine::Vector4 a)
		{
			return ((::UnityEngine::Vector4(*)(::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::UnityEngine::Vector4 op_Division(::UnityEngine::Vector4 a, ::System::Single d)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_DIVISION_OFFSET))(a, d);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Vector4 lhs, ::UnityEngine::Vector4 rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Vector4 lhs, ::UnityEngine::Vector4 rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::UnityEngine::Vector4 op_Implicit(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector3 op_Implicit_1(::UnityEngine::Vector4 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector4 op_Implicit_2(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_2_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Implicit_3(::UnityEngine::Vector4 v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_3_OFFSET))(v);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_TOSTRING_1_OFFSET))(this, format);
		}

		static ::System::Single SqrMagnitude(::UnityEngine::Vector4 a)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SQRMAGNITUDE_OFFSET))(a);
		}

		::System::Single SqrMagnitude_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SQRMAGNITUDE_1_OFFSET))(this);
		}
	};
}
