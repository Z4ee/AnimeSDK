#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR2INT_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x18A5D950)
#define UNITYENGINE_VECTOR2INT_CLAMP_OFFSET UNITYSDK_OFFSET(0x211D540)
#define UNITYENGINE_VECTOR2INT_DISTANCE_OFFSET UNITYSDK_OFFSET(0x18A5D7A0)
#define UNITYENGINE_VECTOR2INT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20E84C0)
#define UNITYENGINE_VECTOR2INT_EQUALS_OFFSET UNITYSDK_OFFSET(0x211D580)
#define UNITYENGINE_VECTOR2INT_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x18A5D910)
#define UNITYENGINE_VECTOR2INT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x211D5B0)
#define UNITYENGINE_VECTOR2INT_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x18A5DEA0)
#define UNITYENGINE_VECTOR2INT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x211D4C0)
#define UNITYENGINE_VECTOR2INT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x18A5DEB0)
#define UNITYENGINE_VECTOR2INT_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x211D4E0)
#define UNITYENGINE_VECTOR2INT_GET_ONE_OFFSET UNITYSDK_OFFSET(0x18A5DE80)
#define UNITYENGINE_VECTOR2INT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x18A5DEC0)
#define UNITYENGINE_VECTOR2INT_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x211D510)
#define UNITYENGINE_VECTOR2INT_GET_UP_OFFSET UNITYSDK_OFFSET(0x18A5DE90)
#define UNITYENGINE_VECTOR2INT_GET_X_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_VECTOR2INT_GET_Y_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define UNITYENGINE_VECTOR2INT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x18A5DE70)
#define UNITYENGINE_VECTOR2INT_MAX_OFFSET UNITYSDK_OFFSET(0x18A5D810)
#define UNITYENGINE_VECTOR2INT_MIN_OFFSET UNITYSDK_OFFSET(0x18A5D7E0)
#define UNITYENGINE_VECTOR2INT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x18A5DB20)
#define UNITYENGINE_VECTOR2INT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x18A5DBC0)
#define UNITYENGINE_VECTOR2INT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18A5DBF0)
#define UNITYENGINE_VECTOR2INT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x18A5D8E0)
#define UNITYENGINE_VECTOR2INT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18A5D8C0)
#define UNITYENGINE_VECTOR2INT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18A5DC00)
#define UNITYENGINE_VECTOR2INT_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x18A5DB80)
#define UNITYENGINE_VECTOR2INT_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x18A5DBA0)
#define UNITYENGINE_VECTOR2INT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x18A5DB60)
#define UNITYENGINE_VECTOR2INT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x18A5DB40)
#define UNITYENGINE_VECTOR2INT_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x18A5DB00)
#define UNITYENGINE_VECTOR2INT_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x18A5D990)
#define UNITYENGINE_VECTOR2INT_SCALE_1_OFFSET UNITYSDK_OFFSET(0x211D520)
#define UNITYENGINE_VECTOR2INT_SCALE_OFFSET UNITYSDK_OFFSET(0x18A5D840)
#define UNITYENGINE_VECTOR2INT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x211D4D0)
#define UNITYENGINE_VECTOR2INT_SET_OFFSET UNITYSDK_OFFSET(0x72EF0)
#define UNITYENGINE_VECTOR2INT_SET_X_OFFSET UNITYSDK_OFFSET(0x29130)
#define UNITYENGINE_VECTOR2INT_SET_Y_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_VECTOR2INT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x211D5C0)
#define UNITYENGINE_VECTOR2INT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A5DED0)
#define UNITYENGINE_VECTOR2INT__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector2Int_TypeDefinitionIndex = 4037;

	struct alignas(4) Vector2Int
	{
		static ::UnityEngine::Vector2Int* StaticGet_s_Down()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6110);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Left()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6118);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Right()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6120);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Zero()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6128);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_One()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6130);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Up()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x6138);
		}
		::System::Int32 m_X; // 0x10
		::System::Int32 m_Y; // 0x14

		::System::Void _ctor(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT__CTOR_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT__CCTOR_OFFSET))();
		}

		::System::Int32 get_x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_X_OFFSET))(this, value);
		}

		::System::Int32 get_y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_Y_OFFSET))(this, value);
		}

		::System::Void Set(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_OFFSET))(this, x, y);
		}

		::System::Int32 get_Item(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Int32 get_sqrMagnitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::System::Single Distance(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_DISTANCE_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int Min(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_MIN_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector2Int Max(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_MAX_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector2Int Scale(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SCALE_OFFSET))(a, b);
		}

		::System::Void Scale_1(::UnityEngine::Vector2Int scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_SCALE_1_OFFSET))(this, scale);
		}

		::System::Void Clamp(::UnityEngine::Vector2Int min, ::UnityEngine::Vector2Int max)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_CLAMP_OFFSET))(this, min, max);
		}

		/*
		static ::UnityEngine::Vector2 op_Implicit(::UnityEngine::Vector2Int v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector3Int op_Explicit(::UnityEngine::Vector2Int v)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector2Int FloorToInt(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_FLOORTOINT_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector2Int CeilToInt(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_CEILTOINT_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Vector2Int RoundToInt(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_ROUNDTOINT_OFFSET))(v);
		}
		*/

		static ::UnityEngine::Vector2Int op_UnaryNegation(::UnityEngine::Vector2Int v)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_UNARYNEGATION_OFFSET))(v);
		}

		static ::UnityEngine::Vector2Int op_Addition(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_ADDITION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int op_Subtraction(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int op_Multiply(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_MULTIPLY_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int op_Multiply_1(::System::Int32 a, ::UnityEngine::Vector2Int b)
		{
			return ((::UnityEngine::Vector2Int(*)(::System::Int32, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_MULTIPLY_1_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int op_Multiply_2(::UnityEngine::Vector2Int a, ::System::Int32 b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_MULTIPLY_2_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int op_Division(::UnityEngine::Vector2Int a, ::System::Int32 b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_DIVISION_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector2Int other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_EQUALS_1_OFFSET))(this, other);
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
