#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Net { class HttpConnection; }
namespace System::Net { class HttpListener; }
namespace System::Net { class HttpListenerContext; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class ListenerPrefix; }
namespace System::Net::Sockets { class Socket; }
namespace System::Net::Sockets { class SocketAsyncEventArgs; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define SYSTEM_NET_ENDPOINTLISTENER_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1E96F170)
#define SYSTEM_NET_ENDPOINTLISTENER_ADDPREFIX_OFFSET UNITYSDK_OFFSET(0x1E972660)
#define SYSTEM_NET_ENDPOINTLISTENER_ADDSPECIAL_OFFSET UNITYSDK_OFFSET(0x1E970F30)
#define SYSTEM_NET_ENDPOINTLISTENER_BINDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E96FC70)
#define SYSTEM_NET_ENDPOINTLISTENER_CHECKIFREMOVE_OFFSET UNITYSDK_OFFSET(0x1E971800)
#define SYSTEM_NET_ENDPOINTLISTENER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E971E10)
#define SYSTEM_NET_ENDPOINTLISTENER_GET_LISTENER_OFFSET UNITYSDK_OFFSET(0x1E96F230)
#define SYSTEM_NET_ENDPOINTLISTENER_MATCHFROMLIST_OFFSET UNITYSDK_OFFSET(0x1E970A40)
#define SYSTEM_NET_ENDPOINTLISTENER_ONACCEPT_OFFSET UNITYSDK_OFFSET(0x1E96FB70)
#define SYSTEM_NET_ENDPOINTLISTENER_PROCESSACCEPT_OFFSET UNITYSDK_OFFSET(0x1E96F240)
#define SYSTEM_NET_ENDPOINTLISTENER_REMOVECONNECTION_OFFSET UNITYSDK_OFFSET(0x1E96FB80)
#define SYSTEM_NET_ENDPOINTLISTENER_REMOVEPREFIX_OFFSET UNITYSDK_OFFSET(0x1E972C40)
#define SYSTEM_NET_ENDPOINTLISTENER_REMOVESPECIAL_OFFSET UNITYSDK_OFFSET(0x1E971540)
#define SYSTEM_NET_ENDPOINTLISTENER_SEARCHLISTENER_OFFSET UNITYSDK_OFFSET(0x1E96FCE0)
#define SYSTEM_NET_ENDPOINTLISTENER_UNBINDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E9706D0)
#define SYSTEM_NET_ENDPOINTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E96E930)

namespace System::Net
{
	inline static constexpr unsigned int EndPointListener_TypeDefinitionIndex = 2835;

	class EndPointListener : public ::System::Object
	{
	public:
		::System::Net::HttpListener* listener; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>* unregistered; // 0x18
		::System::Net::IPEndPoint* endpoint; // 0x20
		::System::Collections::ArrayList* unhandled; // 0x28
		::System::Collections::Hashtable* prefixes; // 0x30
		::System::Net::Sockets::Socket* sock; // 0x38
		::System::Security::Cryptography::X509Certificates::X509Certificate* cert; // 0x40
		::System::Collections::ArrayList* all; // 0x48
		::System::Boolean secure; // 0x50

		::System::Void _ctor(::System::Net::HttpListener* a1, ::System::Net::IPAddress* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListener*, ::System::Net::IPAddress*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Net::HttpListener* get_Listener()
		{
			return ((::System::Net::HttpListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_GET_LISTENER_OFFSET))(this);
		}

		static ::System::Void Accept(::System::Net::Sockets::Socket* a1, ::System::Net::Sockets::SocketAsyncEventArgs* a2, ::System::Net::Sockets::Socket*& a3)
		{
			return ((::System::Void(*)(::System::Net::Sockets::Socket*, ::System::Net::Sockets::SocketAsyncEventArgs*, ::System::Net::Sockets::Socket*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_ACCEPT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ProcessAccept(::System::Net::Sockets::SocketAsyncEventArgs* a1)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_PROCESSACCEPT_OFFSET))(a1);
		}

		static ::System::Void OnAccept(::System::Object* a1, ::System::Net::Sockets::SocketAsyncEventArgs* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_ONACCEPT_OFFSET))(a1, a2);
		}

		::System::Void RemoveConnection(::System::Net::HttpConnection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpConnection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_REMOVECONNECTION_OFFSET))(this, a1);
		}

		::System::Boolean BindContext(::System::Net::HttpListenerContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_BINDCONTEXT_OFFSET))(this, a1);
		}

		::System::Void UnbindContext(::System::Net::HttpListenerContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_UNBINDCONTEXT_OFFSET))(this, a1);
		}

		::System::Net::HttpListener* SearchListener(::System::Uri* a1, ::System::Net::ListenerPrefix*& a2)
		{
			return ((::System::Net::HttpListener*(*)(::PVOID, ::System::Uri*, ::System::Net::ListenerPrefix*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_SEARCHLISTENER_OFFSET))(this, a1, a2);
		}

		::System::Net::HttpListener* MatchFromList(::System::String* a1, ::System::String* a2, ::System::Collections::ArrayList* a3, ::System::Net::ListenerPrefix*& a4)
		{
			return ((::System::Net::HttpListener*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::ArrayList*, ::System::Net::ListenerPrefix*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_MATCHFROMLIST_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddSpecial(::System::Collections::ArrayList* a1, ::System::Net::ListenerPrefix* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Net::ListenerPrefix*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_ADDSPECIAL_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemoveSpecial(::System::Collections::ArrayList* a1, ::System::Net::ListenerPrefix* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Net::ListenerPrefix*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_REMOVESPECIAL_OFFSET))(this, a1, a2);
		}

		::System::Void CheckIfRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_CHECKIFREMOVE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_CLOSE_OFFSET))(this);
		}

		::System::Void AddPrefix(::System::Net::ListenerPrefix* a1, ::System::Net::HttpListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ListenerPrefix*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_ADDPREFIX_OFFSET))(this, a1, a2);
		}

		::System::Void RemovePrefix(::System::Net::ListenerPrefix* a1, ::System::Net::HttpListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ListenerPrefix*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_REMOVEPREFIX_OFFSET))(this, a1, a2);
		}
	};
}
