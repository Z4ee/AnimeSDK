#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CustomYieldInstruction.h"

#define UNITYENGINE_WAITFORSECONDSREALTIME_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x1AAE8D70)
#define UNITYENGINE_WAITFORSECONDSREALTIME_GET_WAITTIME_OFFSET UNITYSDK_OFFSET(0x1AAE8D50)
#define UNITYENGINE_WAITFORSECONDSREALTIME_SET_WAITTIME_OFFSET UNITYSDK_OFFSET(0x1AAE8D60)
#define UNITYENGINE_WAITFORSECONDSREALTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAE8DC0)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitForSecondsRealtime_TypeDefinitionIndex = 5374;

	class WaitForSecondsRealtime : public ::UnityEngine::CustomYieldInstruction
	{
	public:
		::System::Single _waitTime_k__BackingField; // 0x10
		::System::Single m_WaitUntilTime; // 0x14

		::System::Void _ctor(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME__CTOR_OFFSET))(this, time);
		}

		::System::Single get_waitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME_GET_WAITTIME_OFFSET))(this);
		}

		::System::Void set_waitTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME_SET_WAITTIME_OFFSET))(this, value);
		}

		::System::Boolean get_keepWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME_GET_KEEPWAITING_OFFSET))(this);
		}
	};
}
