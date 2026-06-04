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

#define SYSTEM_NET_SERVICEPOINT_CALLENDPOINTDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AFA5790)
#define SYSTEM_NET_SERVICEPOINT_CHECKAVAILABLEFORRECYCLING_OFFSET UNITYSDK_OFFSET(0x1AFA39F0)
#define SYSTEM_NET_SERVICEPOINT_CLOSECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1AFA5260)
#define SYSTEM_NET_SERVICEPOINT_GETCONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1AFA3670)
#define SYSTEM_NET_SERVICEPOINT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1AFA3210)
#define SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1AFA3230)
#define SYSTEM_NET_SERVICEPOINT_GET_HASTIMEDOUT_OFFSET UNITYSDK_OFFSET(0x1AFA4710)
#define SYSTEM_NET_SERVICEPOINT_GET_HOSTENTRY_OFFSET UNITYSDK_OFFSET(0x1AFA4890)
#define SYSTEM_NET_SERVICEPOINT_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1AFA32A0)
#define SYSTEM_NET_SERVICEPOINT_GET_SENDCONTINUE_OFFSET UNITYSDK_OFFSET(0x1AFA32E0)
#define SYSTEM_NET_SERVICEPOINT_GET_USECONNECT_OFFSET UNITYSDK_OFFSET(0x1AFA3650)
#define SYSTEM_NET_SERVICEPOINT_GET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1AFA32C0)
#define SYSTEM_NET_SERVICEPOINT_GET_USESPROXY_OFFSET UNITYSDK_OFFSET(0x1AFA3630)
#define SYSTEM_NET_SERVICEPOINT_IDLETIMERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AFA46F0)
#define SYSTEM_NET_SERVICEPOINT_KEEPALIVESETUP_OFFSET UNITYSDK_OFFSET(0x1AFA34E0)
#define SYSTEM_NET_SERVICEPOINT_PUTBYTES_OFFSET UNITYSDK_OFFSET(0x1AFA3570)
#define SYSTEM_NET_SERVICEPOINT_REMOVECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1AFA3990)
#define SYSTEM_NET_SERVICEPOINT_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x1AFA4C70)
#define SYSTEM_NET_SERVICEPOINT_SETTCPKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1AFA3450)
#define SYSTEM_NET_SERVICEPOINT_SETVERSION_OFFSET UNITYSDK_OFFSET(0x1AFA4C60)
#define SYSTEM_NET_SERVICEPOINT_SET_BINDIPENDPOINTDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AFA3220)
#define SYSTEM_NET_SERVICEPOINT_SET_CONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1AFA3240)
#define SYSTEM_NET_SERVICEPOINT_SET_EXPECT100CONTINUE_OFFSET UNITYSDK_OFFSET(0x1AFA32B0)
#define SYSTEM_NET_SERVICEPOINT_SET_SENDCONTINUE_OFFSET UNITYSDK_OFFSET(0x1AFA3440)
#define SYSTEM_NET_SERVICEPOINT_SET_USECONNECT_OFFSET UNITYSDK_OFFSET(0x1AFA3660)
#define SYSTEM_NET_SERVICEPOINT_SET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1AFA32D0)
#define SYSTEM_NET_SERVICEPOINT_SET_USESPROXY_OFFSET UNITYSDK_OFFSET(0x1AFA3640)
#define SYSTEM_NET_SERVICEPOINT_UPDATECLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1AFA5760)
#define SYSTEM_NET_SERVICEPOINT_UPDATESERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1AFA5730)
#define SYSTEM_NET_SERVICEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA31A0)
#define SYSTEM_NET_SERVICEPOINT__GETCONNECTIONGROUP_B__66_0_OFFSET UNITYSDK_OFFSET(0x1AFA5B00)

namespace System::Net
{
	inline static constexpr unsigned int ServicePoint_TypeDefinitionIndex = 2862;

