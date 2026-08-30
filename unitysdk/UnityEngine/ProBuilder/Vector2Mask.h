#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_PROBUILDER_VECTOR2MASK_GET_X_OFFSET UNITYSDK_OFFSET(0x3AF6330)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_GET_Y_OFFSET UNITYSDK_OFFSET(0x3AF6350)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x192460B0)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x192460A0)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x192460C0)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x19246060)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19246030)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x192460D0)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x19246110)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18100)
#define UNITYENGINE_PROBUILDER_VECTOR2MASK__CTOR_OFFSET UNITYSDK_OFFSET(0x3AF6370)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Vector2Mask_TypeDefinitionIndex = 43258;

	struct alignas(1) Vector2Mask
	{
		static ::UnityEngine::ProBuilder::Vector2Mask* StaticGet_XY()
		{
			return (::UnityEngine::ProBuilder::Vector2Mask*)Il2CppClass::FromTypeDefinitionIndex(Vector2Mask_TypeDefinitionIndex)->GetStaticField(0x14D70);
		}
		// static const ::System::Byte X = 0x1; // 0x0
		// static const ::System::Byte Y = 0x2; // 0x0
		::System::Byte m_Mask; // 0x10

		/*
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK__CTOR_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void _ctor_1(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK__CCTOR_OFFSET))();
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_GET_X_OFFSET))(this);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_GET_Y_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Vector2 op_Implicit(::UnityEngine::ProBuilder::Vector2Mask a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::ProBuilder::Vector2Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::ProBuilder::Vector2Mask op_Implicit_1(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::ProBuilder::Vector2Mask(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		static ::UnityEngine::ProBuilder::Vector2Mask op_BitwiseOr(::UnityEngine::ProBuilder::Vector2Mask a1, ::UnityEngine::ProBuilder::Vector2Mask a2)
		{
			return ((::UnityEngine::ProBuilder::Vector2Mask(*)(::UnityEngine::ProBuilder::Vector2Mask, ::UnityEngine::ProBuilder::Vector2Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_BITWISEOR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vector2Mask op_BitwiseAnd(::UnityEngine::ProBuilder::Vector2Mask a1, ::UnityEngine::ProBuilder::Vector2Mask a2)
		{
			return ((::UnityEngine::ProBuilder::Vector2Mask(*)(::UnityEngine::ProBuilder::Vector2Mask, ::UnityEngine::ProBuilder::Vector2Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_BITWISEAND_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vector2Mask op_ExclusiveOr(::UnityEngine::ProBuilder::Vector2Mask a1, ::UnityEngine::ProBuilder::Vector2Mask a2)
		{
			return ((::UnityEngine::ProBuilder::Vector2Mask(*)(::UnityEngine::ProBuilder::Vector2Mask, ::UnityEngine::ProBuilder::Vector2Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_EXCLUSIVEOR_OFFSET))(a1, a2);
		}

		/*
		static ::UnityEngine::Vector2 op_Multiply(::UnityEngine::ProBuilder::Vector2Mask a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::ProBuilder::Vector2Mask, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VECTOR2MASK_OP_MULTIPLY_OFFSET))(a1, a2);
		}
		*/
	};
}
