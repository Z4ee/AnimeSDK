#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Net { class BindIPEndPoint; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class IPHostEntry; }
namespace System::Net { class PooledStream; }
namespace System::Net { class WebConnectionGroup; }
namespace System::Net::Sockets { class Socket; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Threading { class Timer; }

#define SYSTEM_NET_SERVICEPOINT_CALLENDPOINTDELEGATE_OFFSET UNITYSDK_OFFSET(0x1C6DD8F0)
#define SYSTEM_NET_SERVICEPOINT_CHECKAVAILABLEFORRECYCLING_OFFSET UNITYSDK_OFFSET(0x1C6DC580)
#define SYSTEM_NET_SERVICEPOINT_CLOSECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1C6DD4A0)
#define SYSTEM_NET_SERVICEPOINT_GETCONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1C6DC290)
#define SYSTEM_NET_SERVICEPOINT_GETCONNECTION_OFFSET UNITYSDK_OFFSET(0x1C6DDA70)
#define SYSTEM_NET_SERVICEPOINT_GETMUSTIMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1C6DB8B0)
#define SYSTEM_NET_SERVICEPOINT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1C6DB8A0)
#define SYSTEM_NET_SERVICEPOINT_GET_BINDIPENDPOINTDELEGATE_OFFSET UNITYSDK_OFFSET(0x1C6DB9C0)
#define SYSTEM_NET_SERVICEPOINT_GET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C6DD640)
#define SYSTEM_NET_SERVICEPOINT_GET_CLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C6DD7B0)
#define SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONLEASETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6DB9E0)
#define SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1C6DBA80)
#define SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C6DBAF0)
#define SYSTEM_NET_SERVICEPOINT_GET_CURRENTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1C6DBB70)
#define SYSTEM_NET_SERVICEPOINT_GET_EXPECT100CONTINUE_OFFSET UNITYSDK_OFFSET(0x1C6DBE00)
#define SYSTEM_NET_SERVICEPOINT_GET_HASTIMEDOUT_OFFSET UNITYSDK_OFFSET(0x1C6DCB80)
#define SYSTEM_NET_SERVICEPOINT_GET_HOSTENTRY_OFFSET UNITYSDK_OFFSET(0x1C6DCCD0)
#define SYSTEM_NET_SERVICEPOINT_GET_IDLESINCE_OFFSET UNITYSDK_OFFSET(0x1C6DBB80)
#define SYSTEM_NET_SERVICEPOINT_GET_MAXIDLETIME_OFFSET UNITYSDK_OFFSET(0x1C6DBB90)
#define SYSTEM_NET_SERVICEPOINT_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1C6DBCC0)
#define SYSTEM_NET_SERVICEPOINT_GET_RECEIVEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1C6DBCD0)
#define SYSTEM_NET_SERVICEPOINT_GET_SENDCONTINUE_OFFSET UNITYSDK_OFFSET(0x1C6DBE10)
#define SYSTEM_NET_SERVICEPOINT_GET_SUPPORTSPIPELINING_OFFSET UNITYSDK_OFFSET(0x1C6DBD70)
#define SYSTEM_NET_SERVICEPOINT_GET_USECONNECT_OFFSET UNITYSDK_OFFSET(0x1C6DC270)
#define SYSTEM_NET_SERVICEPOINT_GET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1C6DBF70)
#define SYSTEM_NET_SERVICEPOINT_GET_USESPROXY_OFFSET UNITYSDK_OFFSET(0x1C6DC250)
#define SYSTEM_NET_SERVICEPOINT_IDLETIMERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C6DCB60)
#define SYSTEM_NET_SERVICEPOINT_KEEPALIVESETUP_OFFSET UNITYSDK_OFFSET(0x1C6DC060)
#define SYSTEM_NET_SERVICEPOINT_PUTBYTES_OFFSET UNITYSDK_OFFSET(0x1C6DC120)
#define SYSTEM_NET_SERVICEPOINT_REMOVECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1C6DC4F0)
#define SYSTEM_NET_SERVICEPOINT_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x1C6DD280)
#define SYSTEM_NET_SERVICEPOINT_SETTCPKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1C6DBFA0)
#define SYSTEM_NET_SERVICEPOINT_SETVERSION_OFFSET UNITYSDK_OFFSET(0x1C6DD270)
#define SYSTEM_NET_SERVICEPOINT_SET_BINDIPENDPOINTDELEGATE_OFFSET UNITYSDK_OFFSET(0x1C6DB9D0)
#define SYSTEM_NET_SERVICEPOINT_SET_CONNECTIONLEASETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6DBA30)
#define SYSTEM_NET_SERVICEPOINT_SET_CONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1C6DBA90)
#define SYSTEM_NET_SERVICEPOINT_SET_EXPECT100CONTINUE_OFFSET UNITYSDK_OFFSET(0x1C6DBF60)
#define SYSTEM_NET_SERVICEPOINT_SET_MAXIDLETIME_OFFSET UNITYSDK_OFFSET(0x1C6DBBA0)
#define SYSTEM_NET_SERVICEPOINT_SET_RECEIVEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1C6DBD20)
#define SYSTEM_NET_SERVICEPOINT_SET_SENDCONTINUE_OFFSET UNITYSDK_OFFSET(0x1C6DBF90)
#define SYSTEM_NET_SERVICEPOINT_SET_USECONNECT_OFFSET UNITYSDK_OFFSET(0x1C6DC280)
#define SYSTEM_NET_SERVICEPOINT_SET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1C6DBF80)
#define SYSTEM_NET_SERVICEPOINT_SET_USESPROXY_OFFSET UNITYSDK_OFFSET(0x1C6DC260)
#define SYSTEM_NET_SERVICEPOINT_UPDATECLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C6BFDE0)
#define SYSTEM_NET_SERVICEPOINT_UPDATESERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C6DD780)
#define SYSTEM_NET_SERVICEPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6DDAD0)
#define SYSTEM_NET_SERVICEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DB830)
#define SYSTEM_NET_SERVICEPOINT__GETCONNECTIONGROUP_B__66_0_OFFSET UNITYSDK_OFFSET(0x1C6DDAC0)

namespace System::Net
{
	inline static constexpr unsigned int ServicePoint_TypeDefinitionIndex = 3553;

