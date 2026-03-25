#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseEventData.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::EventSystems { class EventSystem; }

#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEDIR_OFFSET UNITYSDK_OFFSET(0x18AECEF0)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVESUCCESS_OFFSET UNITYSDK_OFFSET(0x18AECF10)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x18AECED0)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEDIR_OFFSET UNITYSDK_OFFSET(0x18AECF00)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVESUCCESS_OFFSET UNITYSDK_OFFSET(0x18AECF20)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x18AECEE0)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18AECF30)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int AxisEventData_TypeDefinitionIndex = 5770;

	class AxisEventData : public ::UnityEngine::EventSystems::BaseEventData
	{
	public:
		::UnityEngine::Vector2 _moveVector_k__BackingField; // 0x20
		::UnityEngine::EventSystems::MoveDirection _moveDir_k__BackingField; // 0x28
		::System::Boolean _moveSuccess_k__BackingField; // 0x2C

		::System::Void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA__CTOR_OFFSET))(this, eventSystem);
		}

		::UnityEngine::Vector2 get_moveVector()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEVECTOR_OFFSET))(this);
		}

		::System::Void set_moveVector(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEVECTOR_OFFSET))(this, value);
		}

		::UnityEngine::EventSystems::MoveDirection get_moveDir()
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEDIR_OFFSET))(this);
		}

		::System::Void set_moveDir(::UnityEngine::EventSystems::MoveDirection value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEDIR_OFFSET))(this, value);
		}

		::System::Boolean get_moveSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVESUCCESS_OFFSET))(this);
		}

		::System::Void set_moveSuccess(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVESUCCESS_OFFSET))(this, value);
		}
	};
}
