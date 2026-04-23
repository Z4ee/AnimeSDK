#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceComponent.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Net/Sockets/IOControlCode.h"
#include "unitysdk/System/Net/Sockets/IPProtectionLevel.h"
#include "unitysdk/System/Net/Sockets/ProtocolType.h"
#include "unitysdk/System/Net/Sockets/SelectMode.h"
#include "unitysdk/System/Net/Sockets/SocketAsyncOperation.h"
#include "unitysdk/System/Net/Sockets/SocketError.h"
#include "unitysdk/System/Net/Sockets/SocketFlags.h"
#include "unitysdk/System/Net/Sockets/SocketOperation.h"
#include "unitysdk/System/Net/Sockets/SocketOptionLevel.h"
#include "unitysdk/System/Net/Sockets/SocketOptionName.h"
#include "unitysdk/System/Net/Sockets/SocketShutdown.h"
#include "unitysdk/System/Net/Sockets/SocketType.h"
#include "unitysdk/System/Net/Sockets/Socket_WSABUF.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class IOAsyncCallback; }
namespace System { class IOSelectorJob; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class SocketAddress; }
namespace System::Net::Sockets { class SafeSocketHandle; }
namespace System::Net::Sockets { class SocketAsyncEventArgs; }
namespace System::Net::Sockets { class SocketAsyncResult; }
namespace System::Threading { class SemaphoreSlim; }
namespace System::Threading { class Thread; }

