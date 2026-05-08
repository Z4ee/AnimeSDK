#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_CONNECTIONCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DBC90)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeDefinitionIndex = 5677;

	class PlayerEditorConnectionEvents_ConnectionChangeEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_CONNECTIONCHANGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
