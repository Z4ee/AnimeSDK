#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/RuntimeElement.h"

#define UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_INTERVALEND_OFFSET UNITYSDK_OFFSET(0x1F243D90)
#define UNITYENGINE_TIMELINE_RUNTIMECLIPBASE_GET_INTERVALSTART_OFFSET UNITYSDK_OFFSET(0x1F243D20)
#define UNITYENGINE_TIMELINE_RUNTIMECLIPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F243E20)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int RuntimeClipBase_TypeDefinitionIndex = 32997;

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
