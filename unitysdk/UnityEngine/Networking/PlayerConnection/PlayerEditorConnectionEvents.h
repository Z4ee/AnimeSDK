#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }
namespace UnityEngine::Networking::PlayerConnection { class MessageEventArgs; }
namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_ConnectionChangeEvent; }
namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageTypeSubscribers; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_ADDANDCREATE_OFFSET UNITYSDK_OFFSET(0x1E31BFD0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_INVOKEMESSAGEIDSUBSCRIBERS_OFFSET UNITYSDK_OFFSET(0x1E31BBB0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_UNREGISTERMANAGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E31C170)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E31C2B0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents_TypeDefinitionIndex = 5679;

	class PlayerEditorConnectionEvents : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*>* messageTypeSubscribers; // 0x10
		::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* connectionEvent; // 0x18
		::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_ConnectionChangeEvent* disconnectionEvent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void InvokeMessageIdSubscribers(::System::Guid messageId, ::Il2CppArray<::System::Byte>* data, ::System::Int32 playerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_INVOKEMESSAGEIDSUBSCRIBERS_OFFSET))(this, messageId, data, playerId);
		}

		::UnityEngine::Events::UnityEvent_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* AddAndCreate(::System::Guid messageId)
		{
			return ((::UnityEngine::Events::UnityEvent_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_ADDANDCREATE_OFFSET))(this, messageId);
		}

		::System::Void UnregisterManagedCallback(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS_UNREGISTERMANAGEDCALLBACK_OFFSET))(this, messageId, callback);
		}
	};
}