	class ServicePoint : public ::System::Object
	{
	public:
		::System::Object* hostE; // 0x10
		::System::Net::BindIPEndPoint* endPointCallback; // 0x18
		::System::Object* m_ServerCertificateOrBytes; // 0x20
		::System::Threading::Timer* idleTimer; // 0x28
		::System::Version* protocolVersion; // 0x30
		::System::Object* m_ClientCertificateOrBytes; // 0x38
		::System::Uri* uri; // 0x40
		::System::Net::IPHostEntry* host; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Net::WebConnectionGroup*>* groups; // 0x50
		::System::DateTime idleSince; // 0x58
		::System::Int32 connectionLimit; // 0x60
		::System::Boolean usesProxy; // 0x64
		::System::Boolean tcp_keepalive; // 0x65
		::System::Int32 currentConnections; // 0x68
		::System::Int32 tcp_keepalive_time; // 0x6C
		::System::DateTime lastDnsResolve; // 0x70
		::System::Int32 maxIdleTime; // 0x78
		::System::Int32 tcp_keepalive_interval; // 0x7C
		::System::Boolean sendContinue; // 0x80
		::System::Boolean useNagle; // 0x81
		::System::Boolean useConnect; // 0x82

		::System::Void _ctor(::System::Uri* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Uri* get_Address()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_ADDRESS_OFFSET))(this);
		}

		::System::Void set_BindIPEndPointDelegate(::System::Net::BindIPEndPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::BindIPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_BINDIPENDPOINTDELEGATE_OFFSET))(this, a1);
		}

		::System::Int32 get_ConnectionLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_CONNECTIONLIMIT_OFFSET))(this);
		}

		::System::Void set_ConnectionLimit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_CONNECTIONLIMIT_OFFSET))(this, a1);
		}

		::System::Version* get_ProtocolVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Void set_Expect100Continue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_EXPECT100CONTINUE_OFFSET))(this, a1);
		}

		::System::Boolean get_UseNagleAlgorithm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_USENAGLEALGORITHM_OFFSET))(this);
		}

		::System::Void set_UseNagleAlgorithm(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_USENAGLEALGORITHM_OFFSET))(this, a1);
		}

		::System::Boolean get_SendContinue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_SENDCONTINUE_OFFSET))(this);
		}

		::System::Void set_SendContinue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_SENDCONTINUE_OFFSET))(this, a1);
		}

		::System::Void SetTcpKeepAlive(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SETTCPKEEPALIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KeepAliveSetup(::System::Net::Sockets::Socket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_KEEPALIVESETUP_OFFSET))(this, a1);
		}

		static ::System::Void PutBytes(::Il2CppArray<::System::Byte>* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_PUTBYTES_OFFSET))(a1, a2, a3);
		}

		::System::Boolean get_UsesProxy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_USESPROXY_OFFSET))(this);
		}

		::System::Void set_UsesProxy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_USESPROXY_OFFSET))(this, a1);
		}

		::System::Boolean get_UseConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_USECONNECT_OFFSET))(this);
		}

		::System::Void set_UseConnect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SET_USECONNECT_OFFSET))(this, a1);
		}

		::System::Net::WebConnectionGroup* GetConnectionGroup(::System::String* a1)
		{
			return ((::System::Net::WebConnectionGroup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GETCONNECTIONGROUP_OFFSET))(this, a1);
		}

		::System::Void RemoveConnectionGroup(::System::Net::WebConnectionGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionGroup*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_REMOVECONNECTIONGROUP_OFFSET))(this, a1);
		}

		::System::Boolean CheckAvailableForRecycling(::System::DateTime& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_CHECKAVAILABLEFORRECYCLING_OFFSET))(this, a1);
		}

		::System::Void IdleTimerCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_IDLETIMERCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean get_HasTimedOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_HASTIMEDOUT_OFFSET))(this);
		}

		::System::Net::IPHostEntry* get_HostEntry()
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_GET_HOSTENTRY_OFFSET))(this);
		}

		::System::Void SetVersion(::System::Version* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SETVERSION_OFFSET))(this, a1);
		}

		::System::EventHandler* SendRequest(::System::Net::HttpWebRequest* a1, ::System::String* a2)
		{
			return ((::System::EventHandler*(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_SENDREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Boolean CloseConnectionGroup(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_CLOSECONNECTIONGROUP_OFFSET))(this, a1);
		}

		::System::Void UpdateServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_UPDATESERVERCERTIFICATE_OFFSET))(this, a1);
		}

		::System::Void UpdateClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_UPDATECLIENTCERTIFICATE_OFFSET))(this, a1);
		}

		::System::Boolean CallEndPointDelegate(::System::Net::Sockets::Socket* a1, ::System::Net::IPEndPoint* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT_CALLENDPOINTDELEGATE_OFFSET))(this, a1, a2);
		}

		::System::Void _GetConnectionGroup_b__66_0(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINT__GETCONNECTIONGROUP_B__66_0_OFFSET))(this, a1, a2);
		}
	};
}
