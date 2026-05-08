#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x96F7D0)
#define UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x96F760)
#define UNITYENGINE_RENDERING_STENCILSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x96F7E0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1B4DE0C0)
#define UNITYENGINE_RENDERING_STENCILSTATE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3E5650)
#define UNITYENGINE_RENDERING_STENCILSTATE_SETCOMPAREFUNCTION_OFFSET UNITYSDK_OFFSET(0x96F6D0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SETFAILOPERATION_OFFSET UNITYSDK_OFFSET(0x96F6F0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SETPASSOPERATION_OFFSET UNITYSDK_OFFSET(0x96F6E0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SETZFAILOPERATION_OFFSET UNITYSDK_OFFSET(0x96F700)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONBACK_OFFSET UNITYSDK_OFFSET(0x5783A0)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONFRONT_OFFSET UNITYSDK_OFFSET(0x54B330)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2E7740)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x96F740)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x96F720)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x94CE60)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x96F710)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONBACK_OFFSET UNITYSDK_OFFSET(0x96F750)
#define UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONFRONT_OFFSET UNITYSDK_OFFSET(0x96F730)
#define UNITYENGINE_RENDERING_STENCILSTATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x96F660)
#define UNITYENGINE_RENDERING_STENCILSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x96F610)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int StencilState_TypeDefinitionIndex = 6240;

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

		::System::Void _ctor(::System::Boolean enabled, ::System::Byte readMask, ::System::Byte writeMask, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::StencilOp passOperation, ::UnityEngine::Rendering::StencilOp failOperation, ::UnityEngine::Rendering::StencilOp zFailOperation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Byte, ::System::Byte, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE__CTOR_OFFSET))(this, enabled, readMask, writeMask, compareFunction, passOperation, failOperation, zFailOperation);
		}

		::System::Void _ctor_1(::System::Boolean enabled, ::System::Byte readMask, ::System::Byte writeMask, ::UnityEngine::Rendering::CompareFunction compareFunctionFront, ::UnityEngine::Rendering::StencilOp passOperationFront, ::UnityEngine::Rendering::StencilOp failOperationFront, ::UnityEngine::Rendering::StencilOp zFailOperationFront, ::UnityEngine::Rendering::CompareFunction compareFunctionBack, ::UnityEngine::Rendering::StencilOp passOperationBack, ::UnityEngine::Rendering::StencilOp failOperationBack, ::UnityEngine::Rendering::StencilOp zFailOperationBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Byte, ::System::Byte, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE__CTOR_1_OFFSET))(this, enabled, readMask, writeMask, compareFunctionFront, passOperationFront, failOperationFront, zFailOperationFront, compareFunctionBack, passOperationBack, failOperationBack, zFailOperationBack);
		}

		static ::UnityEngine::Rendering::StencilState get_defaultValue()
		{
			return ((::UnityEngine::Rendering::StencilState(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_DEFAULTVALUE_OFFSET))();
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Void SetCompareFunction(::UnityEngine::Rendering::CompareFunction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SETCOMPAREFUNCTION_OFFSET))(this, value);
		}

		::System::Void SetPassOperation(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SETPASSOPERATION_OFFSET))(this, value);
		}

		::System::Void SetFailOperation(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SETFAILOPERATION_OFFSET))(this, value);
		}

		::System::Void SetZFailOperation(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SETZFAILOPERATION_OFFSET))(this, value);
		}

		::System::Void set_compareFunctionFront(::UnityEngine::Rendering::CompareFunction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONFRONT_OFFSET))(this, value);
		}

		::System::Void set_passOperationFront(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONFRONT_OFFSET))(this, value);
		}

		::System::Void set_failOperationFront(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONFRONT_OFFSET))(this, value);
		}

		::System::Void set_zFailOperationFront(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONFRONT_OFFSET))(this, value);
		}

		::System::Void set_compareFunctionBack(::UnityEngine::Rendering::CompareFunction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_COMPAREFUNCTIONBACK_OFFSET))(this, value);
		}

		::System::Void set_passOperationBack(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_PASSOPERATIONBACK_OFFSET))(this, value);
		}

		::System::Void set_failOperationBack(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_FAILOPERATIONBACK_OFFSET))(this, value);
		}

		::System::Void set_zFailOperationBack(::UnityEngine::Rendering::StencilOp value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_SET_ZFAILOPERATIONBACK_OFFSET))(this, value);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::StencilState other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::StencilState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_STENCILSTATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
