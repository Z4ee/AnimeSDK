#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_DISCONNECTALL_OFFSET UNITYSDK_OFFSET(0x1B661FB0)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B661F70)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1B661F90)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_POLLINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B661E90)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_REGISTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B661EF0)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x1B661D80)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_TRYSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B661E70)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_DISCONNECTALL_OFFSET UNITYSDK_OFFSET(0x1B661FA0)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B661F60)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1B661F80)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_POLL_OFFSET UNITYSDK_OFFSET(0x1B661E80)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_REGISTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B661EA0)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B661CA0)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_TRYSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B661D90)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_UNREGISTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B661F00)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNREGISTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B661F50)
#define UNITYENGINE_PLAYERCONNECTIONINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B661FC0)

namespace UnityEngine
{
	inline static constexpr unsigned int PlayerConnectionInternal_TypeDefinitionIndex = 5309;

	class PlayerConnectionInternal : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_IPlayerEditorConnectionNative_SendMessage(::System::Guid messageId, ::Il2CppArray<::System::Byte>* data, ::System::Int32 playerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_SENDMESSAGE_OFFSET))(this, messageId, data, playerId);
		}

		::System::Boolean UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(::System::Guid messageId, ::Il2CppArray<::System::Byte>* data, ::System::Int32 playerId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_TRYSENDMESSAGE_OFFSET))(this, messageId, data, playerId);
		}

		::System::Void UnityEngine_IPlayerEditorConnectionNative_Poll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_POLL_OFFSET))(this);
		}

		::System::Void UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(::System::Guid messageId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_REGISTERINTERNAL_OFFSET))(this, messageId);
		}

		::System::Void UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(::System::Guid messageId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_UNREGISTERINTERNAL_OFFSET))(this, messageId);
		}

		::System::Void UnityEngine_IPlayerEditorConnectionNative_Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_INITIALIZE_OFFSET))(this);
		}

		::System::Boolean UnityEngine_IPlayerEditorConnectionNative_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_ISCONNECTED_OFFSET))(this);
		}

		::System::Void UnityEngine_IPlayerEditorConnectionNative_DisconnectAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_DISCONNECTALL_OFFSET))(this);
		}

		static ::System::Boolean IsConnected()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_ISCONNECTED_OFFSET))();
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_INITIALIZE_OFFSET))();
		}

		static ::System::Void RegisterInternal(::System::String* messageId)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_REGISTERINTERNAL_OFFSET))(messageId);
		}

		static ::System::Void UnregisterInternal(::System::String* messageId)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_UNREGISTERINTERNAL_OFFSET))(messageId);
		}

		static ::System::Void SendMessage_(::System::String* messageId, ::Il2CppArray<::System::Byte>* data, ::System::Int32 playerId)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_SENDMESSAGE__OFFSET))(messageId, data, playerId);
		}

		static ::System::Boolean TrySendMessage(::System::String* messageId, ::Il2CppArray<::System::Byte>* data, ::System::Int32 playerId)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_TRYSENDMESSAGE_OFFSET))(messageId, data, playerId);
		}

		static ::System::Void PollInternal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_POLLINTERNAL_OFFSET))();
		}

		static ::System::Void DisconnectAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERCONNECTIONINTERNAL_DISCONNECTALL_OFFSET))();
		}
	};
}
