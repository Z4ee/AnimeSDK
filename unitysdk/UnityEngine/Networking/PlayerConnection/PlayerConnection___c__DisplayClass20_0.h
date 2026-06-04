#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking::PlayerConnection { class MessageEventArgs; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION___C__DISPLAYCLASS20_0__BLOCKUNTILRECVMSG_B__0_OFFSET UNITYSDK_OFFSET(0x1B2B2FF0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B2370)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerConnection___c__DisplayClass20_0_TypeDefinitionIndex = 4658;

	class PlayerConnection___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Boolean msgReceived; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _BlockUntilRecvMsg_b__0(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION___C__DISPLAYCLASS20_0__BLOCKUNTILRECVMSG_B__0_OFFSET))(this, a1);
		}
	};
}
