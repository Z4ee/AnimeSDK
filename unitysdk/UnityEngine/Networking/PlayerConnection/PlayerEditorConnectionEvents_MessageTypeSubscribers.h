#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageEvent; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS_GET_MESSAGETYPEID_OFFSET UNITYSDK_OFFSET(0x1A462CD0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS_SET_MESSAGETYPEID_OFFSET UNITYSDK_OFFSET(0x1A462E40)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A462DE0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents_MessageTypeSubscribers_TypeDefinitionIndex = 4488;

	class PlayerEditorConnectionEvents_MessageTypeSubscribers : public ::System::Object
	{
	public:
		::System::String* m_messageTypeId; // 0x10
		::System::Int32 subscriberCount; // 0x18
		::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageEvent* messageCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS__CTOR_OFFSET))(this);
		}

		::System::Guid get_MessageTypeId()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS_GET_MESSAGETYPEID_OFFSET))(this);
		}

		::System::Void set_MessageTypeId(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_MESSAGETYPESUBSCRIBERS_SET_MESSAGETYPEID_OFFSET))(this, value);
		}
	};
}
