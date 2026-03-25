#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PROBUILDER_VECTOR3MASK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2108F00)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x20CBE40)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x29C50)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x2108DE0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2108E00)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_X_OFFSET UNITYSDK_OFFSET(0x2108CD0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_Y_OFFSET UNITYSDK_OFFSET(0x2108CF0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_Z_OFFSET UNITYSDK_OFFSET(0x2108D50)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x188B3720)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x188B3710)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x188B3AF0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x188B3730)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x188B36C0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1887DD90)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x188B3B00)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x188B3740)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x188B37A0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1887DE40)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x2108E70)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2108DD0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x188B3C70)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x791D0)
#define UNITYENGINE_PROBUILDER_VECTOR3MASK__CTOR_OFFSET UNITYSDK_OFFSET(0x2108D70)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Vector3Mask_TypeDefinitionIndex = 34187;

	struct alignas(1) Vector3Mask
	{
		static ::UnityEngine::ProBuilder::Vector3Mask* StaticGet_XYZ()
		{
			return (::UnityEngine::ProBuilder::Vector3Mask*)Il2CppClass::FromTypeDefinitionIndex(Vector3Mask_TypeDefinitionIndex)->GetStaticField(0xE0E0);
		}
		// static const ::System::Byte X = 0x1; // 0x0
		// static const ::System::Byte Y = 0x2; // 0x0
		// static const ::System::Byte Z = 0x4; // 0x0
		::System::Byte m_Mask; // 0x10

		/*
		::System::Void _ctor(::UnityEngine::Vector3 v, ::System::Single epsilon)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK__CTOR_OFFSET))(this, v, epsilon);
		}
		*/

		::System::Void _ctor_1(::System::Byte mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK__CTOR_1_OFFSET))(this, mask);
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
		static ::UnityEngine::Vector3 op_Implicit(::UnityEngine::ProBuilder::Vector3Mask mask)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_IMPLICIT_OFFSET))(mask);
		}
		*/

		/*
		static ::UnityEngine::ProBuilder::Vector3Mask op_Explicit(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::ProBuilder::Vector3Mask(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		static ::UnityEngine::ProBuilder::Vector3Mask op_BitwiseOr(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right)
		{
			return ((::UnityEngine::ProBuilder::Vector3Mask(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_BITWISEOR_OFFSET))(left, right);
		}

		static ::UnityEngine::ProBuilder::Vector3Mask op_BitwiseAnd(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right)
		{
			return ((::UnityEngine::ProBuilder::Vector3Mask(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_BITWISEAND_OFFSET))(left, right);
		}

		static ::UnityEngine::ProBuilder::Vector3Mask op_ExclusiveOr(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right)
		{
			return ((::UnityEngine::ProBuilder::Vector3Mask(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EXCLUSIVEOR_OFFSET))(left, right);
		}

		/*
		static ::UnityEngine::Vector3 op_Multiply(::UnityEngine::ProBuilder::Vector3Mask mask, ::System::Single value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::Vector3Mask, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_OFFSET))(mask, value);
		}
		*/

		/*
		static ::UnityEngine::Vector3 op_Multiply_1(::UnityEngine::ProBuilder::Vector3Mask mask, ::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_1_OFFSET))(mask, value);
		}
		*/

		/*
		static ::UnityEngine::Vector3 op_Multiply_2(::UnityEngine::Quaternion rotation, ::UnityEngine::ProBuilder::Vector3Mask mask)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_MULTIPLY_2_OFFSET))(rotation, mask);
		}
		*/

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Single get_Item(::System::Int32 i)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void set_Item(::System::Int32 i, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_SET_ITEM_OFFSET))(this, i, value);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::Vector3Mask other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR3MASK_GETHASHCODE_OFFSET))(this);
		}
	};
}
