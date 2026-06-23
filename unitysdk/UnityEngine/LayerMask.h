#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_LAYERMASK_GETMASK_OFFSET UNITYSDK_OFFSET(0x1D7AB2D0)
#define UNITYENGINE_LAYERMASK_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_LAYERMASK_LAYERTONAME_OFFSET UNITYSDK_OFFSET(0x1D7AB2B0)
#define UNITYENGINE_LAYERMASK_NAMETOLAYER_OFFSET UNITYSDK_OFFSET(0x1D7AB2C0)
#define UNITYENGINE_LAYERMASK_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1D7AB280)
#define UNITYENGINE_LAYERMASK_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D7AB270)
#define UNITYENGINE_LAYERMASK_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace UnityEngine
{
	inline static constexpr unsigned int LayerMask_TypeDefinitionIndex = 5349;

	struct alignas(4) LayerMask
	{
		::System::Int32 m_Mask; // 0x10

		static ::System::Int32 op_Implicit(::UnityEngine::LayerMask mask)
		{
			return ((::System::Int32(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_OP_IMPLICIT_OFFSET))(mask);
		}

		static ::UnityEngine::LayerMask op_Implicit_1(::System::Int32 intVal)
		{
			return ((::UnityEngine::LayerMask(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_OP_IMPLICIT_1_OFFSET))(intVal);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_SET_VALUE_OFFSET))(this, value);
		}

		static ::System::String* LayerToName(::System::Int32 layer)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_LAYERTONAME_OFFSET))(layer);
		}

		static ::System::Int32 NameToLayer(::System::String* layerName)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_NAMETOLAYER_OFFSET))(layerName);
		}

		static ::System::Int32 GetMask(::Il2CppArray<::System::String*>* layerNames)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LAYERMASK_GETMASK_OFFSET))(layerNames);
		}
	};
}
