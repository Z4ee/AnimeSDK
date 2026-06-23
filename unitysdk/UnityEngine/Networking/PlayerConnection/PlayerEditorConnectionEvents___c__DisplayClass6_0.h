#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageTypeSubscribers; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5BB60)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS6_0__INVOKEMESSAGEIDSUBSCRIBERS_B__0_OFFSET UNITYSDK_OFFSET(0x1DF5BB70)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents___c__DisplayClass6_0_TypeDefinitionIndex = 5681;

	class PlayerEditorConnectionEvents___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Guid messageId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InvokeMessageIdSubscribers_b__0(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS6_0__INVOKEMESSAGEIDSUBSCRIBERS_B__0_OFFSET))(this, x);
		}
	};
}