	class ServicePoint : public ::System::Object
	{
	public:
		::System::Net::BindIPEndPoint* endPointCallback; // 0x10
		::System::Version* protocolVersion; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Net::WebConnectionGroup*>* groups; // 0x20
		::System::Threading::Timer* idleTimer; // 0x28
		::System::Object* m_ClientCertificateOrBytes; // 0x30
		::System::Object* m_ServerCertificateOrBytes; // 0x38
		::System::Uri* uri; // 0x40
		::System::Net::IPHostEntry* host; // 0x48
		::System::Object* hostE; // 0x50
		::System::Boolean sendContinue; // 0x58
		::System::Int32 connectionLimit; // 0x5C
		::System::Int32 tcp_keepalive_interval; // 0x60
		::System::Int32 currentConnections; // 0x64
		::System::DateTime idleSince; // 0x68
		::System::Int32 tcp_keepalive_time; // 0x70
		::System::DateTime lastDnsResolve; // 0x78
		::System::Boolean useNagle; // 0x80
		::System::Boolean usesProxy; // 0x81
		::System::Boolean useConnect; // 0x82
		::System::Boolean tcp_keepalive; // 0x83
		::System::Int32 maxIdleTime; // 0x84

		::System::Void _ctor(::System::Uri* uri, ::System::Int32 connectionLimit, ::System::Int32 maxIdleTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT__CTOR_OFFSET))(this, uri, connectionLimit, maxIdleTime);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT__CTOR_1_OFFSET))(this);
		}

		::System::Uri* get_Address()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_ADDRESS_OFFSET))(this);
		}

		static ::System::Exception* GetMustImplement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GETMUSTIMPLEMENT_OFFSET))();
		}

		::System::Net::BindIPEndPoint* get_BindIPEndPointDelegate()
		{
			return ((::System::Net::BindIPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_BINDIPENDPOINTDELEGATE_OFFSET))(this);
		}

		::System::Void set_BindIPEndPointDelegate(::System::Net::BindIPEndPoint* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::BindIPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_BINDIPENDPOINTDELEGATE_OFFSET))(this, value);
		}

		::System::Int32 get_ConnectionLeaseTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONLEASETIMEOUT_OFFSET))(this);
		}

		::System::Void set_ConnectionLeaseTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_CONNECTIONLEASETIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_ConnectionLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONLIMIT_OFFSET))(this);
		}

		::System::Void set_ConnectionLimit(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_CONNECTIONLIMIT_OFFSET))(this, value);
		}

		::System::String* get_ConnectionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONNAME_OFFSET))(this);
		}

		::System::Int32 get_CurrentConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_CURRENTCONNECTIONS_OFFSET))(this);
		}

		::System::DateTime get_IdleSince()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_IDLESINCE_OFFSET))(this);
		}

		::System::Int32 get_MaxIdleTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_MAXIDLETIME_OFFSET))(this);
		}

		::System::Void set_MaxIdleTime(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_MAXIDLETIME_OFFSET))(this, value);
		}

		::System::Version* get_ProtocolVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Int32 get_ReceiveBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_RECEIVEBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_ReceiveBufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_RECEIVEBUFFERSIZE_OFFSET))(this, value);
		}

		::System::Boolean get_SupportsPipelining()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_SUPPORTSPIPELINING_OFFSET))(this);
		}

		::System::Boolean get_Expect100Continue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_EXPECT100CONTINUE_OFFSET))(this);
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

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_Certificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_CERTIFICATE_OFFSET))(this);
		}

		::System::Void UpdateServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_UPDATESERVERCERTIFICATE_OFFSET))(this, certificate);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_ClientCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_CLIENTCERTIFICATE_OFFSET))(this);
		}

		::System::Void UpdateClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_UPDATECLIENTCERTIFICATE_OFFSET))(this, certificate);
		}

		::System::Boolean CallEndPointDelegate(::System::Net::Sockets::Socket* sock, ::System::Net::IPEndPoint* remote)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_CALLENDPOINTDELEGATE_OFFSET))(this, sock, remote);
		}

		::System::Net::Sockets::Socket* GetConnection(::System::Net::PooledStream* PooledStream, ::System::Object* owner, ::System::Boolean async, ::System::Net::IPAddress*& address, ::System::Net::Sockets::Socket*& abortSocket, ::System::Net::Sockets::Socket*& abortSocket6)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::System::Net::PooledStream*, ::System::Object*, ::System::Boolean, ::System::Net::IPAddress*&, ::System::Net::Sockets::Socket*&, ::System::Net::Sockets::Socket*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GETCONNECTION_OFFSET))(this, PooledStream, owner, async, address, abortSocket, abortSocket6);
		}

		::System::Void _GetConnectionGroup_b__66_0(::System::Object* s, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT__GETCONNECTIONGROUP_B__66_0_OFFSET))(this, s, e);
		}
	};
}
