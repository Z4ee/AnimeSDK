#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_GET_USED_OFFSET UNITYSDK_OFFSET(0x1FC44000)
#define UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_RESET_OFFSET UNITYSDK_OFFSET(0x1FC43F80)
#define UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_USE_OFFSET UNITYSDK_OFFSET(0x1FC43FC0)
#define UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC44010)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int AbstractEventData_TypeDefinitionIndex = 19358;

	class AbstractEventData : public ::System::Object
	{
	public:
		::System::Boolean m_Used; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_RESET_OFFSET))(this);
		}

		::System::Void Use()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_USE_OFFSET))(this);
		}

		::System::Boolean get_used()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_ABSTRACTEVENTDATA_GET_USED_OFFSET))(this);
		}
	};
}
