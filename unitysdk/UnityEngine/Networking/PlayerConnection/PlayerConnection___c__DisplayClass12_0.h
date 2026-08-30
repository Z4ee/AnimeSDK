#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents_MessageTypeSubscribers; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED3FFD0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION___C__DISPLAYCLASS12_0__REGISTER_B__0_OFFSET UNITYSDK_OFFSET(0x1ED41A50)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerConnection___c__DisplayClass12_0_TypeDefinitionIndex = 4671;

	class PlayerConnection___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Guid messageId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Register_b__0(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION___C__DISPLAYCLASS12_0__REGISTER_B__0_OFFSET))(this, a1);
		}
	};
}
