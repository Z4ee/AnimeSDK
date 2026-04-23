#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class IPlayerEditorConnectionNative; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Networking::PlayerConnection { class MessageEventArgs; }
namespace UnityEngine::Networking::PlayerConnection { class PlayerEditorConnectionEvents; }

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_BLOCKUNTILRECVMSG_OFFSET UNITYSDK_OFFSET(0x1A461D10)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_CONNECTEDCALLBACKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A462700)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A460D60)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTALL_OFFSET UNITYSDK_OFFSET(0x1A462040)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4628F0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GETCONNECTIONNATIVEAPI_OFFSET UNITYSDK_OFFSET(0x1A460E40)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A460CA0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A460DD0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_MESSAGECALLBACKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4620C0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A460EC0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A4616A0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERDISCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A4617E0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTER_OFFSET UNITYSDK_OFFSET(0x1A460F60)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_SEND_OFFSET UNITYSDK_OFFSET(0x1A4618D0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_TRYSEND_OFFSET UNITYSDK_OFFSET(0x1A461AF0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A461810)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERDISCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A461870)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1A461390)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A462AE0)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerConnection_TypeDefinitionIndex = 4481;

	class PlayerConnection : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::IPlayerEditorConnectionNative** StaticGet_connectionNative()
		{
			return (::UnityEngine::IPlayerEditorConnectionNative**)Il2CppClass::FromTypeDefinitionIndex(PlayerConnection_TypeDefinitionIndex)->GetStaticField(0x15FB0);
		}
		static ::UnityEngine::Networking::PlayerConnection::PlayerConnection** StaticGet_s_Instance()
		{
			return (::UnityEngine::Networking::PlayerConnection::PlayerConnection**)Il2CppClass::FromTypeDefinitionIndex(PlayerConnection_TypeDefinitionIndex)->GetStaticField(0x15FB8);
		}
		::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* m_PlayerEditorConnectionEvents; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* m_connectedPlayers; // 0x20
		::System::Boolean m_IsInitilized; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Networking::PlayerConnection::PlayerConnection* get_instance()
		{
			return ((::UnityEngine::Networking::PlayerConnection::PlayerConnection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_isConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GET_ISCONNECTED_OFFSET))(this);
		}

		static ::UnityEngine::Networking::PlayerConnection::PlayerConnection* CreateInstance()
		{
			return ((::UnityEngine::Networking::PlayerConnection::PlayerConnection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_CREATEINSTANCE_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_ONENABLE_OFFSET))(this);
		}

		::UnityEngine::IPlayerEditorConnectionNative* GetConnectionNativeApi()
		{
			return ((::UnityEngine::IPlayerEditorConnectionNative*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GETCONNECTIONNATIVEAPI_OFFSET))(this);
		}

		::System::Void Register(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTER_OFFSET))(this, messageId, callback);
		}

		::System::Void Unregister(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTER_OFFSET))(this, messageId, callback);
		}

		::System::Void RegisterConnection(::UnityEngine::Events::UnityAction_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERCONNECTION_OFFSET))(this, callback);
		}

		::System::Void RegisterDisconnection(::UnityEngine::Events::UnityAction_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERDISCONNECTION_OFFSET))(this, callback);
		}

		::System::Void UnregisterConnection(::UnityEngine::Events::UnityAction_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERCONNECTION_OFFSET))(this, callback);
		}

		::System::Void UnregisterDisconnection(::UnityEngine::Events::UnityAction_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERDISCONNECTION_OFFSET))(this, callback);
		}

		::System::Void Send(::System::Guid messageId, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_SEND_OFFSET))(this, messageId, data);
		}

		::System::Boolean TrySend(::System::Guid messageId, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_TRYSEND_OFFSET))(this, messageId, data);
		}

		::System::Boolean BlockUntilRecvMsg(::System::Guid messageId, ::System::Int32 timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_BLOCKUNTILRECVMSG_OFFSET))(this, messageId, timeout);
		}

		::System::Void DisconnectAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTALL_OFFSET))(this);
		}

		static ::System::Void MessageCallbackInternal(::System::IntPtr data, ::System::UInt64 size, ::System::UInt64 guid, ::System::String* messageId)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_MESSAGECALLBACKINTERNAL_OFFSET))(data, size, guid, messageId);
		}

		static ::System::Void ConnectedCallbackInternal(::System::Int32 playerId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_CONNECTEDCALLBACKINTERNAL_OFFSET))(playerId);
		}

		static ::System::Void DisconnectedCallback(::System::Int32 playerId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTEDCALLBACK_OFFSET))(playerId);
		}
	};
}
