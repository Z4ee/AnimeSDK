#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageTypeSubscribers; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS7_0__ADDANDCREATE_B__0_OFFSET UNITYSDK_OFFSET(0x1B18B870)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B18B860)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerEditorConnectionEvents___c__DisplayClass7_0_TypeDefinitionIndex = 5680;

	class PlayerEditorConnectionEvents___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Guid messageId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddAndCreate_b__0(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYEREDITORCONNECTIONEVENTS___C__DISPLAYCLASS7_0__ADDANDCREATE_B__0_OFFSET))(this, x);
		}
	};
}
