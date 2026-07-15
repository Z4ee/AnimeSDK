#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageTypeSubscribers; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11CEF0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS8_0__UNREGISTERMANAGEDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1D11D070)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents___c__DisplayClass8_0_TypeDefinitionIndex = 4670;

	class PlayerEditorConnectionEvents___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Guid messageId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UnregisterManagedCallback_b__0(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS8_0__UNREGISTERMANAGEDCALLBACK_B__0_OFFSET))(this, a1);
		}
	};
}
