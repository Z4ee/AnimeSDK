#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::Networking::PlayerConnection { class MessageEventArgs; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A462E70)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents_MessageEvent_TypeDefinitionIndex = 4486;

	class PlayerEditorConnectionEvents_MessageEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
