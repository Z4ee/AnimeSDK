#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR2INT_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x1D0DD210)
#define UNITYENGINE_VECTOR2INT_CLAMP_OFFSET UNITYSDK_OFFSET(0x3AD3520)
#define UNITYENGINE_VECTOR2INT_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1D0DD060)
#define UNITYENGINE_VECTOR2INT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x39E7D30)
#define UNITYENGINE_VECTOR2INT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AD3560)
#define UNITYENGINE_VECTOR2INT_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x1D0DD1C0)
#define UNITYENGINE_VECTOR2INT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38DA5E0)
#define UNITYENGINE_VECTOR2INT_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1D0DD6A0)
#define UNITYENGINE_VECTOR2INT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3AD34A0)
#define UNITYENGINE_VECTOR2INT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1D0DD6B0)
#define UNITYENGINE_VECTOR2INT_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3AD34C0)
#define UNITYENGINE_VECTOR2INT_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1D0DD680)
#define UNITYENGINE_VECTOR2INT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1D0DD6C0)
#define UNITYENGINE_VECTOR2INT_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3AD34F0)
#define UNITYENGINE_VECTOR2INT_GET_UP_OFFSET UNITYSDK_OFFSET(0x1D0DD690)
#define UNITYENGINE_VECTOR2INT_GET_X_OFFSET UNITYSDK_OFFSET(0x167710)
#define UNITYENGINE_VECTOR2INT_GET_Y_OFFSET UNITYSDK_OFFSET(0x7A7C20)
#define UNITYENGINE_VECTOR2INT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1D0DD670)
#define UNITYENGINE_VECTOR2INT_MAX_OFFSET UNITYSDK_OFFSET(0x1D0DD0D0)
#define UNITYENGINE_VECTOR2INT_MIN_OFFSET UNITYSDK_OFFSET(0x1D0DD0A0)
#define UNITYENGINE_VECTOR2INT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1D0DD3E0)
#define UNITYENGINE_VECTOR2INT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1D0DD480)
#define UNITYENGINE_VECTOR2INT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D0DD4B0)
#define UNITYENGINE_VECTOR2INT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1D0DD1A0)
#define UNITYENGINE_VECTOR2INT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D0DD180)
#define UNITYENGINE_VECTOR2INT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D0DD4C0)
#define UNITYENGINE_VECTOR2INT_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1D0DD440)
#define UNITYENGINE_VECTOR2INT_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1D0DD460)
#define UNITYENGINE_VECTOR2INT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1D0DD420)
#define UNITYENGINE_VECTOR2INT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1D0DD400)
#define UNITYENGINE_VECTOR2INT_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1D0DD3C0)
#define UNITYENGINE_VECTOR2INT_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x1D0DD260)
#define UNITYENGINE_VECTOR2INT_SCALE_1_OFFSET UNITYSDK_OFFSET(0x3AD3500)
#define UNITYENGINE_VECTOR2INT_SCALE_OFFSET UNITYSDK_OFFSET(0x1D0DD100)
#define UNITYENGINE_VECTOR2INT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3AD34B0)
#define UNITYENGINE_VECTOR2INT_SET_OFFSET UNITYSDK_OFFSET(0x6E5720)
#define UNITYENGINE_VECTOR2INT_SET_X_OFFSET UNITYSDK_OFFSET(0x167520)
#define UNITYENGINE_VECTOR2INT_SET_Y_OFFSET UNITYSDK_OFFSET(0xA4B350)
#define UNITYENGINE_VECTOR2INT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AD3590)
#define UNITYENGINE_VECTOR2INT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0DD6D0)
#define UNITYENGINE_VECTOR2INT__CTOR_OFFSET UNITYSDK_OFFSET(0x6E5720)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector2Int_TypeDefinitionIndex = 4218;

	struct alignas(4) Vector2Int
	{
		static ::UnityEngine::Vector2Int* StaticGet_s_One()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9CD0);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Down()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9CD8);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Zero()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9CE0);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Right()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9CE8);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Up()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9CF0);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Left()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9CF8);
		}
		::System::Int32 m_X; // 0x10
		::System::Int32 m_Y; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT__CCTOR_OFFSET))();
		}

		::System::Int32 get_x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_X_OFFSET))(this, a1);
		}

		::System::Int32 get_y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_Y_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Item(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Int32 get_sqrMagnitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::System::Single Distance(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_DISTANCE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2Int Min(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_MIN_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2Int Max(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_MAX_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2Int Scale(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SCALE_OFFSET))(a1, a2);
		}

		::System::Void Scale_1(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SCALE_1_OFFSET))(this, a1);
		}

		::System::Void Clamp(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_CLAMP_OFFSET))(this, a1, a2);
		}

		/*
		static ::UnityEngine::Vector2 op_Implicit(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector3Int op_Explicit(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_EXPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector2Int FloorToInt(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_FLOORTOINT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector2Int CeilToInt(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_CEILTOINT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector2Int RoundToInt(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_ROUNDTOINT_OFFSET))(a1);
		}
		*/

		static ::UnityEngine::Vector2Int op_UnaryNegation(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2Int op_Addition(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2Int op_Subtraction(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2Int op_Multiply(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2Int op_Multiply_1(::System::Int32 a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::System::Int32, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2Int op_Multiply_2(::UnityEngine::Vector2Int a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_MULTIPLY_2_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2Int op_Division(::UnityEngine::Vector2Int a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_TOSTRING_OFFSET))(this);
		}

		static ::UnityEngine::Vector2Int get_zero()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Vector2Int get_one()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_ONE_OFFSET))();
		}

		static ::UnityEngine::Vector2Int get_up()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_UP_OFFSET))();
		}

		static ::UnityEngine::Vector2Int get_down()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_DOWN_OFFSET))();
		}

		static ::UnityEngine::Vector2Int get_left()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_LEFT_OFFSET))();
		}

		static ::UnityEngine::Vector2Int get_right()
		{
			return ((::UnityEngine::Vector2Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_RIGHT_OFFSET))();
		}
	};
}
