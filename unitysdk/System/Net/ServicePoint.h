#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Net { class BindIPEndPoint; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class IPHostEntry; }
namespace System::Net { class WebConnectionGroup; }
namespace System::Net::Sockets { class Socket; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Threading { class Timer; }

#define SYSTEM_NET_SERVICEPOINT_CALLENDPOINTDELEGATE_OFFSET UNITYSDK_OFFSET(0x18706DB0)
#define SYSTEM_NET_SERVICEPOINT_CHECKAVAILABLEFORRECYCLING_OFFSET UNITYSDK_OFFSET(0x18705120)
#define SYSTEM_NET_SERVICEPOINT_CLOSECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x187068B0)
#define SYSTEM_NET_SERVICEPOINT_GETCONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x18704D80)
#define SYSTEM_NET_SERVICEPOINT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x187048A0)
#define SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x187048C0)
#define SYSTEM_NET_SERVICEPOINT_GET_HASTIMEDOUT_OFFSET UNITYSDK_OFFSET(0x18705D90)
#define SYSTEM_NET_SERVICEPOINT_GET_HOSTENTRY_OFFSET UNITYSDK_OFFSET(0x18705F10)
#define SYSTEM_NET_SERVICEPOINT_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x18704930)
#define SYSTEM_NET_SERVICEPOINT_GET_SENDCONTINUE_OFFSET UNITYSDK_OFFSET(0x18704970)
#define SYSTEM_NET_SERVICEPOINT_GET_USECONNECT_OFFSET UNITYSDK_OFFSET(0x18704D60)
#define SYSTEM_NET_SERVICEPOINT_GET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x18704950)
#define SYSTEM_NET_SERVICEPOINT_GET_USESPROXY_OFFSET UNITYSDK_OFFSET(0x18704D40)
#define SYSTEM_NET_SERVICEPOINT_IDLETIMERCALLBACK_OFFSET UNITYSDK_OFFSET(0x18705D70)
#define SYSTEM_NET_SERVICEPOINT_KEEPALIVESETUP_OFFSET UNITYSDK_OFFSET(0x18704B70)
#define SYSTEM_NET_SERVICEPOINT_PUTBYTES_OFFSET UNITYSDK_OFFSET(0x18704C00)
#define SYSTEM_NET_SERVICEPOINT_REMOVECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x187050C0)
#define SYSTEM_NET_SERVICEPOINT_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x18706340)
#define SYSTEM_NET_SERVICEPOINT_SETTCPKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x18704AE0)
#define SYSTEM_NET_SERVICEPOINT_SETVERSION_OFFSET UNITYSDK_OFFSET(0x18706330)
#define SYSTEM_NET_SERVICEPOINT_SET_BINDIPENDPOINTDELEGATE_OFFSET UNITYSDK_OFFSET(0x187048B0)
#define SYSTEM_NET_SERVICEPOINT_SET_CONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x187048D0)
#define SYSTEM_NET_SERVICEPOINT_SET_EXPECT100CONTINUE_OFFSET UNITYSDK_OFFSET(0x18704940)
#define SYSTEM_NET_SERVICEPOINT_SET_SENDCONTINUE_OFFSET UNITYSDK_OFFSET(0x18704AD0)
#define SYSTEM_NET_SERVICEPOINT_SET_USECONNECT_OFFSET UNITYSDK_OFFSET(0x18704D70)
#define SYSTEM_NET_SERVICEPOINT_SET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x18704960)
#define SYSTEM_NET_SERVICEPOINT_SET_USESPROXY_OFFSET UNITYSDK_OFFSET(0x18704D50)
#define SYSTEM_NET_SERVICEPOINT_UPDATECLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x18706D80)
#define SYSTEM_NET_SERVICEPOINT_UPDATESERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x18706D50)
#define SYSTEM_NET_SERVICEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18704830)
#define SYSTEM_NET_SERVICEPOINT__GETCONNECTIONGROUP_B__66_0_OFFSET UNITYSDK_OFFSET(0x18707120)

namespace System::Net
{
	inline static constexpr unsigned int ServicePoint_TypeDefinitionIndex = 2861;

	class ServicePoint : public ::System::Object
	{
	public:
		::System::Net::BindIPEndPoint* endPointCallback; // 0x10
		::System::Object* m_ServerCertificateOrBytes; // 0x18
		::System::Net::IPHostEntry* host; // 0x20
		::System::Threading::Timer* idleTimer; // 0x28
		::System::Object* hostE; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Net::WebConnectionGroup*>* groups; // 0x38
		::System::Object* m_ClientCertificateOrBytes; // 0x40
		::System::Uri* uri; // 0x48
		::System::Version* protocolVersion; // 0x50
		::System::DateTime idleSince; // 0x58
		::System::Int32 connectionLimit; // 0x60
		::System::Int32 maxIdleTime; // 0x64
		::System::DateTime lastDnsResolve; // 0x68
		::System::Boolean useNagle; // 0x70
		::System::Boolean useConnect; // 0x71
		::System::Boolean tcp_keepalive; // 0x72
		::System::Int32 tcp_keepalive_interval; // 0x74
		::System::Int32 currentConnections; // 0x78
		::System::Int32 tcp_keepalive_time; // 0x7C
		::System::Boolean usesProxy; // 0x80
		::System::Boolean sendContinue; // 0x81

