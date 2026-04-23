#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/AbstractEventData.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseInputModule; }
namespace UnityEngine::EventSystems { class EventSystem; }

#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_CURRENTINPUTMODULE_OFFSET UNITYSDK_OFFSET(0x1A528440)
#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_SELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1A528460)
#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_SET_SELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1A528480)
#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A528430)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseEventData_TypeDefinitionIndex = 5784;

	class BaseEventData : public ::UnityEngine::EventSystems::AbstractEventData
	{
	public:
		::UnityEngine::EventSystems::EventSystem* m_EventSystem; // 0x18

		::System::Void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA__CTOR_OFFSET))(this, eventSystem);
		}

		::UnityEngine::EventSystems::BaseInputModule* get_currentInputModule()
		{
			return ((::UnityEngine::EventSystems::BaseInputModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_CURRENTINPUTMODULE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_selectedObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_SELECTEDOBJECT_OFFSET))(this);
		}

		::System::Void set_selectedObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_SET_SELECTEDOBJECT_OFFSET))(this, value);
		}
	};
}
