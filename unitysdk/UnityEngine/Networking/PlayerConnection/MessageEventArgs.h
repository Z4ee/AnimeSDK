#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_MESSAGEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18A26DB0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int MessageEventArgs_TypeDefinitionIndex = 4478;

	class MessageEventArgs : public ::System::Object
	{
	public:
		::System::Int32 playerId; // 0x10
		::Il2CppArray<::System::Byte>* data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_MESSAGEEVENTARGS__CTOR_OFFSET))(this);
		}
	};
}
