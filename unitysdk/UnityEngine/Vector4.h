#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR4_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1B2E8B70)
#define UNITYENGINE_VECTOR4_DOT_OFFSET UNITYSDK_OFFSET(0x1B2E8A90)
#define UNITYENGINE_VECTOR4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x38695B0)
#define UNITYENGINE_VECTOR4_EQUALS_OFFSET UNITYSDK_OFFSET(0x388DEA0)
#define UNITYENGINE_VECTOR4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3858310)
#define UNITYENGINE_VECTOR4_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x388DD20)
#define UNITYENGINE_VECTOR4_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3858590)
#define UNITYENGINE_VECTOR4_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1B2E8CB0)
#define UNITYENGINE_VECTOR4_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x388DF70)
#define UNITYENGINE_VECTOR4_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1B2E8C90)
#define UNITYENGINE_VECTOR4_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1B2E8CA0)
#define UNITYENGINE_VECTOR4_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x38585D0)
#define UNITYENGINE_VECTOR4_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1B2E8980)
#define UNITYENGINE_VECTOR4_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1B2E8660)
#define UNITYENGINE_VECTOR4_LERP_OFFSET UNITYSDK_OFFSET(0x1B2E8620)
#define UNITYENGINE_VECTOR4_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1B2E8920)
#define UNITYENGINE_VECTOR4_MAX_OFFSET UNITYSDK_OFFSET(0x1B2E8C70)
#define UNITYENGINE_VECTOR4_MIN_OFFSET UNITYSDK_OFFSET(0x1B2E8C50)
#define UNITYENGINE_VECTOR4_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1B2E8680)
#define UNITYENGINE_VECTOR4_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x388DEF0)
#define UNITYENGINE_VECTOR4_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1B2E88A0)
#define UNITYENGINE_VECTOR4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B2E8CC0)
#define UNITYENGINE_VECTOR4_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1B2E8960)
#define UNITYENGINE_VECTOR4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2E8D20)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B2E8DE0)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1B2E8E00)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1B2E8E20)
#define UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B2E8DC0)
#define UNITYENGINE_VECTOR4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2E8D70)
#define UNITYENGINE_VECTOR4_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1B2E8D00)
#define UNITYENGINE_VECTOR4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B2E8B50)
#define UNITYENGINE_VECTOR4_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B2E8BC0)
#define UNITYENGINE_VECTOR4_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1B2E8CE0)
#define UNITYENGINE_VECTOR4_PROJECT_OFFSET UNITYSDK_OFFSET(0x1B2E8AC0)
#define UNITYENGINE_VECTOR4_SCALE_1_OFFSET UNITYSDK_OFFSET(0x3858300)
#define UNITYENGINE_VECTOR4_SCALE_OFFSET UNITYSDK_OFFSET(0x1B2E8730)
#define UNITYENGINE_VECTOR4_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x388DDD0)
#define UNITYENGINE_VECTOR4_SET_OFFSET UNITYSDK_OFFSET(0x259B0)
#define UNITYENGINE_VECTOR4_SQRMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x38585D0)
#define UNITYENGINE_VECTOR4_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1B2E9420)
#define UNITYENGINE_VECTOR4_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x388E000)
#define UNITYENGINE_VECTOR4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x388DFF0)
#define UNITYENGINE_VECTOR4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2E9480)
#define UNITYENGINE_VECTOR4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x38582C0)
#define UNITYENGINE_VECTOR4__CTOR_2_OFFSET UNITYSDK_OFFSET(0x38582E0)
#define UNITYENGINE_VECTOR4__CTOR_3_OFFSET UNITYSDK_OFFSET(0x388DE80)
#define UNITYENGINE_VECTOR4__CTOR_4_OFFSET UNITYSDK_OFFSET(0x388DE80)
#define UNITYENGINE_VECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x259B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector4_TypeDefinitionIndex = 4215;

	struct alignas(4) Vector4
	{
		static ::UnityEngine::Vector4* StaticGet_oneVector()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Vector4_TypeDefinitionIndex)->GetStaticField(0x200);
		}
		static ::UnityEngine::Vector4* StaticGet_negativeInfinityVector()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Vector4_TypeDefinitionIndex)->GetStaticField(0x210);
		}
		static ::UnityEngine::Vector4* StaticGet_zeroVector()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Vector4_TypeDefinitionIndex)->GetStaticField(0x220);
		}
		static ::UnityEngine::Vector4* StaticGet_positiveInfinityVector()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Vector4_TypeDefinitionIndex)->GetStaticField(0x230);
		}
		// static const ::System::Single kEpsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CTOR_2_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void _ctor_3(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CTOR_3_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Void _ctor_4(::UnityEngine::Color a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CTOR_4_OFFSET))(this, a1, a2);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4__CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Set(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SET_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector4 Lerp(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_LERP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector4 LerpUnclamped(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_LERPUNCLAMPED_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector4 MoveTowards(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_MOVETOWARDS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector4 Scale(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SCALE_OFFSET))(a1, a2);
		}

		::System::Void Scale_1(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SCALE_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_EQUALS_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector4 Normalize(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_NORMALIZE_OFFSET))(a1);
		}

		::System::Void Normalize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_NORMALIZE_1_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_normalized()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_NORMALIZED_OFFSET))(this);
		}

		static ::System::Single Dot(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_DOT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 Project(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_PROJECT_OFFSET))(a1, a2);
		}

		static ::System::Single Distance(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_DISTANCE_OFFSET))(a1, a2);
		}

		static ::System::Single Magnitude(::UnityEngine::Vector4 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_MAGNITUDE_OFFSET))(a1);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::UnityEngine::Vector4 Min(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_MIN_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 Max(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_MAX_OFFSET))(a1, a2);
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

		static ::UnityEngine::Vector4 op_Addition(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 op_Subtraction(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 op_UnaryNegation(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 op_Multiply(::UnityEngine::Vector4 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 op_Multiply_1(::System::Single a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 op_Division(::UnityEngine::Vector4 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		/*
		static ::UnityEngine::Vector4 op_Implicit(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector3 op_Implicit_1(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector4 op_Implicit_2(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_2_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Implicit_3(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_OP_IMPLICIT_3_OFFSET))(a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_TOSTRING_1_OFFSET))(this, a1);
		}

		static ::System::Single SqrMagnitude(::UnityEngine::Vector4 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SQRMAGNITUDE_OFFSET))(a1);
		}

		::System::Single SqrMagnitude_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR4_SQRMAGNITUDE_1_OFFSET))(this);
		}
	};
}
