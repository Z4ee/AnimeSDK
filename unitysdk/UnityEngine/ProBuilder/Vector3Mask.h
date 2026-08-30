#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PROBUILDER_VECTOR3MASK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BAF180)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B60310)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FC10)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x3BAF060)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3BAF080)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_X_OFFSET UNITYSDK_OFFSET(0x3BAEF50)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_Y_OFFSET UNITYSDK_OFFSET(0x3BAEF70)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_Z_OFFSET UNITYSDK_OFFSET(0x3BAEFD0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1EBCA950)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1EBCA940)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EBCAD20)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x1EBCA960)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1EBCA8F0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EB94B50)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EBCAD30)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1EBCA970)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1EBCA9D0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1EB94C00)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3BAF0F0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BAF050)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBCAEA0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14E860)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK__CTOR_OFFSET UNITYSDK_OFFSET(0x3BAEFF0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Vector3Mask_TypeDefinitionIndex = 43259;

	struct alignas(1) Vector3Mask
	{
		static ::UnityEngine::ProBuilder::Vector3Mask* StaticGet_XYZ()
		{
			return (::UnityEngine::ProBuilder::Vector3Mask*)Il2CppClass::FromTypeDefinitionIndex(Vector3Mask_TypeDefinitionIndex)->GetStaticField(0x13C10);
		}
		// static const ::System::Byte X = 0x1; // 0x0
		// static const ::System::Byte Y = 0x2; // 0x0
		// static const ::System::Byte Z = 0x4; // 0x0
		::System::Byte m_Mask; // 0x10

		/*
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK__CTOR_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void _ctor_1(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK__CCTOR_OFFSET))();
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_X_OFFSET))(this);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_Y_OFFSET))(this);
		}

		::System::Single get_z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_Z_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_TOSTRING_OFFSET))(this);
		}

		::System::Int32 get_active()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_ACTIVE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Vector3 op_Implicit(::UnityEngine::ProBuilder::Vector3Mask a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::ProBuilder::Vector3Mask op_Explicit(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::ProBuilder::Vector3Mask(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EXPLICIT_OFFSET))(a1);
		}
		*/

		static ::UnityEngine::ProBuilder::Vector3Mask op_BitwiseOr(::UnityEngine::ProBuilder::Vector3Mask a1, ::UnityEngine::ProBuilder::Vector3Mask a2)
		{
			return ((::UnityEngine::ProBuilder::Vector3Mask(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_BITWISEOR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vector3Mask op_BitwiseAnd(::UnityEngine::ProBuilder::Vector3Mask a1, ::UnityEngine::ProBuilder::Vector3Mask a2)
		{
			return ((::UnityEngine::ProBuilder::Vector3Mask(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_BITWISEAND_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vector3Mask op_ExclusiveOr(::UnityEngine::ProBuilder::Vector3Mask a1, ::UnityEngine::ProBuilder::Vector3Mask a2)
		{
			return ((::UnityEngine::ProBuilder::Vector3Mask(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EXCLUSIVEOR_OFFSET))(a1, a2);
		}

		/*
		static ::UnityEngine::Vector3 op_Multiply(::UnityEngine::ProBuilder::Vector3Mask a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::Vector3Mask, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector3 op_Multiply_1(::UnityEngine::ProBuilder::Vector3Mask a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector3 op_Multiply_2(::UnityEngine::Quaternion a1, ::UnityEngine::ProBuilder::Vector3Mask a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_2_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::Vector3Mask a1, ::UnityEngine::ProBuilder::Vector3Mask a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::Vector3Mask a1, ::UnityEngine::ProBuilder::Vector3Mask a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Single get_Item(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::Vector3Mask a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_GETHASHCODE_OFFSET))(this);
		}
	};
}
