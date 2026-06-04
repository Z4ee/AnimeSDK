#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR3INT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x388DCB0)
#define UNITYENGINE_VECTOR3INT_EQUALS_OFFSET UNITYSDK_OFFSET(0x388DC70)
#define UNITYENGINE_VECTOR3INT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x388DCE0)
#define UNITYENGINE_VECTOR3INT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x388DC50)
#define UNITYENGINE_VECTOR3INT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1B2E8360)
#define UNITYENGINE_VECTOR3INT_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1B2E8320)
#define UNITYENGINE_VECTOR3INT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1B2E8380)
#define UNITYENGINE_VECTOR3INT_GET_UP_OFFSET UNITYSDK_OFFSET(0x1B2E8340)
#define UNITYENGINE_VECTOR3INT_GET_X_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_VECTOR3INT_GET_Y_OFFSET UNITYSDK_OFFSET(0x1E110)
#define UNITYENGINE_VECTOR3INT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1B2E8300)
#define UNITYENGINE_VECTOR3INT_GET_Z_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define UNITYENGINE_VECTOR3INT_MAX_OFFSET UNITYSDK_OFFSET(0x1B2E7EF0)
#define UNITYENGINE_VECTOR3INT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B2E7F50)
#define UNITYENGINE_VECTOR3INT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2E7FE0)
#define UNITYENGINE_VECTOR3INT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B2E7F30)
#define UNITYENGINE_VECTOR3INT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2E8000)
#define UNITYENGINE_VECTOR3INT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B2E7FB0)
#define UNITYENGINE_VECTOR3INT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B2E7F70)
#define UNITYENGINE_VECTOR3INT_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1B2E7F90)
#define UNITYENGINE_VECTOR3INT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x388DC60)
#define UNITYENGINE_VECTOR3INT_SET_OFFSET UNITYSDK_OFFSET(0x82420)
#define UNITYENGINE_VECTOR3INT_SET_X_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define UNITYENGINE_VECTOR3INT_SET_Y_OFFSET UNITYSDK_OFFSET(0x21F0)
#define UNITYENGINE_VECTOR3INT_SET_Z_OFFSET UNITYSDK_OFFSET(0xDAE0)
#define UNITYENGINE_VECTOR3INT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x388DD10)
#define UNITYENGINE_VECTOR3INT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2E83A0)
#define UNITYENGINE_VECTOR3INT__CTOR_OFFSET UNITYSDK_OFFSET(0x82420)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector3Int_TypeDefinitionIndex = 4214;

	struct alignas(4) Vector3Int
	{
		static ::UnityEngine::Vector3Int* StaticGet_s_Zero()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x1B0);
		}
		static ::UnityEngine::Vector3Int* StaticGet_s_One()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x1BC);
		}
		static ::UnityEngine::Vector3Int* StaticGet_s_Right()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x1C8);
		}
		static ::UnityEngine::Vector3Int* StaticGet_s_Down()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x1D4);
		}
		static ::UnityEngine::Vector3Int* StaticGet_s_Left()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x1E0);
		}
		static ::UnityEngine::Vector3Int* StaticGet_s_Up()
		{
			return (::UnityEngine::Vector3Int*)Il2CppClass::FromTypeDefinitionIndex(Vector3Int_TypeDefinitionIndex)->GetStaticField(0x1EC);
		}
		::System::Int32 m_X; // 0x10
		::System::Int32 m_Y; // 0x14
		::System::Int32 m_Z; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT__CCTOR_OFFSET))();
		}

		::System::Int32 get_x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_X_OFFSET))(this, a1);
		}

		::System::Int32 get_y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_Y_OFFSET))(this, a1);
		}

		::System::Int32 get_z()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_Z_OFFSET))(this);
		}

		::System::Void set_z(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_Z_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_Item(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3Int Max(::UnityEngine::Vector3Int a1, ::UnityEngine::Vector3Int a2)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_MAX_OFFSET))(a1, a2);
		}

		/*
		static ::UnityEngine::Vector3 op_Implicit(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		static ::UnityEngine::Vector3Int op_Addition(::UnityEngine::Vector3Int a1, ::UnityEngine::Vector3Int a2)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3Int op_Subtraction(::UnityEngine::Vector3Int a1, ::UnityEngine::Vector3Int a2)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3Int op_UnaryNegation(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3Int op_Multiply(::UnityEngine::Vector3Int a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Vector3Int a1, ::UnityEngine::Vector3Int a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Vector3Int a1, ::UnityEngine::Vector3Int a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_TOSTRING_OFFSET))(this);
		}

		static ::UnityEngine::Vector3Int get_zero()
		{
			return ((::UnityEngine::Vector3Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Vector3Int get_one()
		{
			return ((::UnityEngine::Vector3Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_ONE_OFFSET))();
		}

		static ::UnityEngine::Vector3Int get_up()
		{
			return ((::UnityEngine::Vector3Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_UP_OFFSET))();
		}

		static ::UnityEngine::Vector3Int get_left()
		{
			return ((::UnityEngine::Vector3Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_LEFT_OFFSET))();
		}

		static ::UnityEngine::Vector3Int get_right()
		{
			return ((::UnityEngine::Vector3Int(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3INT_GET_RIGHT_OFFSET))();
		}
	};
}
