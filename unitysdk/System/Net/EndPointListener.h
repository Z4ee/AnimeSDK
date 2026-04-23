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

#define SYSTEM_NET_ENDPOINTLISTENER_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1A104E80)
#define SYSTEM_NET_ENDPOINTLISTENER_ADDPREFIX_OFFSET UNITYSDK_OFFSET(0x1A107560)
#define SYSTEM_NET_ENDPOINTLISTENER_ADDSPECIAL_OFFSET UNITYSDK_OFFSET(0x1A106540)
#define SYSTEM_NET_ENDPOINTLISTENER_BINDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A1058F0)
#define SYSTEM_NET_ENDPOINTLISTENER_CHECKIFREMOVE_OFFSET UNITYSDK_OFFSET(0x1A106A60)
#define SYSTEM_NET_ENDPOINTLISTENER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A106D70)
#define SYSTEM_NET_ENDPOINTLISTENER_GET_LISTENER_OFFSET UNITYSDK_OFFSET(0x1A104F40)
#define SYSTEM_NET_ENDPOINTLISTENER_MATCHFROMLIST_OFFSET UNITYSDK_OFFSET(0x1A106200)
#define SYSTEM_NET_ENDPOINTLISTENER_ONACCEPT_OFFSET UNITYSDK_OFFSET(0x1A1057F0)
#define SYSTEM_NET_ENDPOINTLISTENER_PROCESSACCEPT_OFFSET UNITYSDK_OFFSET(0x1A104F50)
#define SYSTEM_NET_ENDPOINTLISTENER_REMOVECONNECTION_OFFSET UNITYSDK_OFFSET(0x1A105800)
#define SYSTEM_NET_ENDPOINTLISTENER_REMOVEPREFIX_OFFSET UNITYSDK_OFFSET(0x1A1078C0)
#define SYSTEM_NET_ENDPOINTLISTENER_REMOVESPECIAL_OFFSET UNITYSDK_OFFSET(0x1A106940)
#define SYSTEM_NET_ENDPOINTLISTENER_SEARCHLISTENER_OFFSET UNITYSDK_OFFSET(0x1A105960)
#define SYSTEM_NET_ENDPOINTLISTENER_UNBINDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A105FF0)
#define SYSTEM_NET_ENDPOINTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A104710)

namespace System::Net
{
	inline static constexpr unsigned int EndPointListener_TypeDefinitionIndex = 2824;

	class EndPointListener : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* prefixes; // 0x10
		::System::Security::Cryptography::X509Certificates::X509Certificate* cert; // 0x18
		::System::Collections::ArrayList* unhandled; // 0x20
		::System::Collections::ArrayList* all; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection*, ::System::Net::HttpConnection*>* unregistered; // 0x30
		::System::Net::IPEndPoint* endpoint; // 0x38
		::System::Net::Sockets::Socket* sock; // 0x40
		::System::Net::HttpListener* listener; // 0x48
		::System::Boolean secure; // 0x50

		::System::Void _ctor(::System::Net::HttpListener* listener, ::System::Net::IPAddress* addr, ::System::Int32 port, ::System::Boolean secure)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListener*, ::System::Net::IPAddress*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER__CTOR_OFFSET))(this, listener, addr, port, secure);
		}

		::System::Net::HttpListener* get_Listener()
		{
			return ((::System::Net::HttpListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_GET_LISTENER_OFFSET))(this);
		}

		static ::System::Void Accept(::System::Net::Sockets::Socket* socket, ::System::Net::Sockets::SocketAsyncEventArgs* e, ::System::Net::Sockets::Socket*& accepted)
		{
			return ((::System::Void(*)(::System::Net::Sockets::Socket*, ::System::Net::Sockets::SocketAsyncEventArgs*, ::System::Net::Sockets::Socket*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_ACCEPT_OFFSET))(socket, e, accepted);
		}

		static ::System::Void ProcessAccept(::System::Net::Sockets::SocketAsyncEventArgs* args)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_PROCESSACCEPT_OFFSET))(args);
		}

		static ::System::Void OnAccept(::System::Object* sender, ::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_ONACCEPT_OFFSET))(sender, e);
		}

		::System::Void RemoveConnection(::System::Net::HttpConnection* conn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpConnection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_REMOVECONNECTION_OFFSET))(this, conn);
		}

		::System::Boolean BindContext(::System::Net::HttpListenerContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_BINDCONTEXT_OFFSET))(this, context);
		}

		::System::Void UnbindContext(::System::Net::HttpListenerContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_UNBINDCONTEXT_OFFSET))(this, context);
		}

		::System::Net::HttpListener* SearchListener(::System::Uri* uri, ::System::Net::ListenerPrefix*& prefix)
		{
			return ((::System::Net::HttpListener*(*)(::PVOID, ::System::Uri*, ::System::Net::ListenerPrefix*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_SEARCHLISTENER_OFFSET))(this, uri, prefix);
		}

		::System::Net::HttpListener* MatchFromList(::System::String* host, ::System::String* path, ::System::Collections::ArrayList* list, ::System::Net::ListenerPrefix*& prefix)
		{
			return ((::System::Net::HttpListener*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::ArrayList*, ::System::Net::ListenerPrefix*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_MATCHFROMLIST_OFFSET))(this, host, path, list, prefix);
		}

		::System::Void AddSpecial(::System::Collections::ArrayList* coll, ::System::Net::ListenerPrefix* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Net::ListenerPrefix*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_ADDSPECIAL_OFFSET))(this, coll, prefix);
		}

		::System::Boolean RemoveSpecial(::System::Collections::ArrayList* coll, ::System::Net::ListenerPrefix* prefix)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Net::ListenerPrefix*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_REMOVESPECIAL_OFFSET))(this, coll, prefix);
		}

		::System::Void CheckIfRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_CHECKIFREMOVE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_CLOSE_OFFSET))(this);
		}

		::System::Void AddPrefix(::System::Net::ListenerPrefix* prefix, ::System::Net::HttpListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ListenerPrefix*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_ADDPREFIX_OFFSET))(this, prefix, listener);
		}

		::System::Void RemovePrefix(::System::Net::ListenerPrefix* prefix, ::System::Net::HttpListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ListenerPrefix*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTLISTENER_REMOVEPREFIX_OFFSET))(this, prefix, listener);
		}
	};
}
