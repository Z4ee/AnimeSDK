#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_LAYERMASK_GETMASK_OFFSET UNITYSDK_OFFSET(0x1CCC61C0)
#define UNITYENGINE_LAYERMASK_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x167710)
#define UNITYENGINE_LAYERMASK_NAMETOLAYER_OFFSET UNITYSDK_OFFSET(0x1CCC61B0)
#define UNITYENGINE_LAYERMASK_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1CCC6180)
#define UNITYENGINE_LAYERMASK_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1CCC6170)
#define UNITYENGINE_LAYERMASK_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x167520)

namespace UnityEngine
{
	inline static constexpr unsigned int LayerMask_TypeDefinitionIndex = 4317;

	struct alignas(4) LayerMask
	{
		::System::Int32 m_Mask; // 0x10

		static ::System::Int32 op_Implicit(::UnityEngine::LayerMask a1)
		{
			return ((::System::Int32(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::LayerMask op_Implicit_1(::System::Int32 a1)
		{
			return ((::UnityEngine::LayerMask(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_OP_IMPLICIT_1_OFFSET))(a1);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_SET_VALUE_OFFSET))(this, a1);
		}

		static ::System::Int32 NameToLayer(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_NAMETOLAYER_OFFSET))(a1);
		}

		static ::System::Int32 GetMask(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_GETMASK_OFFSET))(a1);
		}
	};
}
