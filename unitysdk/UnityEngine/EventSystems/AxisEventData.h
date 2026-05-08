#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseEventData.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::EventSystems { class EventSystem; }

#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEDIR_OFFSET UNITYSDK_OFFSET(0x1C152940)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C152920)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEDIR_OFFSET UNITYSDK_OFFSET(0x1C152950)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C152930)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C152960)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int AxisEventData_TypeDefinitionIndex = 8504;

	class AxisEventData : public ::UnityEngine::EventSystems::BaseEventData
	{
	public:
		::UnityEngine::Vector2 _moveVector_k__BackingField; // 0x20
		::UnityEngine::EventSystems::MoveDirection _moveDir_k__BackingField; // 0x28

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
	};
}
