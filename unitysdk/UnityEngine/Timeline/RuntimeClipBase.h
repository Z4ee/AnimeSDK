#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/RuntimeElement.h"

#define UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_INTERVALEND_OFFSET UNITYSDK_OFFSET(0x189B06B0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_INTERVALSTART_OFFSET UNITYSDK_OFFSET(0x189B0600)
#define UNITYENGINE_TIMELINE_RUNTIMECLIPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x189AF6A0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int RuntimeClipBase_TypeDefinitionIndex = 29865;

	class RuntimeClipBase : public ::UnityEngine::Timeline::RuntimeElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIPBASE__CTOR_OFFSET))(this);
		}

		::System::Int64 get_intervalStart()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_INTERVALSTART_OFFSET))(this);
		}

		::System::Int64 get_intervalEnd()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_INTERVALEND_OFFSET))(this);
		}
	};
}
