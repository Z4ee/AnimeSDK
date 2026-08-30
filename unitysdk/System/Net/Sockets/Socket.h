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

#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPTASYNC_OFFSET UNITYSDK_OFFSET(0x1E9BC010)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_1_OFFSET UNITYSDK_OFFSET(0x1E9BBEC0)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BC9A0)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BBD00)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1E9BBB80)
#define SYSTEM_NET_SOCKETS_SOCKET_AVAILABLE_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BAF00)
#define SYSTEM_NET_SOCKETS_SOCKET_AVAILABLE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BADF0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINACCEPT_OFFSET UNITYSDK_OFFSET(0x1E9BC530)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_1_OFFSET UNITYSDK_OFFSET(0x1E9BD4C0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_OFFSET UNITYSDK_OFFSET(0x1E9BD320)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINMCONNECT_OFFSET UNITYSDK_OFFSET(0x1E9BD6F0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_1_OFFSET UNITYSDK_OFFSET(0x1E9BA1C0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_OFFSET UNITYSDK_OFFSET(0x1E9B5980)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSCONNECT_OFFSET UNITYSDK_OFFSET(0x1E9BD850)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E9BEFA0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_1_OFFSET UNITYSDK_OFFSET(0x1E9B9DB0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_OFFSET UNITYSDK_OFFSET(0x1E9B6140)
#define SYSTEM_NET_SOCKETS_SOCKET_BIND_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BCB30)
#define SYSTEM_NET_SOCKETS_SOCKET_BIND_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BCA20)
#define SYSTEM_NET_SOCKETS_SOCKET_BIND_OFFSET UNITYSDK_OFFSET(0x1E9B0910)
#define SYSTEM_NET_SOCKETS_SOCKET_BLOCKING_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9B6FB0)
#define SYSTEM_NET_SOCKETS_SOCKET_BLOCKING_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BB3F0)
#define SYSTEM_NET_SOCKETS_SOCKET_CANCEL_BLOCKING_SOCKET_OPERATION_OFFSET UNITYSDK_OFFSET(0x1E9B6FD0)
#define SYSTEM_NET_SOCKETS_SOCKET_CLOSE_1_OFFSET UNITYSDK_OFFSET(0x1E9B55B0)
#define SYSTEM_NET_SOCKETS_SOCKET_CLOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9B6FF0)
#define SYSTEM_NET_SOCKETS_SOCKET_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E9BFA10)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BE0B0)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BD220)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_OFFSET UNITYSDK_OFFSET(0x1E9BCDA0)
#define SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BE440)
#define SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BE1F0)
#define SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x1E9BE0C0)
#define SYSTEM_NET_SOCKETS_SOCKET_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E9BFB50)
#define SYSTEM_NET_SOCKETS_SOCKET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E9BA6B0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_1_OFFSET UNITYSDK_OFFSET(0x1E9BC6F0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_OFFSET UNITYSDK_OFFSET(0x1E9BC6D0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDCONNECT_OFFSET UNITYSDK_OFFSET(0x1E9BDF70)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDDISCONNECT_OFFSET UNITYSDK_OFFSET(0x1E9BE300)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVEFROM_OFFSET UNITYSDK_OFFSET(0x1E9BEBE0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVE_1_OFFSET UNITYSDK_OFFSET(0x1E9BA390)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVE_OFFSET UNITYSDK_OFFSET(0x1E9B5D10)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDSENDTO_OFFSET UNITYSDK_OFFSET(0x1E9BF640)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDSEND_1_OFFSET UNITYSDK_OFFSET(0x1E9BA000)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDSEND_OFFSET UNITYSDK_OFFSET(0x1E9B64D0)
#define SYSTEM_NET_SOCKETS_SOCKET_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E9BA790)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BF8B0)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BF790)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OFFSET UNITYSDK_OFFSET(0x1E9B4610)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x1E9B8160)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1E9BAC80)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_BLOCKING_OFFSET UNITYSDK_OFFSET(0x1E9BB2E0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_CLEANEDUP_OFFSET UNITYSDK_OFFSET(0x1E9BA640)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_CONNECTED_OFFSET UNITYSDK_OFFSET(0x1E9BB500)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_DUALMODE_OFFSET UNITYSDK_OFFSET(0x1E9B8550)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_FAMILYHINT_OFFSET UNITYSDK_OFFSET(0x1E9BFF50)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1E9B8140)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1E9BA550)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_ISBOUND_OFFSET UNITYSDK_OFFSET(0x1E9BAFF0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_ISDUALMODE_OFFSET UNITYSDK_OFFSET(0x1E9B86D0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x1E9BB000)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_OSSUPPORTSIPV4_OFFSET UNITYSDK_OFFSET(0x1E9B8020)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_OSSUPPORTSIPV6_OFFSET UNITYSDK_OFFSET(0x1E9B80E0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_PROTOCOLTYPE_OFFSET UNITYSDK_OFFSET(0x1E9B8180)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x1E9BB570)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_SOCKETTYPE_OFFSET UNITYSDK_OFFSET(0x1E9B8170)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_SUPPORTSIPV4_OFFSET UNITYSDK_OFFSET(0x1E9B7FC0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_SUPPORTSIPV6_OFFSET UNITYSDK_OFFSET(0x1E9B8080)
#define SYSTEM_NET_SOCKETS_SOCKET_INITIALIZESOCKETS_OFFSET UNITYSDK_OFFSET(0x1E9B7A20)
#define SYSTEM_NET_SOCKETS_SOCKET_INITSOCKETASYNCEVENTARGS_OFFSET UNITYSDK_OFFSET(0x1E9BC2B0)
#define SYSTEM_NET_SOCKETS_SOCKET_INTERNALSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1E9B5540)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1E9B9C60)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BFA00)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BF8D0)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_OFFSET UNITYSDK_OFFSET(0x1E9AE530)
#define SYSTEM_NET_SOCKETS_SOCKET_ISPROTOCOLSUPPORTED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9C00B0)
#define SYSTEM_NET_SOCKETS_SOCKET_ISPROTOCOLSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1E9BA650)
#define SYSTEM_NET_SOCKETS_SOCKET_LINGER_OFFSET UNITYSDK_OFFSET(0x1E9BFC20)
#define SYSTEM_NET_SOCKETS_SOCKET_LISTEN_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BCD90)
#define SYSTEM_NET_SOCKETS_SOCKET_LISTEN_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BCC80)
#define SYSTEM_NET_SOCKETS_SOCKET_LISTEN_OFFSET UNITYSDK_OFFSET(0x1E9BCB40)
#define SYSTEM_NET_SOCKETS_SOCKET_LOCALENDPOINT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BB2D0)
#define SYSTEM_NET_SOCKETS_SOCKET_LOCALENDPOINT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BB1B0)
#define SYSTEM_NET_SOCKETS_SOCKET_POLL_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BBB70)
#define SYSTEM_NET_SOCKETS_SOCKET_POLL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BBA50)
#define SYSTEM_NET_SOCKETS_SOCKET_POLL_OFFSET UNITYSDK_OFFSET(0x1E9BB850)
#define SYSTEM_NET_SOCKETS_SOCKET_QUEUEIOSELECTORJOB_OFFSET UNITYSDK_OFFSET(0x1E9BC3F0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B9AC0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_2_OFFSET UNITYSDK_OFFSET(0x1E9BE860)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BED70)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BEAC0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B9A60)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_1_OFFSET UNITYSDK_OFFSET(0x1E9B9310)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_2_OFFSET UNITYSDK_OFFSET(0x1E9B9170)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_3_OFFSET UNITYSDK_OFFSET(0x1E9B9390)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BE840)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_2_OFFSET UNITYSDK_OFFSET(0x1E9BE5A0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_3_OFFSET UNITYSDK_OFFSET(0x1E9BE850)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BE6B0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_OFFSET UNITYSDK_OFFSET(0x1E9B4FC0)
#define SYSTEM_NET_SOCKETS_SOCKET_REMAPIPENDPOINT_OFFSET UNITYSDK_OFFSET(0x1E9BC9B0)
#define SYSTEM_NET_SOCKETS_SOCKET_REMOTEENDPOINT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BB840)
#define SYSTEM_NET_SOCKETS_SOCKET_REMOTEENDPOINT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BB720)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BF780)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BF520)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_OFFSET UNITYSDK_OFFSET(0x1E9BF2A0)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_1_OFFSET UNITYSDK_OFFSET(0x1E9B8810)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_2_OFFSET UNITYSDK_OFFSET(0x1E9B53F0)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_3_OFFSET UNITYSDK_OFFSET(0x1E9B8F90)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_4_OFFSET UNITYSDK_OFFSET(0x1E9B8890)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BF280)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_2_OFFSET UNITYSDK_OFFSET(0x1E9BED80)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_3_OFFSET UNITYSDK_OFFSET(0x1E9BF290)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BEE90)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_OFFSET UNITYSDK_OFFSET(0x1E9B86E0)
#define SYSTEM_NET_SOCKETS_SOCKET_SETIPPROTECTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1E9B7DB0)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_1_OFFSET UNITYSDK_OFFSET(0x1E9B8220)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9BF8C0)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BA970)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_OFFSET UNITYSDK_OFFSET(0x1E9B65C0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_BLOCKING_OFFSET UNITYSDK_OFFSET(0x1E9BB2F0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_DONTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1E9B84F0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_DUALMODE_OFFSET UNITYSDK_OFFSET(0x1E9B8640)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_ENABLEBROADCAST_OFFSET UNITYSDK_OFFSET(0x1E9BAF10)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_EXCLUSIVEADDRESSUSE_OFFSET UNITYSDK_OFFSET(0x1E9B8190)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_NODELAY_OFFSET UNITYSDK_OFFSET(0x1E9BABA0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1E9B8370)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E9B83F0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_SENDTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E9B8470)
#define SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1E9B6FC0)
#define SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9BA860)
#define SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1E9BFA20)
#define SYSTEM_NET_SOCKETS_SOCKET_SOCKETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1E9B7E80)
#define SYSTEM_NET_SOCKETS_SOCKET_SOCKETOPERATIONTOSOCKETASYNCOPERATION_OFFSET UNITYSDK_OFFSET(0x1E9BFE50)
#define SYSTEM_NET_SOCKETS_SOCKET_SOCKET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E9B7CE0)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFBUFFERNULL_OFFSET UNITYSDK_OFFSET(0x1E9BE450)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFBUFFEROUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1E9BE490)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFDISPOSEDANDCLOSED_OFFSET UNITYSDK_OFFSET(0x1E9BAD80)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFUDP_OFFSET UNITYSDK_OFFSET(0x1E9BB510)
#define SYSTEM_NET_SOCKETS_SOCKET_VALIDATEENDIASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x1E9BC830)
#define SYSTEM_NET_SOCKETS_SOCKET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C00C0)
#define SYSTEM_NET_SOCKETS_SOCKET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9BAAB0)
#define SYSTEM_NET_SOCKETS_SOCKET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B7770)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket_TypeDefinitionIndex = 2902;

	class Socket : public ::System::Object
	{
	public:
		static ::System::AsyncCallback** StaticGet_DisconnectAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x200B0);
		}
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x200B8);
		}
		static ::System::AsyncCallback** StaticGet_AcceptAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x200C0);
		}
		static ::System::AsyncCallback** StaticGet_ReceiveAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x200C8);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginReceiveCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x200D0);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginReceiveGenericCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x200D8);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginAcceptCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x200E0);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginConnectCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x200E8);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginDisconnectCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x200F0);
		}
		static ::System::AsyncCallback** StaticGet_ReceiveFromAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x200F8);
		}
		static ::System::AsyncCallback** StaticGet_SendAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x20100);
		}
		static ::System::AsyncCallback** StaticGet_SendToAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x20108);
		}
		static ::System::AsyncCallback** StaticGet_ConnectAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x20110);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginReceiveFromCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x20118);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginAcceptReceiveCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x20120);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginSendGenericCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x20128);
		}
		static ::System::Boolean* StaticGet_s_SupportsIPv4()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0xA880);
		}
		static ::System::Boolean* StaticGet_s_OSSupportsIPv6()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0xA881);
		}
		static ::System::Boolean* StaticGet_s_SupportsIPv6()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0xA882);
		}
		static ::System::Boolean* StaticGet_s_LoggingEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0xA883);
		}
		static ::System::Boolean* StaticGet_s_Initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0xA884);
		}
		::System::Net::Sockets::SafeSocketHandle* m_Handle; // 0x10
		::System::Net::EndPoint* seed_endpoint; // 0x18
		::System::Threading::SemaphoreSlim* WriteSem; // 0x20
		::System::Threading::SemaphoreSlim* ReadSem; // 0x28
		::System::Int32 m_IntCleanedUp; // 0x30
		::System::Int32 linger_timeout; // 0x34
		::System::Net::Sockets::AddressFamily addressFamily; // 0x38
		::System::Net::Sockets::SocketType socketType; // 0x3C
		::System::Net::Sockets::ProtocolType protocolType; // 0x40
		::System::Boolean is_listening; // 0x44
		::System::Boolean connect_in_progress; // 0x45
		::System::Boolean is_blocking; // 0x46
		::System::Boolean is_connected; // 0x47
		::System::Boolean is_closed; // 0x48
		::System::Boolean useOverlappedIO; // 0x49
		::System::Boolean is_bound; // 0x4A

		::System::Void _ctor(::System::Net::Sockets::AddressFamily a1, ::System::Net::Sockets::SocketType a2, ::System::Net::Sockets::ProtocolType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Net::Sockets::AddressFamily a1, ::System::Net::Sockets::SocketType a2, ::System::Net::Sockets::ProtocolType a3, ::System::Net::Sockets::SafeSocketHandle* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType, ::System::Net::Sockets::SafeSocketHandle*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void set_ExclusiveAddressUse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_EXCLUSIVEADDRESSUSE_OFFSET))(this, a1);
		}

		::System::Void set_ReceiveBufferSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVEBUFFERSIZE_OFFSET))(this, a1);
		}

		::System::Void set_ReceiveTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVETIMEOUT_OFFSET))(this, a1);
		}

		::System::Void set_SendTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_SENDTIMEOUT_OFFSET))(this, a1);
		}

		::System::Void set_DontFragment(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_DONTFRAGMENT_OFFSET))(this, a1);
		}

		::System::Boolean get_DualMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_DUALMODE_OFFSET))(this);
		}

		::System::Void set_DualMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_DUALMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDualMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_ISDUALMODE_OFFSET))(this);
		}

		::System::Int32 Send(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_OFFSET))(this, a1);
		}

		::System::Int32 Send_1(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* a1, ::System::Net::Sockets::SocketFlags a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 Send_2(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Receive(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Receive_1(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* a1, ::System::Net::Sockets::SocketFlags a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 ReceiveFrom(::Il2CppArray<::System::Byte>* a1, ::System::Net::EndPoint*& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Net::EndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_OFFSET))(this, a1, a2);
		}

		::System::Int32 IOControl(::System::Net::Sockets::IOControlCode a1, ::Il2CppArray<::System::Byte>* a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Sockets::IOControlCode, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetIPProtectionLevel(::System::Net::Sockets::IPProtectionLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::IPProtectionLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETIPPROTECTIONLEVEL_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginSend(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 EndSend(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDSEND_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginReceive(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 EndReceive(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVE_OFFSET))(this, a1);
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

		::System::Void InternalShutdown(::System::Net::Sockets::SocketShutdown a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketShutdown))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_INTERNALSHUTDOWN_OFFSET))(this, a1);
		}

		::System::Void SetSocketOption(::System::Net::Sockets::SocketOptionLevel a1, ::System::Net::Sockets::SocketOptionName a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SocketDefaults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SOCKETDEFAULTS_OFFSET))(this);
		}

		::System::IntPtr Socket_internal(::System::Net::Sockets::AddressFamily a1, ::System::Net::Sockets::SocketType a2, ::System::Net::Sockets::ProtocolType a3, ::System::Int32& a4)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SOCKET_INTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_Available()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_AVAILABLE_OFFSET))(this);
		}

		static ::System::Int32 Available_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Int32& a2)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_AVAILABLE_INTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Int32 Available_internal_1(::System::IntPtr a1, ::System::Int32& a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_AVAILABLE_INTERNAL_1_OFFSET))(a1, a2);
		}

		::System::Void set_EnableBroadcast(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_ENABLEBROADCAST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_ISBOUND_OFFSET))(this);
		}

		::System::Net::EndPoint* get_LocalEndPoint()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_LOCALENDPOINT_OFFSET))(this);
		}

		static ::System::Net::SocketAddress* LocalEndPoint_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Net::SocketAddress*(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LOCALENDPOINT_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Net::SocketAddress* LocalEndPoint_internal_1(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Net::SocketAddress*(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LOCALENDPOINT_INTERNAL_1_OFFSET))(a1, a2, a3);
		}

		::System::Boolean get_Blocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_BLOCKING_OFFSET))(this);
		}

		::System::Void set_Blocking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_BLOCKING_OFFSET))(this, a1);
		}

		static ::System::Void Blocking_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Boolean a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BLOCKING_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Blocking_internal_1(::System::IntPtr a1, ::System::Boolean a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BLOCKING_INTERNAL_1_OFFSET))(a1, a2, a3);
		}

		::System::Boolean get_Connected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_CONNECTED_OFFSET))(this);
		}

		::System::Void set_NoDelay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_NODELAY_OFFSET))(this, a1);
		}

		::System::Net::EndPoint* get_RemoteEndPoint()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_REMOTEENDPOINT_OFFSET))(this);
		}

		static ::System::Net::SocketAddress* RemoteEndPoint_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Net::SocketAddress*(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_REMOTEENDPOINT_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Net::SocketAddress* RemoteEndPoint_internal_1(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Net::SocketAddress*(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_REMOTEENDPOINT_INTERNAL_1_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Poll(::System::Int32 a1, ::System::Net::Sockets::SelectMode a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Net::Sockets::SelectMode))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_POLL_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Poll_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Net::Sockets::SelectMode a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SelectMode, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_POLL_INTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Poll_internal_1(::System::IntPtr a1, ::System::Net::Sockets::SelectMode a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Net::Sockets::SelectMode, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_POLL_INTERNAL_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Net::Sockets::Socket* Accept()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_OFFSET))(this);
		}

		::System::Void Accept_1(::System::Net::Sockets::Socket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_1_OFFSET))(this, a1);
		}

		::System::Boolean AcceptAsync(::System::Net::Sockets::SocketAsyncEventArgs* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ACCEPTASYNC_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginAccept(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINACCEPT_OFFSET))(this, a1, a2);
		}

		::System::Net::Sockets::Socket* EndAccept(::System::IAsyncResult* a1)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_OFFSET))(this, a1);
		}

		::System::Net::Sockets::Socket* EndAccept_1(::Il2CppArray<::System::Byte>*& a1, ::System::Int32& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Net::Sockets::SafeSocketHandle* Accept_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Int32& a2, ::System::Boolean a3)
		{
			return ((::System::Net::Sockets::SafeSocketHandle*(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr Accept_internal_1(::System::IntPtr a1, ::System::Int32& a2, ::System::Boolean a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_INTERNAL_1_OFFSET))(a1, a2, a3);
		}

		::System::Void Bind(::System::Net::EndPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BIND_OFFSET))(this, a1);
		}

		static ::System::Void Bind_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Net::SocketAddress* a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::SocketAddress*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BIND_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Bind_internal_1(::System::IntPtr a1, ::System::Net::SocketAddress* a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::SocketAddress*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BIND_INTERNAL_1_OFFSET))(a1, a2, a3);
		}

		::System::Void Listen(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LISTEN_OFFSET))(this, a1);
		}

		static ::System::Void Listen_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LISTEN_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Listen_internal_1(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LISTEN_INTERNAL_1_OFFSET))(a1, a2, a3);
		}

		::System::Void Connect(::System::Net::EndPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECT_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginConnect(::System::String* a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginConnect_1(::Il2CppArray<::System::Net::IPAddress*>* a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void BeginMConnect(::System::Net::Sockets::SocketAsyncResult* a1)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SocketAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINMCONNECT_OFFSET))(a1);
		}

		static ::System::Void BeginSConnect(::System::Net::Sockets::SocketAsyncResult* a1)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SocketAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSCONNECT_OFFSET))(a1);
		}

		::System::Void EndConnect(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDCONNECT_OFFSET))(this, a1);
		}

		static ::System::Void Connect_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Net::SocketAddress* a2, ::System::Int32& a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::SocketAddress*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECT_INTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Connect_internal_1(::System::IntPtr a1, ::System::Net::SocketAddress* a2, ::System::Int32& a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::SocketAddress*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECT_INTERNAL_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Disconnect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_OFFSET))(this, a1);
		}

		::System::Void EndDisconnect(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDDISCONNECT_OFFSET))(this, a1);
		}

		static ::System::Void Disconnect_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Boolean a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Disconnect_internal_1(::System::IntPtr a1, ::System::Boolean a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_INTERNAL_1_OFFSET))(a1, a2, a3);
		}

		::System::Int32 Receive_2(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Net::Sockets::SocketError& a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 Receive_3(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* a1, ::System::Net::Sockets::SocketFlags a2, ::System::Net::Sockets::SocketError& a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_3_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginReceive_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Net::Sockets::SocketError& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 EndReceive_1(::System::IAsyncResult* a1, ::System::Net::Sockets::SocketError& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVE_1_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 Receive_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Net::Sockets::Socket_WSABUF* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Int32& a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::Socket_WSABUF*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Receive_internal_1(::System::IntPtr a1, ::System::Net::Sockets::Socket_WSABUF* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Int32& a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Net::Sockets::Socket_WSABUF*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Receive_internal_2(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Byte* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Int32& a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Receive_internal_3(::System::IntPtr a1, ::System::Byte* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Int32& a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 ReceiveFrom_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Net::EndPoint*& a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 ReceiveFrom_2(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Net::EndPoint*& a5, ::System::Net::Sockets::SocketError& a6)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*&, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 EndReceiveFrom(::System::IAsyncResult* a1, ::System::Net::EndPoint*& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*, ::System::Net::EndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVEFROM_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 ReceiveFrom_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Byte* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Net::SocketAddress*& a5, ::System::Int32& a6, ::System::Boolean a7)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*&, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 ReceiveFrom_internal_1(::System::IntPtr a1, ::System::Byte* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Net::SocketAddress*& a5, ::System::Int32& a6, ::System::Boolean a7)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*&, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_INTERNAL_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 Send_3(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Net::Sockets::SocketError& a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 Send_4(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* a1, ::System::Net::Sockets::SocketFlags a2, ::System::Net::Sockets::SocketError& a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_4_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginSend_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Net::Sockets::SocketError& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void BeginSendCallback(::System::Net::Sockets::SocketAsyncResult* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SocketAsyncResult*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDCALLBACK_OFFSET))(a1, a2);
		}

		::System::Int32 EndSend_1(::System::IAsyncResult* a1, ::System::Net::Sockets::SocketError& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDSEND_1_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 Send_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Net::Sockets::Socket_WSABUF* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Int32& a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::Socket_WSABUF*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Send_internal_1(::System::IntPtr a1, ::System::Net::Sockets::Socket_WSABUF* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Int32& a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Net::Sockets::Socket_WSABUF*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Send_internal_2(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Byte* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Int32& a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Send_internal_3(::System::IntPtr a1, ::System::Byte* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Int32& a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 SendTo(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Net::EndPoint* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDTO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndSendTo(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDSENDTO_OFFSET))(this, a1);
		}

		static ::System::Int32 SendTo_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Byte* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Net::SocketAddress* a5, ::System::Int32& a6, ::System::Boolean a7)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDTO_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 SendTo_internal_1(::System::IntPtr a1, ::System::Byte* a2, ::System::Int32 a3, ::System::Net::Sockets::SocketFlags a4, ::System::Net::SocketAddress* a5, ::System::Int32& a6, ::System::Boolean a7)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Byte*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDTO_INTERNAL_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Object* GetSocketOption(::System::Net::Sockets::SocketOptionLevel a1, ::System::Net::Sockets::SocketOptionName a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OFFSET))(this, a1, a2);
		}

		static ::System::Void GetSocketOption_obj_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Net::Sockets::SocketOptionLevel a2, ::System::Net::Sockets::SocketOptionName a3, ::System::Object*& a4, ::System::Int32& a5)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void GetSocketOption_obj_internal_1(::System::IntPtr a1, ::System::Net::Sockets::SocketOptionLevel a2, ::System::Net::Sockets::SocketOptionName a3, ::System::Object*& a4, ::System::Int32& a5)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void SetSocketOption_1(::System::Net::Sockets::SocketOptionLevel a1, ::System::Net::Sockets::SocketOptionName a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void SetSocketOption_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Net::Sockets::SocketOptionLevel a2, ::System::Net::Sockets::SocketOptionName a3, ::System::Object* a4, ::Il2CppArray<::System::Byte>* a5, ::System::Int32 a6, ::System::Int32& a7)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void SetSocketOption_internal_1(::System::IntPtr a1, ::System::Net::Sockets::SocketOptionLevel a2, ::System::Net::Sockets::SocketOptionName a3, ::System::Object* a4, ::Il2CppArray<::System::Byte>* a5, ::System::Int32 a6, ::System::Int32& a7)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_INTERNAL_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 IOControl_1(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 IOControl_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32& a5)
		{
			return ((::System::Int32(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_INTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 IOControl_internal_1(::System::IntPtr a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32& a5)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_INTERNAL_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CLOSE_OFFSET))(this);
		}

		::System::Void Close_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CLOSE_1_OFFSET))(this, a1);
		}

		static ::System::Void Close_internal(::System::IntPtr a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CLOSE_INTERNAL_OFFSET))(a1, a2);
		}

		::System::Void Shutdown(::System::Net::Sockets::SocketShutdown a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketShutdown))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_OFFSET))(this, a1);
		}

		static ::System::Void Shutdown_internal(::System::Net::Sockets::SafeSocketHandle* a1, ::System::Net::Sockets::SocketShutdown a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketShutdown, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_INTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Shutdown_internal_1(::System::IntPtr a1, ::System::Net::Sockets::SocketShutdown a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::Sockets::SocketShutdown, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_INTERNAL_1_OFFSET))(a1, a2, a3);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Linger(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_LINGER_OFFSET))(this, a1);
		}

		::System::Void ThrowIfDisposedAndClosed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_THROWIFDISPOSEDANDCLOSED_OFFSET))(this);
		}

		::System::Void ThrowIfBufferNull(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_THROWIFBUFFERNULL_OFFSET))(this, a1);
		}

		::System::Void ThrowIfBufferOutOfRange(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_THROWIFBUFFEROUTOFRANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ThrowIfUdp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_THROWIFUDP_OFFSET))(this);
		}

		::System::Net::Sockets::SocketAsyncResult* ValidateEndIAsyncResult(::System::IAsyncResult* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Net::Sockets::SocketAsyncResult*(*)(::PVOID, ::System::IAsyncResult*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_VALIDATEENDIASYNCRESULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueueIOSelectorJob(::System::Threading::SemaphoreSlim* a1, ::System::IntPtr a2, ::System::IOSelectorJob* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SemaphoreSlim*, ::System::IntPtr, ::System::IOSelectorJob*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_QUEUEIOSELECTORJOB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitSocketAsyncEventArgs(::System::Net::Sockets::SocketAsyncEventArgs* a1, ::System::AsyncCallback* a2, ::System::Object* a3, ::System::Net::Sockets::SocketOperation a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_INITSOCKETASYNCEVENTARGS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Net::Sockets::SocketAsyncOperation SocketOperationToSocketAsyncOperation(::System::Net::Sockets::SocketOperation a1)
		{
			return ((::System::Net::Sockets::SocketAsyncOperation(*)(::PVOID, ::System::Net::Sockets::SocketOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SOCKETOPERATIONTOSOCKETASYNCOPERATION_OFFSET))(this, a1);
		}

		::System::Net::IPEndPoint* RemapIPEndPoint(::System::Net::IPEndPoint* a1)
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_REMAPIPENDPOINT_OFFSET))(this, a1);
		}

		static ::System::Void cancel_blocking_socket_operation(::System::Threading::Thread* a1)
		{
			return ((::System::Void(*)(::System::Threading::Thread*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CANCEL_BLOCKING_SOCKET_OPERATION_OFFSET))(a1);
		}

		static ::System::Int32 get_FamilyHint()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_FAMILYHINT_OFFSET))();
		}

		static ::System::Boolean IsProtocolSupported_internal(::System::Net::NetworkInformation::NetworkInterfaceComponent a1)
		{
			return ((::System::Boolean(*)(::System::Net::NetworkInformation::NetworkInterfaceComponent))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ISPROTOCOLSUPPORTED_INTERNAL_OFFSET))(a1);
		}

		static ::System::Boolean IsProtocolSupported(::System::Net::NetworkInformation::NetworkInterfaceComponent a1)
		{
			return ((::System::Boolean(*)(::System::Net::NetworkInformation::NetworkInterfaceComponent))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ISPROTOCOLSUPPORTED_OFFSET))(a1);
		}
	};
}
