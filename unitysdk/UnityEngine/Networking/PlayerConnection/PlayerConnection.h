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

#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_BLOCKUNTILRECVMSG_OFFSET UNITYSDK_OFFSET(0x1ED40AC0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_CONNECTEDCALLBACKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED41600)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1ED3FB70)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTALL_OFFSET UNITYSDK_OFFSET(0x1ED40E00)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ED417A0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GETCONNECTIONNATIVEAPI_OFFSET UNITYSDK_OFFSET(0x1ED3FC50)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1ED3FAE0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1ED3FBE0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_MESSAGECALLBACKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED40E80)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1ED3FCD0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERCONNECTION_OFFSET UNITYSDK_OFFSET(0x1ED404E0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERDISCONNECTION_OFFSET UNITYSDK_OFFSET(0x1ED405F0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTER_OFFSET UNITYSDK_OFFSET(0x1ED3FD70)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_SEND_OFFSET UNITYSDK_OFFSET(0x1ED40680)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_TRYSEND_OFFSET UNITYSDK_OFFSET(0x1ED408A0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERCONNECTION_OFFSET UNITYSDK_OFFSET(0x1ED40620)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERDISCONNECTION_OFFSET UNITYSDK_OFFSET(0x1ED40650)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1ED401F0)
#define UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED41910)

namespace UnityEngine::Networking::PlayerConnection
{
	inline static constexpr unsigned int PlayerConnection_TypeDefinitionIndex = 4670;

	class PlayerConnection : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::IPlayerEditorConnectionNative** StaticGet_connectionNative()
		{
			return (::UnityEngine::IPlayerEditorConnectionNative**)Il2CppClass::FromTypeDefinitionIndex(PlayerConnection_TypeDefinitionIndex)->GetStaticField(0x108D0);
		}
		static ::UnityEngine::Networking::PlayerConnection::PlayerConnection** StaticGet_s_Instance()
		{
			return (::UnityEngine::Networking::PlayerConnection::PlayerConnection**)Il2CppClass::FromTypeDefinitionIndex(PlayerConnection_TypeDefinitionIndex)->GetStaticField(0x108D8);
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

		::System::Void Register(::System::Guid a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTER_OFFSET))(this, a1, a2);
		}

		::System::Void Unregister(::System::Guid a1, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTER_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterConnection(::UnityEngine::Events::UnityAction_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERCONNECTION_OFFSET))(this, a1);
		}

		::System::Void RegisterDisconnection(::UnityEngine::Events::UnityAction_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_REGISTERDISCONNECTION_OFFSET))(this, a1);
		}

		::System::Void UnregisterConnection(::UnityEngine::Events::UnityAction_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERCONNECTION_OFFSET))(this, a1);
		}

		::System::Void UnregisterDisconnection(::UnityEngine::Events::UnityAction_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_UNREGISTERDISCONNECTION_OFFSET))(this, a1);
		}

		::System::Void Send(::System::Guid a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_SEND_OFFSET))(this, a1, a2);
		}

		::System::Boolean TrySend(::System::Guid a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_TRYSEND_OFFSET))(this, a1, a2);
		}

		::System::Boolean BlockUntilRecvMsg(::System::Guid a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_BLOCKUNTILRECVMSG_OFFSET))(this, a1, a2);
		}

		::System::Void DisconnectAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTALL_OFFSET))(this);
		}

		static ::System::Void MessageCallbackInternal(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_MESSAGECALLBACKINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ConnectedCallbackInternal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_CONNECTEDCALLBACKINTERNAL_OFFSET))(a1);
		}

		static ::System::Void DisconnectedCallback(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_PLAYERCONNECTION_PLAYERCONNECTION_DISCONNECTEDCALLBACK_OFFSET))(a1);
		}
	};
}
