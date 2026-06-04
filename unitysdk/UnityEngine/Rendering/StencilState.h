#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x388C010)
#define UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x388BFA0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x388C020)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONBACK_OFFSET UNITYSDK_OFFSET(0x84E50)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONFRONT_OFFSET UNITYSDK_OFFSET(0x147C60)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x382D2B0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x3831180)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x383B560)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x3831170)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x3837330)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_READMASK_OFFSET UNITYSDK_OFFSET(0x3868AE0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0x3837310)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x386C460)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x3874560)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONBACK_OFFSET UNITYSDK_OFFSET(0x3874580)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONFRONT_OFFSET UNITYSDK_OFFSET(0x147C70)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x13CFF0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x38745A0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x3874550)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x3874590)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x3874540)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_READMASK_OFFSET UNITYSDK_OFFSET(0x3874520)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_WRITEMASK_OFFSET UNITYSDK_OFFSET(0x3874530)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x38745B0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x3874570)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int StencilState_TypeDefinitionIndex = 4755;

	struct alignas(1) StencilState
	{
		::System::Byte m_Enabled; // 0x10
		::System::Byte m_ReadMask; // 0x11
		::System::Byte m_WriteMask; // 0x12
		::System::Byte m_Padding; // 0x13
		::System::Byte m_CompareFunctionFront; // 0x14
		::System::Byte m_PassOperationFront; // 0x15
		::System::Byte m_FailOperationFront; // 0x16
		::System::Byte m_ZFailOperationFront; // 0x17
		::System::Byte m_CompareFunctionBack; // 0x18
		::System::Byte m_PassOperationBack; // 0x19
		::System::Byte m_FailOperationBack; // 0x1A
		::System::Byte m_ZFailOperationBack; // 0x1B

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Byte get_readMask()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_READMASK_OFFSET))(this);
		}

		::System::Void set_readMask(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_READMASK_OFFSET))(this, a1);
		}

		::System::Byte get_writeMask()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_WRITEMASK_OFFSET))(this);
		}

		::System::Void set_writeMask(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_WRITEMASK_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::CompareFunction get_compareFunctionFront()
		{
			return ((::UnityEngine::Rendering::CompareFunction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONFRONT_OFFSET))(this);
		}

		::System::Void set_compareFunctionFront(::UnityEngine::Rendering::CompareFunction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONFRONT_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::StencilOp get_passOperationFront()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONFRONT_OFFSET))(this);
		}

		::System::Void set_passOperationFront(::UnityEngine::Rendering::StencilOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONFRONT_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::StencilOp get_failOperationFront()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONFRONT_OFFSET))(this);
		}

		::System::Void set_failOperationFront(::UnityEngine::Rendering::StencilOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONFRONT_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::StencilOp get_zFailOperationFront()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONFRONT_OFFSET))(this);
		}

		::System::Void set_zFailOperationFront(::UnityEngine::Rendering::StencilOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONFRONT_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::CompareFunction get_compareFunctionBack()
		{
			return ((::UnityEngine::Rendering::CompareFunction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_COMPAREFUNCTIONBACK_OFFSET))(this);
		}

		::System::Void set_compareFunctionBack(::UnityEngine::Rendering::CompareFunction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONBACK_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::StencilOp get_passOperationBack()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_PASSOPERATIONBACK_OFFSET))(this);
		}

		::System::Void set_passOperationBack(::UnityEngine::Rendering::StencilOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONBACK_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::StencilOp get_failOperationBack()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_FAILOPERATIONBACK_OFFSET))(this);
		}

		::System::Void set_failOperationBack(::UnityEngine::Rendering::StencilOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONBACK_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::StencilOp get_zFailOperationBack()
		{
			return ((::UnityEngine::Rendering::StencilOp(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_ZFAILOPERATIONBACK_OFFSET))(this);
		}

		::System::Void set_zFailOperationBack(::UnityEngine::Rendering::StencilOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONBACK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::StencilState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::StencilState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
