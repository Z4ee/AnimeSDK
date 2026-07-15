#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseEventData.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::EventSystems { class EventSystem; }

#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEDIR_OFFSET UNITYSDK_OFFSET(0x19BD8FA0)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVESUCCESS_OFFSET UNITYSDK_OFFSET(0x19BD8FC0)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x19BD8F80)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEDIR_OFFSET UNITYSDK_OFFSET(0x19BD8FB0)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVESUCCESS_OFFSET UNITYSDK_OFFSET(0x19BD8FD0)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x19BD8F90)
#define UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD8FE0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int AxisEventData_TypeDefinitionIndex = 6064;

	class AxisEventData : public ::UnityEngine::EventSystems::BaseEventData
	{
	public:
		::UnityEngine::Vector2 _moveVector_k__BackingField; // 0x20
		::UnityEngine::EventSystems::MoveDirection _moveDir_k__BackingField; // 0x28
		::System::Boolean _moveSuccess_k__BackingField; // 0x2C

		::System::Void _ctor(::UnityEngine::EventSystems::EventSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA__CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_moveVector()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEVECTOR_OFFSET))(this);
		}

		::System::Void set_moveVector(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEVECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::EventSystems::MoveDirection get_moveDir()
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVEDIR_OFFSET))(this);
		}

		::System::Void set_moveDir(::UnityEngine::EventSystems::MoveDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVEDIR_OFFSET))(this, a1);
		}

		::System::Boolean get_moveSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_GET_MOVESUCCESS_OFFSET))(this);
		}

		::System::Void set_moveSuccess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_AXISEVENTDATA_SET_MOVESUCCESS_OFFSET))(this, a1);
		}
	};
}