#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPTASYNC_OFFSET UNITYSDK_OFFSET(0x1A14CC20)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_1_OFFSET UNITYSDK_OFFSET(0x1A14CAD0)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14D560)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14C910)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1A14C790)
#define SYSTEM_NET_SOCKETS_SOCKET_AVAILABLE_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14BBE0)
#define SYSTEM_NET_SOCKETS_SOCKET_AVAILABLE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14BAD0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINACCEPT_OFFSET UNITYSDK_OFFSET(0x1A14D160)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_1_OFFSET UNITYSDK_OFFSET(0x1A14DFF0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_OFFSET UNITYSDK_OFFSET(0x1A14DE50)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINMCONNECT_OFFSET UNITYSDK_OFFSET(0x1A14E220)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_1_OFFSET UNITYSDK_OFFSET(0x1A14B000)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_OFFSET UNITYSDK_OFFSET(0x1A146880)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSCONNECT_OFFSET UNITYSDK_OFFSET(0x1A14E3A0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A14F920)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_1_OFFSET UNITYSDK_OFFSET(0x1A14AC80)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_OFFSET UNITYSDK_OFFSET(0x1A1470A0)
#define SYSTEM_NET_SOCKETS_SOCKET_BIND_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14D720)
#define SYSTEM_NET_SOCKETS_SOCKET_BIND_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14D610)
#define SYSTEM_NET_SOCKETS_SOCKET_BIND_OFFSET UNITYSDK_OFFSET(0x1A141620)
#define SYSTEM_NET_SOCKETS_SOCKET_BLOCKING_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A147FC0)
#define SYSTEM_NET_SOCKETS_SOCKET_BLOCKING_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14C060)
#define SYSTEM_NET_SOCKETS_SOCKET_CANCEL_BLOCKING_SOCKET_OPERATION_OFFSET UNITYSDK_OFFSET(0x1A147FE0)
#define SYSTEM_NET_SOCKETS_SOCKET_CLOSE_1_OFFSET UNITYSDK_OFFSET(0x1A146420)
#define SYSTEM_NET_SOCKETS_SOCKET_CLOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A148000)
#define SYSTEM_NET_SOCKETS_SOCKET_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A1502B0)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14EBD0)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14DD50)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_OFFSET UNITYSDK_OFFSET(0x1A14D990)
#define SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14EF00)
#define SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14ED10)
#define SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x1A14EBE0)
#define SYSTEM_NET_SOCKETS_SOCKET_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A150440)
#define SYSTEM_NET_SOCKETS_SOCKET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A14B480)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_1_OFFSET UNITYSDK_OFFSET(0x1A14D320)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_OFFSET UNITYSDK_OFFSET(0x1A14D300)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDCONNECT_OFFSET UNITYSDK_OFFSET(0x1A14EAF0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDDISCONNECT_OFFSET UNITYSDK_OFFSET(0x1A14EE20)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVEFROM_OFFSET UNITYSDK_OFFSET(0x1A14F5D0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVE_1_OFFSET UNITYSDK_OFFSET(0x1A14B1D0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVE_OFFSET UNITYSDK_OFFSET(0x1A146C30)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDSENDTO_OFFSET UNITYSDK_OFFSET(0x1A14FF40)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDSEND_1_OFFSET UNITYSDK_OFFSET(0x1A14AEB0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDSEND_OFFSET UNITYSDK_OFFSET(0x1A147450)
#define SYSTEM_NET_SOCKETS_SOCKET_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A14B4D0)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A150150)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A150030)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OFFSET UNITYSDK_OFFSET(0x1A1453B0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x1A149230)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A14B960)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_BLOCKING_OFFSET UNITYSDK_OFFSET(0x1A14BF50)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_CLEANEDUP_OFFSET UNITYSDK_OFFSET(0x1A14B410)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_CONNECTED_OFFSET UNITYSDK_OFFSET(0x1A14C170)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_DUALMODE_OFFSET UNITYSDK_OFFSET(0x1A149620)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_FAMILYHINT_OFFSET UNITYSDK_OFFSET(0x1A150810)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1A149210)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1A14B320)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_ISBOUND_OFFSET UNITYSDK_OFFSET(0x1A14BCD0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_ISDUALMODE_OFFSET UNITYSDK_OFFSET(0x1A1497A0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x1A14BCE0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_OSSUPPORTSIPV4_OFFSET UNITYSDK_OFFSET(0x1A1490F0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_OSSUPPORTSIPV6_OFFSET UNITYSDK_OFFSET(0x1A1491B0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_PROTOCOLTYPE_OFFSET UNITYSDK_OFFSET(0x1A149250)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x1A14C1E0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_SOCKETTYPE_OFFSET UNITYSDK_OFFSET(0x1A149240)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_SUPPORTSIPV4_OFFSET UNITYSDK_OFFSET(0x1A149090)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_SUPPORTSIPV6_OFFSET UNITYSDK_OFFSET(0x1A149150)
#define SYSTEM_NET_SOCKETS_SOCKET_INITIALIZESOCKETS_OFFSET UNITYSDK_OFFSET(0x1A148A60)
#define SYSTEM_NET_SOCKETS_SOCKET_INITSOCKETASYNCEVENTARGS_OFFSET UNITYSDK_OFFSET(0x1A14CEC0)
#define SYSTEM_NET_SOCKETS_SOCKET_INTERNALSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1A1463B0)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1A14AB30)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A1502A0)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A150170)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_OFFSET UNITYSDK_OFFSET(0x1A13F3E0)
#define SYSTEM_NET_SOCKETS_SOCKET_ISPROTOCOLSUPPORTED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A150970)
#define SYSTEM_NET_SOCKETS_SOCKET_ISPROTOCOLSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A14B420)
#define SYSTEM_NET_SOCKETS_SOCKET_LINGER_OFFSET UNITYSDK_OFFSET(0x1A1504B0)
#define SYSTEM_NET_SOCKETS_SOCKET_LISTEN_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14D980)
#define SYSTEM_NET_SOCKETS_SOCKET_LISTEN_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14D870)
#define SYSTEM_NET_SOCKETS_SOCKET_LISTEN_OFFSET UNITYSDK_OFFSET(0x1A14D730)
#define SYSTEM_NET_SOCKETS_SOCKET_LOCALENDPOINT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14BF40)
#define SYSTEM_NET_SOCKETS_SOCKET_LOCALENDPOINT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14BE20)
#define SYSTEM_NET_SOCKETS_SOCKET_POLL_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14C780)
#define SYSTEM_NET_SOCKETS_SOCKET_POLL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14C660)
#define SYSTEM_NET_SOCKETS_SOCKET_POLL_OFFSET UNITYSDK_OFFSET(0x1A14C460)
#define SYSTEM_NET_SOCKETS_SOCKET_QUEUEIOSELECTORJOB_OFFSET UNITYSDK_OFFSET(0x1A14D030)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A14A990)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_2_OFFSET UNITYSDK_OFFSET(0x1A14F320)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14F6F0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14F4B0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_OFFSET UNITYSDK_OFFSET(0x1A14A930)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_1_OFFSET UNITYSDK_OFFSET(0x1A14A2E0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_2_OFFSET UNITYSDK_OFFSET(0x1A14A140)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_3_OFFSET UNITYSDK_OFFSET(0x1A14A360)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14F300)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_2_OFFSET UNITYSDK_OFFSET(0x1A14F060)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_3_OFFSET UNITYSDK_OFFSET(0x1A14F310)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14F170)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_OFFSET UNITYSDK_OFFSET(0x1A145DA0)
#define SYSTEM_NET_SOCKETS_SOCKET_REMAPIPENDPOINT_OFFSET UNITYSDK_OFFSET(0x1A14D570)
#define SYSTEM_NET_SOCKETS_SOCKET_REMOTEENDPOINT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14C450)
#define SYSTEM_NET_SOCKETS_SOCKET_REMOTEENDPOINT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14C330)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A150020)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14FE20)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_OFFSET UNITYSDK_OFFSET(0x1A14FC10)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_1_OFFSET UNITYSDK_OFFSET(0x1A1498E0)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_2_OFFSET UNITYSDK_OFFSET(0x1A146210)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_3_OFFSET UNITYSDK_OFFSET(0x1A149F60)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_4_OFFSET UNITYSDK_OFFSET(0x1A149960)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A14FBF0)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_2_OFFSET UNITYSDK_OFFSET(0x1A14F700)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_3_OFFSET UNITYSDK_OFFSET(0x1A14FC00)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14F810)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_OFFSET UNITYSDK_OFFSET(0x1A1497B0)
#define SYSTEM_NET_SOCKETS_SOCKET_SETIPPROTECTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1A148E80)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_1_OFFSET UNITYSDK_OFFSET(0x1A1492F0)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A150160)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14B650)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_OFFSET UNITYSDK_OFFSET(0x1A147540)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_BLOCKING_OFFSET UNITYSDK_OFFSET(0x1A14BF60)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_DONTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1A1495C0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_DUALMODE_OFFSET UNITYSDK_OFFSET(0x1A149710)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_ENABLEBROADCAST_OFFSET UNITYSDK_OFFSET(0x1A14BBF0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_EXCLUSIVEADDRESSUSE_OFFSET UNITYSDK_OFFSET(0x1A149260)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_NODELAY_OFFSET UNITYSDK_OFFSET(0x1A14B880)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1A149440)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A1494C0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_SENDTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A149540)
#define SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1A147FD0)
#define SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A14B540)
#define SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1A150310)
#define SYSTEM_NET_SOCKETS_SOCKET_SOCKETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1A148F50)
#define SYSTEM_NET_SOCKETS_SOCKET_SOCKETOPERATIONTOSOCKETASYNCOPERATION_OFFSET UNITYSDK_OFFSET(0x1A150710)
#define SYSTEM_NET_SOCKETS_SOCKET_SOCKET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A148D20)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFBUFFERNULL_OFFSET UNITYSDK_OFFSET(0x1A14EF10)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFBUFFEROUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1A14EF50)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFDISPOSEDANDCLOSED_OFFSET UNITYSDK_OFFSET(0x1A14BA60)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFUDP_OFFSET UNITYSDK_OFFSET(0x1A14C180)
#define SYSTEM_NET_SOCKETS_SOCKET_VALIDATEENDIASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x1A14D3F0)
#define SYSTEM_NET_SOCKETS_SOCKET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A150980)
#define SYSTEM_NET_SOCKETS_SOCKET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A14B790)
#define SYSTEM_NET_SOCKETS_SOCKET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1487B0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket_TypeDefinitionIndex = 2891;

	class Socket : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14710);
		}
		static ::System::AsyncCallback** StaticGet_DisconnectAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14718);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginAcceptReceiveCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14720);
		}
		static ::System::AsyncCallback** StaticGet_ReceiveAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14728);
		}
		static ::System::AsyncCallback** StaticGet_AcceptAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14730);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginReceiveFromCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14738);
		}
		static ::System::AsyncCallback** StaticGet_ConnectAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14740);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginSendGenericCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14748);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginDisconnectCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14750);
		}
		static ::System::AsyncCallback** StaticGet_SendToAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14758);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginConnectCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14760);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginReceiveCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14768);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginReceiveGenericCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14770);
		}
		static ::System::AsyncCallback** StaticGet_ReceiveFromAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14778);
		}
		static ::System::AsyncCallback** StaticGet_SendAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14780);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginAcceptCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x14788);
		}
		static ::System::Boolean* StaticGet_s_OSSupportsIPv6()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x5D80);
		}
		static ::System::Boolean* StaticGet_s_Initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x5D81);
		}
		static ::System::Boolean* StaticGet_s_SupportsIPv4()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x5D82);
		}
		static ::System::Boolean* StaticGet_s_LoggingEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x5D83);
		}
		static ::System::Boolean* StaticGet_s_SupportsIPv6()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x5D84);
		}
		::System::Net::Sockets::SafeSocketHandle* m_Handle; // 0x10
		::System::Threading::SemaphoreSlim* WriteSem; // 0x18
		::System::Threading::SemaphoreSlim* ReadSem; // 0x20
		::System::Net::EndPoint* seed_endpoint; // 0x28
		::System::Int32 m_IntCleanedUp; // 0x30
		::System::Boolean useOverlappedIO; // 0x34
		::System::Boolean is_closed; // 0x35
		::System::Boolean connect_in_progress; // 0x36
		::System::Boolean is_bound; // 0x37
		::System::Net::Sockets::SocketType socketType; // 0x38
		::System::Boolean is_blocking; // 0x3C
		::System::Boolean is_connected; // 0x3D
		::System::Boolean is_listening; // 0x3E
		::System::Net::Sockets::ProtocolType protocolType; // 0x40
		::System::Net::Sockets::AddressFamily addressFamily; // 0x44
		::System::Int32 linger_timeout; // 0x48

		::System::Void _ctor(::System::Net::Sockets::AddressFamily addressFamily, ::System::Net::Sockets::SocketType socketType, ::System::Net::Sockets::ProtocolType protocolType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET__CTOR_OFFSET))(this, addressFamily, socketType, protocolType);
		}

		::System::Void _ctor_1(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto, ::System::Net::Sockets::SafeSocketHandle* safe_handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType, ::System::Net::Sockets::SafeSocketHandle*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET__CTOR_1_OFFSET))(this, family, type, proto, safe_handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_SupportsIPv4()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_SUPPORTSIPV4_OFFSET))();
		}

		static ::System::Boolean get_OSSupportsIPv4()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_OSSUPPORTSIPV4_OFFSET))();
		}

		static ::System::Boolean get_SupportsIPv6()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_SUPPORTSIPV6_OFFSET))();
		}

		static ::System::Boolean get_OSSupportsIPv6()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_OSSUPPORTSIPV6_OFFSET))();
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_HANDLE_OFFSET))(this);
		}

		::System::Net::Sockets::AddressFamily get_AddressFamily()
		{
			return ((::System::Net::Sockets::AddressFamily(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_ADDRESSFAMILY_OFFSET))(this);
		}

		::System::Net::Sockets::SocketType get_SocketType()
		{
			return ((::System::Net::Sockets::SocketType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_SOCKETTYPE_OFFSET))(this);
		}

		::System::Net::Sockets::ProtocolType get_ProtocolType()
		{
			return ((::System::Net::Sockets::ProtocolType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_PROTOCOLTYPE_OFFSET))(this);
		}

		::System::Void set_ExclusiveAddressUse(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_EXCLUSIVEADDRESSUSE_OFFSET))(this, value);
		}

		::System::Void set_ReceiveBufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVEBUFFERSIZE_OFFSET))(this, value);
		}

		::System::Void set_ReceiveTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVETIMEOUT_OFFSET))(this, value);
		}

		::System::Void set_SendTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_SENDTIMEOUT_OFFSET))(this, value);
		}

		::System::Void set_DontFragment(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_DONTFRAGMENT_OFFSET))(this, value);
		}

		::System::Boolean get_DualMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_DUALMODE_OFFSET))(this);
		}

		::System::Void set_DualMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_DUALMODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsDualMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_ISDUALMODE_OFFSET))(this);
		}

		::System::Int32 Send(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_OFFSET))(this, buffer);
		}

		::System::Int32 Send_1(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_1_OFFSET))(this, buffers, socketFlags);
		}

		::System::Int32 Send_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_2_OFFSET))(this, buffer, offset, size, socketFlags);
		}

		::System::Int32 Receive(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_OFFSET))(this, buffer, offset, size, socketFlags);
		}

		::System::Int32 Receive_1(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_1_OFFSET))(this, buffers, socketFlags);
		}

		::System::Int32 ReceiveFrom(::Il2CppArray<::System::Byte>* buffer, ::System::Net::EndPoint*& remoteEP)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Net::EndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_OFFSET))(this, buffer, remoteEP);
		}

		::System::Int32 IOControl(::System::Net::Sockets::IOControlCode ioControlCode, ::Il2CppArray<::System::Byte>* optionInValue, ::Il2CppArray<::System::Byte>* optionOutValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Sockets::IOControlCode, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_OFFSET))(this, ioControlCode, optionInValue, optionOutValue);
		}

		::System::Void SetIPProtectionLevel(::System::Net::Sockets::IPProtectionLevel level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::IPProtectionLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETIPPROTECTIONLEVEL_OFFSET))(this, level);
		}

		::System::IAsyncResult* BeginSend(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_OFFSET))(this, buffer, offset, size, socketFlags, callback, state);
		}

		::System::Int32 EndSend(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDSEND_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginReceive(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_OFFSET))(this, buffer, offset, size, socketFlags, callback, state);
		}

		::System::Int32 EndReceive(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVE_OFFSET))(this, asyncResult);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		::System::Boolean get_CleanedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_CLEANEDUP_OFFSET))(this);
		}

		static ::System::Void InitializeSockets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_INITIALIZESOCKETS_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_FINALIZE_OFFSET))(this);
		}

		::System::Void InternalShutdown(::System::Net::Sockets::SocketShutdown how)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketShutdown))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_INTERNALSHUTDOWN_OFFSET))(this, how);
		}

		::System::Void SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, ::System::Int32 optionValue, ::System::Boolean silent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_OFFSET))(this, optionLevel, optionName, optionValue, silent);
		}

		::System::Void SocketDefaults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SOCKETDEFAULTS_OFFSET))(this);
		}

		::System::IntPtr Socket_internal(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto, ::System::Int32& error)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SOCKET_INTERNAL_OFFSET))(this, family, type, proto, error);
		}

		::System::Int32 get_Available()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_AVAILABLE_OFFSET))(this);
		}

		static ::System::Int32 Available_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Int32& error)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_AVAILABLE_INTERNAL_OFFSET))(safeHandle, error);
		}

		static ::System::Int32 Available_internal_1(::System::IntPtr socket, ::System::Int32& error)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_AVAILABLE_INTERNAL_1_OFFSET))(socket, error);
		}

		::System::Void set_EnableBroadcast(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_ENABLEBROADCAST_OFFSET))(this, value);
		}

		::System::Boolean get_IsBound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_ISBOUND_OFFSET))(this);
		}

		::System::Net::EndPoint* get_LocalEndPoint()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_LOCALENDPOINT_OFFSET))(this);
		}

		static ::System::Net::SocketAddress* LocalEndPoint_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Int32 family, ::System::Int32& error)
		{
			return ((::System::Net::SocketAddress*(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LOCALENDPOINT_INTERNAL_OFFSET))(safeHandle, family, error);
		}

		static ::System::Net::SocketAddress* LocalEndPoint_internal_1(::System::IntPtr socket, ::System::Int32 family, ::System::Int32& error)
		{
			return ((::System::Net::SocketAddress*(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LOCALENDPOINT_INTERNAL_1_OFFSET))(socket, family, error);
		}

		::System::Boolean get_Blocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_BLOCKING_OFFSET))(this);
		}

		::System::Void set_Blocking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_BLOCKING_OFFSET))(this, value);
		}

		static ::System::Void Blocking_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Boolean block, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BLOCKING_INTERNAL_OFFSET))(safeHandle, block, error);
		}

		static ::System::Void Blocking_internal_1(::System::IntPtr socket, ::System::Boolean block, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BLOCKING_INTERNAL_1_OFFSET))(socket, block, error);
		}

		::System::Boolean get_Connected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_CONNECTED_OFFSET))(this);
		}

		::System::Void set_NoDelay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_NODELAY_OFFSET))(this, value);
		}

		::System::Net::EndPoint* get_RemoteEndPoint()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_REMOTEENDPOINT_OFFSET))(this);
		}

		static ::System::Net::SocketAddress* RemoteEndPoint_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Int32 family, ::System::Int32& error)
		{
			return ((::System::Net::SocketAddress*(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_REMOTEENDPOINT_INTERNAL_OFFSET))(safeHandle, family, error);
		}

		static ::System::Net::SocketAddress* RemoteEndPoint_internal_1(::System::IntPtr socket, ::System::Int32 family, ::System::Int32& error)
		{
			return ((::System::Net::SocketAddress*(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_REMOTEENDPOINT_INTERNAL_1_OFFSET))(socket, family, error);
		}

		::System::Boolean Poll(::System::Int32 microSeconds, ::System::Net::Sockets::SelectMode mode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Net::Sockets::SelectMode))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_POLL_OFFSET))(this, microSeconds, mode);
		}

		static ::System::Boolean Poll_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SelectMode mode, ::System::Int32 timeout, ::System::Int32& error)
		{
			return ((::System::Boolean(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SelectMode, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_POLL_INTERNAL_OFFSET))(safeHandle, mode, timeout, error);
		}

		static ::System::Boolean Poll_internal_1(::System::IntPtr socket, ::System::Net::Sockets::SelectMode mode, ::System::Int32 timeout, ::System::Int32& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Net::Sockets::SelectMode, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_POLL_INTERNAL_1_OFFSET))(socket, mode, timeout, error);
		}

		::System::Net::Sockets::Socket* Accept()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_OFFSET))(this);
		}

		::System::Void Accept_1(::System::Net::Sockets::Socket* acceptSocket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_1_OFFSET))(this, acceptSocket);
		}

		::System::Boolean AcceptAsync(::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ACCEPTASYNC_OFFSET))(this, e);
		}

		::System::IAsyncResult* BeginAccept(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINACCEPT_OFFSET))(this, callback, state);
		}

		::System::Net::Sockets::Socket* EndAccept(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_OFFSET))(this, asyncResult);
		}

		::System::Net::Sockets::Socket* EndAccept_1(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32& bytesTransferred, ::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_1_OFFSET))(this, buffer, bytesTransferred, asyncResult);
		}

		static ::System::Net::Sockets::SafeSocketHandle* Accept_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Net::Sockets::SafeSocketHandle*(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_INTERNAL_OFFSET))(safeHandle, error, blocking);
		}

		static ::System::IntPtr Accept_internal_1(::System::IntPtr sock, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_INTERNAL_1_OFFSET))(sock, error, blocking);
		}

		::System::Void Bind(::System::Net::EndPoint* localEP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BIND_OFFSET))(this, localEP);
		}

		static ::System::Void Bind_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::SocketAddress* sa, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::SocketAddress*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BIND_INTERNAL_OFFSET))(safeHandle, sa, error);
		}

		static ::System::Void Bind_internal_1(::System::IntPtr sock, ::System::Net::SocketAddress* sa, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::SocketAddress*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BIND_INTERNAL_1_OFFSET))(sock, sa, error);
		}

		::System::Void Listen(::System::Int32 backlog)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LISTEN_OFFSET))(this, backlog);
		}

		static ::System::Void Listen_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Int32 backlog, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LISTEN_INTERNAL_OFFSET))(safeHandle, backlog, error);
		}

		static ::System::Void Listen_internal_1(::System::IntPtr sock, ::System::Int32 backlog, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LISTEN_INTERNAL_1_OFFSET))(sock, backlog, error);
		}

		::System::Void Connect(::System::Net::EndPoint* remoteEP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECT_OFFSET))(this, remoteEP);
		}

		::System::IAsyncResult* BeginConnect(::System::String* host, ::System::Int32 port, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_OFFSET))(this, host, port, requestCallback, state);
		}

		::System::IAsyncResult* BeginConnect_1(::Il2CppArray<::System::Net::IPAddress*>* addresses, ::System::Int32 port, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_1_OFFSET))(this, addresses, port, requestCallback, state);
		}

		static ::System::Void BeginMConnect(::System::Net::Sockets::SocketAsyncResult* sockares)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SocketAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINMCONNECT_OFFSET))(sockares);
		}

		static ::System::Void BeginSConnect(::System::Net::Sockets::SocketAsyncResult* sockares)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SocketAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSCONNECT_OFFSET))(sockares);
		}

		::System::Void EndConnect(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDCONNECT_OFFSET))(this, asyncResult);
		}

		static ::System::Void Connect_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::SocketAddress* sa, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::SocketAddress*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECT_INTERNAL_OFFSET))(safeHandle, sa, error, blocking);
		}

		static ::System::Void Connect_internal_1(::System::IntPtr sock, ::System::Net::SocketAddress* sa, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::SocketAddress*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECT_INTERNAL_1_OFFSET))(sock, sa, error, blocking);
		}

		::System::Void Disconnect(::System::Boolean reuseSocket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_OFFSET))(this, reuseSocket);
		}

		::System::Void EndDisconnect(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDDISCONNECT_OFFSET))(this, asyncResult);
		}

		static ::System::Void Disconnect_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Boolean reuse, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_INTERNAL_OFFSET))(safeHandle, reuse, error);
		}

		static ::System::Void Disconnect_internal_1(::System::IntPtr sock, ::System::Boolean reuse, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_INTERNAL_1_OFFSET))(sock, reuse, error);
		}

		::System::Int32 Receive_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_2_OFFSET))(this, buffer, offset, size, socketFlags, errorCode);
		}

		::System::Int32 Receive_3(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_3_OFFSET))(this, buffers, socketFlags, errorCode);
		}

		::System::IAsyncResult* BeginReceive_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_1_OFFSET))(this, buffer, offset, size, socketFlags, errorCode, callback, state);
		}

		::System::Int32 EndReceive_1(::System::IAsyncResult* asyncResult, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVE_1_OFFSET))(this, asyncResult, errorCode);
		}

		static ::System::Int32 Receive_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::Socket_WSABUF* bufarray, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::Socket_WSABUF*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_OFFSET))(safeHandle, bufarray, count, flags, error, blocking);
		}

		static ::System::Int32 Receive_internal_1(::System::IntPtr sock, ::System::Net::Sockets::Socket_WSABUF* bufarray, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Net::Sockets::Socket_WSABUF*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_1_OFFSET))(sock, bufarray, count, flags, error, blocking);
		}

		static ::System::Int32 Receive_internal_2(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Byte* buffer, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_2_OFFSET))(safeHandle, buffer, count, flags, error, blocking);
		}

		static ::System::Int32 Receive_internal_3(::System::IntPtr sock, ::System::Byte* buffer, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_3_OFFSET))(sock, buffer, count, flags, error, blocking);
		}

		::System::Int32 ReceiveFrom_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint*& remoteEP)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_1_OFFSET))(this, buffer, offset, size, socketFlags, remoteEP);
		}

		::System::Int32 ReceiveFrom_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint*& remoteEP, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*&, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_2_OFFSET))(this, buffer, offset, size, socketFlags, remoteEP, errorCode);
		}

		::System::Int32 EndReceiveFrom(::System::IAsyncResult* asyncResult, ::System::Net::EndPoint*& endPoint)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*, ::System::Net::EndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVEFROM_OFFSET))(this, asyncResult, endPoint);
		}

		static ::System::Int32 ReceiveFrom_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Byte* buffer, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Net::SocketAddress*& sockaddr, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*&, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_INTERNAL_OFFSET))(safeHandle, buffer, count, flags, sockaddr, error, blocking);
		}

		static ::System::Int32 ReceiveFrom_internal_1(::System::IntPtr sock, ::System::Byte* buffer, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Net::SocketAddress*& sockaddr, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*&, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_INTERNAL_1_OFFSET))(sock, buffer, count, flags, sockaddr, error, blocking);
		}

		::System::Int32 Send_3(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_3_OFFSET))(this, buffer, offset, size, socketFlags, errorCode);
		}

		::System::Int32 Send_4(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_4_OFFSET))(this, buffers, socketFlags, errorCode);
		}

		::System::IAsyncResult* BeginSend_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_1_OFFSET))(this, buffer, offset, size, socketFlags, errorCode, callback, state);
		}

		static ::System::Void BeginSendCallback(::System::Net::Sockets::SocketAsyncResult* sockares, ::System::Int32 sent_so_far)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SocketAsyncResult*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDCALLBACK_OFFSET))(sockares, sent_so_far);
		}

		::System::Int32 EndSend_1(::System::IAsyncResult* asyncResult, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDSEND_1_OFFSET))(this, asyncResult, errorCode);
		}

		static ::System::Int32 Send_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::Socket_WSABUF* bufarray, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::Socket_WSABUF*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_OFFSET))(safeHandle, bufarray, count, flags, error, blocking);
		}

		static ::System::Int32 Send_internal_1(::System::IntPtr sock, ::System::Net::Sockets::Socket_WSABUF* bufarray, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Net::Sockets::Socket_WSABUF*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_1_OFFSET))(sock, bufarray, count, flags, error, blocking);
		}

		static ::System::Int32 Send_internal_2(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Byte* buffer, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_2_OFFSET))(safeHandle, buffer, count, flags, error, blocking);
		}

		static ::System::Int32 Send_internal_3(::System::IntPtr sock, ::System::Byte* buffer, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_3_OFFSET))(sock, buffer, count, flags, error, blocking);
		}

		::System::Int32 SendTo(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint* remoteEP)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDTO_OFFSET))(this, buffer, offset, size, socketFlags, remoteEP);
		}

		::System::Int32 EndSendTo(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDSENDTO_OFFSET))(this, asyncResult);
		}

		static ::System::Int32 SendTo_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Byte* buffer, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Net::SocketAddress* sa, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDTO_INTERNAL_OFFSET))(safeHandle, buffer, count, flags, sa, error, blocking);
		}

		static ::System::Int32 SendTo_internal_1(::System::IntPtr sock, ::System::Byte* buffer, ::System::Int32 count, ::System::Net::Sockets::SocketFlags flags, ::System::Net::SocketAddress* sa, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDTO_INTERNAL_1_OFFSET))(sock, buffer, count, flags, sa, error, blocking);
		}

		::System::Object* GetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OFFSET))(this, optionLevel, optionName);
		}

		static ::System::Void GetSocketOption_obj_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ::System::Object*& obj_val, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_OFFSET))(safeHandle, level, name, obj_val, error);
		}

		static ::System::Void GetSocketOption_obj_internal_1(::System::IntPtr socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ::System::Object*& obj_val, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_1_OFFSET))(socket, level, name, obj_val, error);
		}

		::System::Void SetSocketOption_1(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, ::System::Int32 optionValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_1_OFFSET))(this, optionLevel, optionName, optionValue);
		}

		static ::System::Void SetSocketOption_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ::System::Object* obj_val, ::Il2CppArray<::System::Byte>* byte_val, ::System::Int32 int_val, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_INTERNAL_OFFSET))(safeHandle, level, name, obj_val, byte_val, int_val, error);
		}

		static ::System::Void SetSocketOption_internal_1(::System::IntPtr socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ::System::Object* obj_val, ::Il2CppArray<::System::Byte>* byte_val, ::System::Int32 int_val, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_INTERNAL_1_OFFSET))(socket, level, name, obj_val, byte_val, int_val, error);
		}

		::System::Int32 IOControl_1(::System::Int32 ioControlCode, ::Il2CppArray<::System::Byte>* optionInValue, ::Il2CppArray<::System::Byte>* optionOutValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_1_OFFSET))(this, ioControlCode, optionInValue, optionOutValue);
		}

		static ::System::Int32 IOControl_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Int32 ioctl_code, ::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output, ::System::Int32& error)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_INTERNAL_OFFSET))(safeHandle, ioctl_code, input, output, error);
		}

		static ::System::Int32 IOControl_internal_1(::System::IntPtr sock, ::System::Int32 ioctl_code, ::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output, ::System::Int32& error)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_INTERNAL_1_OFFSET))(sock, ioctl_code, input, output, error);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CLOSE_OFFSET))(this);
		}

		::System::Void Close_1(::System::Int32 timeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CLOSE_1_OFFSET))(this, timeout);
		}

		static ::System::Void Close_internal(::System::IntPtr socket, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CLOSE_INTERNAL_OFFSET))(socket, error);
		}

		::System::Void Shutdown(::System::Net::Sockets::SocketShutdown how)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketShutdown))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_OFFSET))(this, how);
		}

		static ::System::Void Shutdown_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketShutdown how, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketShutdown, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_INTERNAL_OFFSET))(safeHandle, how, error);
		}

		static ::System::Void Shutdown_internal_1(::System::IntPtr socket, ::System::Net::Sockets::SocketShutdown how, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::Sockets::SocketShutdown, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_INTERNAL_1_OFFSET))(socket, how, error);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Linger(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LINGER_OFFSET))(this, handle);
		}

		::System::Void ThrowIfDisposedAndClosed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_THROWIFDISPOSEDANDCLOSED_OFFSET))(this);
		}

		::System::Void ThrowIfBufferNull(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_THROWIFBUFFERNULL_OFFSET))(this, buffer);
		}

		::System::Void ThrowIfBufferOutOfRange(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_THROWIFBUFFEROUTOFRANGE_OFFSET))(this, buffer, offset, size);
		}

		::System::Void ThrowIfUdp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_THROWIFUDP_OFFSET))(this);
		}

		::System::Net::Sockets::SocketAsyncResult* ValidateEndIAsyncResult(::System::IAsyncResult* ares, ::System::String* methodName, ::System::String* argName)
		{
			return ((::System::Net::Sockets::SocketAsyncResult*(*)(::PVOID, ::System::IAsyncResult*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_VALIDATEENDIASYNCRESULT_OFFSET))(this, ares, methodName, argName);
		}

		::System::Void QueueIOSelectorJob(::System::Threading::SemaphoreSlim* sem, ::System::IntPtr handle, ::System::IOSelectorJob* job)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SemaphoreSlim*, ::System::IntPtr, ::System::IOSelectorJob*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_QUEUEIOSELECTORJOB_OFFSET))(this, sem, handle, job);
		}

		::System::Void InitSocketAsyncEventArgs(::System::Net::Sockets::SocketAsyncEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* state, ::System::Net::Sockets::SocketOperation operation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_INITSOCKETASYNCEVENTARGS_OFFSET))(this, e, callback, state, operation);
		}

		::System::Net::Sockets::SocketAsyncOperation SocketOperationToSocketAsyncOperation(::System::Net::Sockets::SocketOperation op)
		{
			return ((::System::Net::Sockets::SocketAsyncOperation(*)(::PVOID, ::System::Net::Sockets::SocketOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SOCKETOPERATIONTOSOCKETASYNCOPERATION_OFFSET))(this, op);
		}

		::System::Net::IPEndPoint* RemapIPEndPoint(::System::Net::IPEndPoint* input)
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_REMAPIPENDPOINT_OFFSET))(this, input);
		}

		static ::System::Void cancel_blocking_socket_operation(::System::Threading::Thread* thread)
		{
			return ((::System::Void(*)(::System::Threading::Thread*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CANCEL_BLOCKING_SOCKET_OPERATION_OFFSET))(thread);
		}

		static ::System::Int32 get_FamilyHint()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_FAMILYHINT_OFFSET))();
		}

		static ::System::Boolean IsProtocolSupported_internal(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface)
		{
			return ((::System::Boolean(*)(::System::Net::NetworkInformation::NetworkInterfaceComponent))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ISPROTOCOLSUPPORTED_INTERNAL_OFFSET))(networkInterface);
		}

		static ::System::Boolean IsProtocolSupported(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface)
		{
			return ((::System::Boolean(*)(::System::Net::NetworkInformation::NetworkInterfaceComponent))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ISPROTOCOLSUPPORTED_OFFSET))(networkInterface);
		}
	};
}
