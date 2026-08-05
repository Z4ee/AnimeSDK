#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR2INT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6340C0)
#define UNITYENGINE_VECTOR2INT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA552A0)
#define UNITYENGINE_VECTOR2INT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0E580)
#define UNITYENGINE_VECTOR2INT_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1EA67560)
#define UNITYENGINE_VECTOR2INT_GET_X_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_VECTOR2INT_GET_Y_OFFSET UNITYSDK_OFFSET(0x424ED0)
#define UNITYENGINE_VECTOR2INT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1EA67550)
#define UNITYENGINE_VECTOR2INT_MAX_OFFSET UNITYSDK_OFFSET(0x1EA67290)
#define UNITYENGINE_VECTOR2INT_MIN_OFFSET UNITYSDK_OFFSET(0x1EA67260)
#define UNITYENGINE_VECTOR2INT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EA67320)
#define UNITYENGINE_VECTOR2INT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EA672C0)
#define UNITYENGINE_VECTOR2INT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EA67330)
#define UNITYENGINE_VECTOR2INT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EA67300)
#define UNITYENGINE_VECTOR2INT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1EA672E0)
#define UNITYENGINE_VECTOR2INT_SET_X_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define UNITYENGINE_VECTOR2INT_SET_Y_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define UNITYENGINE_VECTOR2INT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA552D0)
#define UNITYENGINE_VECTOR2INT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA67570)
#define UNITYENGINE_VECTOR2INT__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector2Int_TypeDefinitionIndex = 5304;

	struct alignas(4) Vector2Int
	{
		static ::UnityEngine::Vector2Int* StaticGet_s_Zero()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x25A0);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Right()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x25A8);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Up()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x25B0);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Left()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x25B8);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_One()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x25C0);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_Down()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x25C8);
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

		static ::UnityEngine::Vector2Int Min(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_MIN_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector2Int Max(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_MAX_OFFSET))(lhs, rhs);
		}

		/*
		static ::UnityEngine::Vector2 op_Implicit(::UnityEngine::Vector2Int v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		static ::UnityEngine::Vector2Int op_Subtraction(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2Int op_Multiply(::UnityEngine::Vector2Int a, ::System::Int32 b)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2INT_OP_MULTIPLY_OFFSET))(a, b);
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
	};
}
