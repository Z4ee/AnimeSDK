#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_DOBATCHANIMATIONEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18A3AE10)
#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_GET_OFFSET UNITYSDK_OFFSET(0x2115A80)
#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A3AD60)
#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_INIT_OFFSET UNITYSDK_OFFSET(0x18A3AD70)
#define UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_UNINIT_OFFSET UNITYSDK_OFFSET(0x18A3ADD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimEventObjCB_TypeDefinitionIndex = 4593;

	struct alignas(8) BatchAnimEventObjCB
	{
		::System::UInt32 eventKey; // 0x10
		::System::Int16 animGroupIndex; // 0x14
		::System::Int16 animClipSlot; // 0x16
		::System::Int32 instanceId; // 0x18
		::System::IntPtr instancePtr; // 0x20

		::UnityEngine::Rendering::BatchAnimationInstance* Get()
		{
			return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_GET_OFFSET))(this);
		}

		static ::System::Void InitInternal(::System::IntPtr data, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_INITINTERNAL_OFFSET))(data, size);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_INIT_OFFSET))();
		}

		static ::System::Void UnInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_UNINIT_OFFSET))();
		}

		static ::System::Void DoBatchAnimationEvent_Internal(::UnityEngine::Rendering::BatchAnimation* ba, ::System::Int32 count)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMEVENTOBJCB_DOBATCHANIMATIONEVENT_INTERNAL_OFFSET))(ba, count);
		}
	};
}
