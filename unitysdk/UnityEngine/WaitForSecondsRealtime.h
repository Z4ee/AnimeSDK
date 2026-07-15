#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CustomYieldInstruction.h"

#define UNITYENGINE_WAITFORSECONDSREALTIME_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x1D22C950)
#define UNITYENGINE_WAITFORSECONDSREALTIME_GET_WAITTIME_OFFSET UNITYSDK_OFFSET(0x1D22C930)
#define UNITYENGINE_WAITFORSECONDSREALTIME_SET_WAITTIME_OFFSET UNITYSDK_OFFSET(0x1D22C940)
#define UNITYENGINE_WAITFORSECONDSREALTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22C9A0)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitForSecondsRealtime_TypeDefinitionIndex = 4356;

	class WaitForSecondsRealtime : public ::UnityEngine::CustomYieldInstruction
	{
	public:
		::System::Single _waitTime_k__BackingField; // 0x10
		::System::Single m_WaitUntilTime; // 0x14

		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME__CTOR_OFFSET))(this, a1);
		}

		::System::Single get_waitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME_GET_WAITTIME_OFFSET))(this);
		}

		::System::Void set_waitTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME_SET_WAITTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_keepWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME_GET_KEEPWAITING_OFFSET))(this);
		}
	};
}