		::System::Void _ctor(::System::Uri* uri, ::System::Int32 connectionLimit, ::System::Int32 maxIdleTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT__CTOR_OFFSET))(this, uri, connectionLimit, maxIdleTime);
		}

		::System::Uri* get_Address()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_ADDRESS_OFFSET))(this);
		}

		::System::Void set_BindIPEndPointDelegate(::System::Net::BindIPEndPoint* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::BindIPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_BINDIPENDPOINTDELEGATE_OFFSET))(this, value);
		}

		::System::Int32 get_ConnectionLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONLIMIT_OFFSET))(this);
		}

		::System::Void set_ConnectionLimit(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_CONNECTIONLIMIT_OFFSET))(this, value);
		}

		::System::Version* get_ProtocolVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Void set_Expect100Continue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_EXPECT100CONTINUE_OFFSET))(this, value);
		}

		::System::Boolean get_UseNagleAlgorithm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_USENAGLEALGORITHM_OFFSET))(this);
		}

		::System::Void set_UseNagleAlgorithm(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_USENAGLEALGORITHM_OFFSET))(this, value);
		}

		::System::Boolean get_SendContinue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_SENDCONTINUE_OFFSET))(this);
		}

		::System::Void set_SendContinue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_SENDCONTINUE_OFFSET))(this, value);
		}

		::System::Void SetTcpKeepAlive(::System::Boolean enabled, ::System::Int32 keepAliveTime, ::System::Int32 keepAliveInterval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SETTCPKEEPALIVE_OFFSET))(this, enabled, keepAliveTime, keepAliveInterval);
		}

		::System::Void KeepAliveSetup(::System::Net::Sockets::Socket* socket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_KEEPALIVESETUP_OFFSET))(this, socket);
		}

		static ::System::Void PutBytes(::Il2CppArray<::System::Byte>* bytes, ::System::UInt32 v, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_PUTBYTES_OFFSET))(bytes, v, offset);
		}

		::System::Boolean get_UsesProxy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_USESPROXY_OFFSET))(this);
		}

		::System::Void set_UsesProxy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_USESPROXY_OFFSET))(this, value);
		}

		::System::Boolean get_UseConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_USECONNECT_OFFSET))(this);
		}

		::System::Void set_UseConnect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_USECONNECT_OFFSET))(this, value);
		}

		::System::Net::WebConnectionGroup* GetConnectionGroup(::System::String* name)
		{
			return ((::System::Net::WebConnectionGroup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GETCONNECTIONGROUP_OFFSET))(this, name);
		}

		::System::Void RemoveConnectionGroup(::System::Net::WebConnectionGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionGroup*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_REMOVECONNECTIONGROUP_OFFSET))(this, group);
		}

		::System::Boolean CheckAvailableForRecycling(::System::DateTime& outIdleSince)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_CHECKAVAILABLEFORRECYCLING_OFFSET))(this, outIdleSince);
		}

		::System::Void IdleTimerCallback(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_IDLETIMERCALLBACK_OFFSET))(this, obj);
		}

		::System::Boolean get_HasTimedOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_HASTIMEDOUT_OFFSET))(this);
		}

		::System::Net::IPHostEntry* get_HostEntry()
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_HOSTENTRY_OFFSET))(this);
		}

		::System::Void SetVersion(::System::Version* version)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SETVERSION_OFFSET))(this, version);
		}

		::System::EventHandler* SendRequest(::System::Net::HttpWebRequest* request, ::System::String* groupName)
		{
			return ((::System::EventHandler*(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SENDREQUEST_OFFSET))(this, request, groupName);
		}

		::System::Boolean CloseConnectionGroup(::System::String* connectionGroupName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_CLOSECONNECTIONGROUP_OFFSET))(this, connectionGroupName);
		}

		::System::Void UpdateServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_UPDATESERVERCERTIFICATE_OFFSET))(this, certificate);
		}

		::System::Void UpdateClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_UPDATECLIENTCERTIFICATE_OFFSET))(this, certificate);
		}

		::System::Boolean CallEndPointDelegate(::System::Net::Sockets::Socket* sock, ::System::Net::IPEndPoint* remote)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_CALLENDPOINTDELEGATE_OFFSET))(this, sock, remote);
		}

		::System::Void _GetConnectionGroup_b__66_0(::System::Object* s, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT__GETCONNECTIONGROUP_B__66_0_OFFSET))(this, s, e);
		}
	};
}
