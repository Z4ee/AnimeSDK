#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/IO/MonoIOError.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceComponent.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Net/Sockets/IOControlCode.h"
#include "unitysdk/System/Net/Sockets/IPPacketInformation.h"
#include "unitysdk/System/Net/Sockets/IPProtectionLevel.h"
#include "unitysdk/System/Net/Sockets/ProtocolType.h"
#include "unitysdk/System/Net/Sockets/SelectMode.h"
#include "unitysdk/System/Net/Sockets/SocketAsyncOperation.h"
#include "unitysdk/System/Net/Sockets/SocketError.h"
#include "unitysdk/System/Net/Sockets/SocketFlags.h"
#include "unitysdk/System/Net/Sockets/SocketInformation.h"
#include "unitysdk/System/Net/Sockets/SocketOperation.h"
#include "unitysdk/System/Net/Sockets/SocketOptionLevel.h"
#include "unitysdk/System/Net/Sockets/SocketOptionName.h"
#include "unitysdk/System/Net/Sockets/SocketShutdown.h"
#include "unitysdk/System/Net/Sockets/SocketType.h"
#include "unitysdk/System/Net/Sockets/Socket_WSABUF.h"
#include "unitysdk/System/Net/Sockets/TransmitFileOptions.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class IOAsyncCallback; }
namespace System { class IOSelectorJob; }
namespace System { class String; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class BufferOffsetSize; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class SocketAddress; }
namespace System::Net::Sockets { class LingerOption; }
namespace System::Net::Sockets { class SafeSocketHandle; }
namespace System::Net::Sockets { class SocketAsyncEventArgs; }
namespace System::Net::Sockets { class SocketAsyncResult; }
namespace System::Threading { class SemaphoreSlim; }
namespace System::Threading { class Thread; }

#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPTASYNC_OFFSET UNITYSDK_OFFSET(0x1D6BA250)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_1_OFFSET UNITYSDK_OFFSET(0x1D6BA160)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BAB80)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BA040)
#define SYSTEM_NET_SOCKETS_SOCKET_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1D6B9F20)
#define SYSTEM_NET_SOCKETS_SOCKET_ADDSOCKETS_OFFSET UNITYSDK_OFFSET(0x1D6B98A0)
#define SYSTEM_NET_SOCKETS_SOCKET_AVAILABLE_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6B8510)
#define SYSTEM_NET_SOCKETS_SOCKET_AVAILABLE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6B8400)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINACCEPT_1_OFFSET UNITYSDK_OFFSET(0x1D6BA890)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINACCEPT_2_OFFSET UNITYSDK_OFFSET(0x1D6B64E0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINACCEPT_OFFSET UNITYSDK_OFFSET(0x1D6B64C0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_1_OFFSET UNITYSDK_OFFSET(0x1D6BB870)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_2_OFFSET UNITYSDK_OFFSET(0x1D6B56E0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_3_OFFSET UNITYSDK_OFFSET(0x1D6BB490)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_OFFSET UNITYSDK_OFFSET(0x1D6B5460)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINDISCONNECT_OFFSET UNITYSDK_OFFSET(0x1D6BC4A0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINMCONNECT_OFFSET UNITYSDK_OFFSET(0x1D6BBE70)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINMULTIPLESEND_OFFSET UNITYSDK_OFFSET(0x1D6B73B0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVEFROM_OFFSET UNITYSDK_OFFSET(0x1D6BD420)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVEMESSAGEFROM_OFFSET UNITYSDK_OFFSET(0x1D6BD860)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_1_OFFSET UNITYSDK_OFFSET(0x1D6B6110)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_2_OFFSET UNITYSDK_OFFSET(0x1D6B5F70)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_3_OFFSET UNITYSDK_OFFSET(0x1D6B61C0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_OFFSET UNITYSDK_OFFSET(0x1D6B5EA0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSCONNECT_OFFSET UNITYSDK_OFFSET(0x1D6BB9C0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D6BE190)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDFILE_1_OFFSET UNITYSDK_OFFSET(0x1D6B5230)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDFILE_OFFSET UNITYSDK_OFFSET(0x1D6B5200)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDTOCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D6BEB30)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDTO_OFFSET UNITYSDK_OFFSET(0x1D6BE910)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_1_OFFSET UNITYSDK_OFFSET(0x1D6B5AE0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_2_OFFSET UNITYSDK_OFFSET(0x1D6B58B0)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_3_OFFSET UNITYSDK_OFFSET(0x1D6B5B90)
#define SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_OFFSET UNITYSDK_OFFSET(0x1D6B57E0)
#define SYSTEM_NET_SOCKETS_SOCKET_BIND_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BAE80)
#define SYSTEM_NET_SOCKETS_SOCKET_BIND_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BAD70)
#define SYSTEM_NET_SOCKETS_SOCKET_BIND_OFFSET UNITYSDK_OFFSET(0x1D6BAB90)
#define SYSTEM_NET_SOCKETS_SOCKET_BLOCKING_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6B8CA0)
#define SYSTEM_NET_SOCKETS_SOCKET_BLOCKING_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6B8B90)
#define SYSTEM_NET_SOCKETS_SOCKET_CANCELCONNECTASYNC_OFFSET UNITYSDK_OFFSET(0x1D6BB670)
#define SYSTEM_NET_SOCKETS_SOCKET_CANCEL_BLOCKING_SOCKET_OPERATION_OFFSET UNITYSDK_OFFSET(0x1D6BFF30)
#define SYSTEM_NET_SOCKETS_SOCKET_CANTRYADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x1D6B27F0)
#define SYSTEM_NET_SOCKETS_SOCKET_CLOSE_1_OFFSET UNITYSDK_OFFSET(0x1D6BFB00)
#define SYSTEM_NET_SOCKETS_SOCKET_CLOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BFBB0)
#define SYSTEM_NET_SOCKETS_SOCKET_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D6BB7C0)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D6B6CE0)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECTASYNC_OFFSET UNITYSDK_OFFSET(0x1D6B6A80)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_1_OFFSET UNITYSDK_OFFSET(0x1D6BB080)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_2_OFFSET UNITYSDK_OFFSET(0x1D6BB0E0)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_3_OFFSET UNITYSDK_OFFSET(0x1D6B2C10)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BC080)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BB110)
#define SYSTEM_NET_SOCKETS_SOCKET_CONNECT_OFFSET UNITYSDK_OFFSET(0x1D6B2810)
#define SYSTEM_NET_SOCKETS_SOCKET_DISCONNECTASYNC_OFFSET UNITYSDK_OFFSET(0x1D6BC270)
#define SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BC630)
#define SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BC160)
#define SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x1D6BC090)
#define SYSTEM_NET_SOCKETS_SOCKET_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D6BFCA0)
#define SYSTEM_NET_SOCKETS_SOCKET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D6B6960)
#define SYSTEM_NET_SOCKETS_SOCKET_DUPLICATEANDCLOSE_OFFSET UNITYSDK_OFFSET(0x1D6BF010)
#define SYSTEM_NET_SOCKETS_SOCKET_DUPLICATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BF000)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_1_OFFSET UNITYSDK_OFFSET(0x1D6BAA60)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_2_OFFSET UNITYSDK_OFFSET(0x1D6B6760)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_OFFSET UNITYSDK_OFFSET(0x1D6B66D0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDCONNECT_OFFSET UNITYSDK_OFFSET(0x1D6BBFF0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDDISCONNECT_OFFSET UNITYSDK_OFFSET(0x1D6BC5A0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDMULTIPLESEND_OFFSET UNITYSDK_OFFSET(0x1D6B75C0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVEFROM_OFFSET UNITYSDK_OFFSET(0x1D6BD600)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVEMESSAGEFROM_OFFSET UNITYSDK_OFFSET(0x1D6BD970)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVE_1_OFFSET UNITYSDK_OFFSET(0x1D6B6390)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVE_OFFSET UNITYSDK_OFFSET(0x1D6B6310)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDSENDFILE_OFFSET UNITYSDK_OFFSET(0x1D6BEEC0)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDSENDTO_OFFSET UNITYSDK_OFFSET(0x1D6BED00)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDSEND_1_OFFSET UNITYSDK_OFFSET(0x1D6B5D70)
#define SYSTEM_NET_SOCKETS_SOCKET_ENDSEND_OFFSET UNITYSDK_OFFSET(0x1D6B5CF0)
#define SYSTEM_NET_SOCKETS_SOCKET_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D6B6A10)
#define SYSTEM_NET_SOCKETS_SOCKET_GETCHECKEDIPS_OFFSET UNITYSDK_OFFSET(0x1D6BB210)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_1_OFFSET UNITYSDK_OFFSET(0x1D6BF660)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_2_OFFSET UNITYSDK_OFFSET(0x1D6B17E0)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_ARR_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BF850)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_ARR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BF540)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BF860)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BF730)
#define SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OFFSET UNITYSDK_OFFSET(0x1D6BF450)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x1D6B1700)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1D6B82D0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_BLOCKING_OFFSET UNITYSDK_OFFSET(0x1D6B8AE0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_CLEANEDUP_OFFSET UNITYSDK_OFFSET(0x1D6B2C00)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_CONNECTED_OFFSET UNITYSDK_OFFSET(0x1D6B8CB0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_DONTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1D6B2570)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_DUALMODE_OFFSET UNITYSDK_OFFSET(0x1D6B26E0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_ENABLEBROADCAST_OFFSET UNITYSDK_OFFSET(0x1D6B8520)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_EXCLUSIVEADDRESSUSE_OFFSET UNITYSDK_OFFSET(0x1D6B1730)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_FAMILYHINT_OFFSET UNITYSDK_OFFSET(0x1D6BFF60)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D6B16C0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1D6B6810)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_ISBOUND_OFFSET UNITYSDK_OFFSET(0x1D6B86B0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_ISDUALMODE_OFFSET UNITYSDK_OFFSET(0x1D6B27E0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_LEGACYSUPPORTSIPV6_OFFSET UNITYSDK_OFFSET(0x1D6B1600)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_LINGERSTATE_OFFSET UNITYSDK_OFFSET(0x1D6B1F90)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x1D6B88F0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_MULTICASTLOOPBACK_OFFSET UNITYSDK_OFFSET(0x1D6B86C0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_NODELAY_OFFSET UNITYSDK_OFFSET(0x1D6B8CD0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_OSSUPPORTSIPV4_OFFSET UNITYSDK_OFFSET(0x1D6B1540)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_OSSUPPORTSIPV6_OFFSET UNITYSDK_OFFSET(0x1D6B1660)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_PROTOCOLTYPE_OFFSET UNITYSDK_OFFSET(0x1D6B1720)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_RECEIVEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1D6B1AD0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_RECEIVETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D6B1D30)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x1D6B8E60)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_SENDBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1D6B1C00)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_SENDTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D6B1E60)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_SOCKETTYPE_OFFSET UNITYSDK_OFFSET(0x1D6B1710)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_SUPPORTSIPV4_OFFSET UNITYSDK_OFFSET(0x1D6B14E0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_SUPPORTSIPV6_OFFSET UNITYSDK_OFFSET(0x1D6B15A0)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_TTL_OFFSET UNITYSDK_OFFSET(0x1D6B2390)
#define SYSTEM_NET_SOCKETS_SOCKET_GET_USEONLYOVERLAPPEDIO_OFFSET UNITYSDK_OFFSET(0x1D6B16E0)
#define SYSTEM_NET_SOCKETS_SOCKET_INITIALIZESOCKETS_OFFSET UNITYSDK_OFFSET(0x1D6B0F80)
#define SYSTEM_NET_SOCKETS_SOCKET_INITSOCKETASYNCEVENTARGS_OFFSET UNITYSDK_OFFSET(0x1D6BA5C0)
#define SYSTEM_NET_SOCKETS_SOCKET_INTERNALSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1D6B7080)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1D6B50B0)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BFAF0)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BF9C0)
#define SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_OFFSET UNITYSDK_OFFSET(0x1D6B50A0)
#define SYSTEM_NET_SOCKETS_SOCKET_ISPROTOCOLSUPPORTED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6C00C0)
#define SYSTEM_NET_SOCKETS_SOCKET_ISPROTOCOLSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D6B6900)
#define SYSTEM_NET_SOCKETS_SOCKET_LINGER_OFFSET UNITYSDK_OFFSET(0x1D6BFD10)
#define SYSTEM_NET_SOCKETS_SOCKET_LISTEN_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BB070)
#define SYSTEM_NET_SOCKETS_SOCKET_LISTEN_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BAF60)
#define SYSTEM_NET_SOCKETS_SOCKET_LISTEN_OFFSET UNITYSDK_OFFSET(0x1D6BAE90)
#define SYSTEM_NET_SOCKETS_SOCKET_LOCALENDPOINT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6B8AD0)
#define SYSTEM_NET_SOCKETS_SOCKET_LOCALENDPOINT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6B89C0)
#define SYSTEM_NET_SOCKETS_SOCKET_MULTIPLESEND_OFFSET UNITYSDK_OFFSET(0x1D6B7640)
#define SYSTEM_NET_SOCKETS_SOCKET_POLL_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6B9F10)
#define SYSTEM_NET_SOCKETS_SOCKET_POLL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6B9DF0)
#define SYSTEM_NET_SOCKETS_SOCKET_POLL_OFFSET UNITYSDK_OFFSET(0x1D6B9C60)
#define SYSTEM_NET_SOCKETS_SOCKET_QUEUEIOSELECTORJOB_OFFSET UNITYSDK_OFFSET(0x1D6BA700)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEASYNC_OFFSET UNITYSDK_OFFSET(0x1D6BC9F0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROMASYNC_OFFSET UNITYSDK_OFFSET(0x1D6BD130)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D6B4F20)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_2_OFFSET UNITYSDK_OFFSET(0x1D6B4FE0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_3_OFFSET UNITYSDK_OFFSET(0x1D6B4DC0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_4_OFFSET UNITYSDK_OFFSET(0x1D6BCE80)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BD6E0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BD010)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_OFFSET UNITYSDK_OFFSET(0x1D6B4D90)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEMESSAGEFROMASYNC_OFFSET UNITYSDK_OFFSET(0x1D6BD800)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVEMESSAGEFROM_OFFSET UNITYSDK_OFFSET(0x1D6BD6F0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_1_OFFSET UNITYSDK_OFFSET(0x1D6B4270)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_2_OFFSET UNITYSDK_OFFSET(0x1D6B43E0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_3_OFFSET UNITYSDK_OFFSET(0x1D6B41D0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_4_OFFSET UNITYSDK_OFFSET(0x1D6B46B0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_5_OFFSET UNITYSDK_OFFSET(0x1D6B4730)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_6_OFFSET UNITYSDK_OFFSET(0x1D6B4550)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_7_OFFSET UNITYSDK_OFFSET(0x1D6B47B0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BCE60)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_2_OFFSET UNITYSDK_OFFSET(0x1D6BC7D0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_3_OFFSET UNITYSDK_OFFSET(0x1D6BCE70)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BC8E0)
#define SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_OFFSET UNITYSDK_OFFSET(0x1D6B4130)
#define SYSTEM_NET_SOCKETS_SOCKET_REMAPIPENDPOINT_OFFSET UNITYSDK_OFFSET(0x1D6BACD0)
#define SYSTEM_NET_SOCKETS_SOCKET_REMOTEENDPOINT_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6B9040)
#define SYSTEM_NET_SOCKETS_SOCKET_REMOTEENDPOINT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6B8F30)
#define SYSTEM_NET_SOCKETS_SOCKET_SELECT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6B9C50)
#define SYSTEM_NET_SOCKETS_SOCKET_SELECT_OFFSET UNITYSDK_OFFSET(0x1D6B9050)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x1D6BDC40)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILE_1_OFFSET UNITYSDK_OFFSET(0x1D6B3AB0)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILE_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BEF90)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BEDA0)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDFILE_OFFSET UNITYSDK_OFFSET(0x1D6B3A90)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDPACKETSASYNC_OFFSET UNITYSDK_OFFSET(0x1D6BEFA0)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTOASYNC_OFFSET UNITYSDK_OFFSET(0x1D6BE570)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_1_OFFSET UNITYSDK_OFFSET(0x1D6B3FB0)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_2_OFFSET UNITYSDK_OFFSET(0x1D6B4070)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_3_OFFSET UNITYSDK_OFFSET(0x1D6B3DE0)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BED90)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BE450)
#define SYSTEM_NET_SOCKETS_SOCKET_SENDTO_OFFSET UNITYSDK_OFFSET(0x1D6B3DB0)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_1_OFFSET UNITYSDK_OFFSET(0x1D6B30A0)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_2_OFFSET UNITYSDK_OFFSET(0x1D6B3210)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_3_OFFSET UNITYSDK_OFFSET(0x1D6B3380)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_4_OFFSET UNITYSDK_OFFSET(0x1D6B3400)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_5_OFFSET UNITYSDK_OFFSET(0x1D6B3000)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_6_OFFSET UNITYSDK_OFFSET(0x1D6B3C10)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_7_OFFSET UNITYSDK_OFFSET(0x1D6B3480)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BE430)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_2_OFFSET UNITYSDK_OFFSET(0x1D6BDA20)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_3_OFFSET UNITYSDK_OFFSET(0x1D6BE440)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6BDB30)
#define SYSTEM_NET_SOCKETS_SOCKET_SEND_OFFSET UNITYSDK_OFFSET(0x1D6B2F60)
#define SYSTEM_NET_SOCKETS_SOCKET_SETIPPROTECTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1D6B1200)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_1_OFFSET UNITYSDK_OFFSET(0x1D6BF870)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_2_OFFSET UNITYSDK_OFFSET(0x1D6B2030)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_3_OFFSET UNITYSDK_OFFSET(0x1D6BF9A0)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_4_OFFSET UNITYSDK_OFFSET(0x1D6B19E0)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BF9B0)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6B7960)
#define SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_OFFSET UNITYSDK_OFFSET(0x1D6B7810)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_BLOCKING_OFFSET UNITYSDK_OFFSET(0x1D6B8AF0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_CONNECTED_OFFSET UNITYSDK_OFFSET(0x1D6B8CC0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_DONTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1D6B2660)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_DUALMODE_OFFSET UNITYSDK_OFFSET(0x1D6B0EF0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_ENABLEBROADCAST_OFFSET UNITYSDK_OFFSET(0x1D6B8620)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_EXCLUSIVEADDRESSUSE_OFFSET UNITYSDK_OFFSET(0x1D6B1950)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_LINGERSTATE_OFFSET UNITYSDK_OFFSET(0x1D6B2010)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_MULTICASTLOOPBACK_OFFSET UNITYSDK_OFFSET(0x1D6B8820)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_NODELAY_OFFSET UNITYSDK_OFFSET(0x1D6B8250)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1D6B1B80)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D6B1DE0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_SENDBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1D6B1CB0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_SENDTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D6B1F10)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_TTL_OFFSET UNITYSDK_OFFSET(0x1D6B24A0)
#define SYSTEM_NET_SOCKETS_SOCKET_SET_USEONLYOVERLAPPEDIO_OFFSET UNITYSDK_OFFSET(0x1D6B16F0)
#define SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1D6BFC90)
#define SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6B70F0)
#define SYSTEM_NET_SOCKETS_SOCKET_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1D6BFBC0)
#define SYSTEM_NET_SOCKETS_SOCKET_SOCKETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1D6B12D0)
#define SYSTEM_NET_SOCKETS_SOCKET_SOCKETOPERATIONTOSOCKETASYNCOPERATION_OFFSET UNITYSDK_OFFSET(0x1D6BFE90)
#define SYSTEM_NET_SOCKETS_SOCKET_SOCKET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D6B11F0)
#define SYSTEM_NET_SOCKETS_SOCKET_SUPPORTSPORTREUSE_OFFSET UNITYSDK_OFFSET(0x1D6BFF50)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFBUFFERNULL_OFFSET UNITYSDK_OFFSET(0x1D6BC640)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFBUFFEROUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1D6BC6A0)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFDISPOSEDANDCLOSED_1_OFFSET UNITYSDK_OFFSET(0x1D6B8370)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFDISPOSEDANDCLOSED_OFFSET UNITYSDK_OFFSET(0x1D6BA9C0)
#define SYSTEM_NET_SOCKETS_SOCKET_THROWIFUDP_OFFSET UNITYSDK_OFFSET(0x1D6B8E00)
#define SYSTEM_NET_SOCKETS_SOCKET_UNSAFEBEGINCONNECT_OFFSET UNITYSDK_OFFSET(0x1D6B7200)
#define SYSTEM_NET_SOCKETS_SOCKET_UNSAFEBEGINMULTIPLESEND_OFFSET UNITYSDK_OFFSET(0x1D6B75B0)
#define SYSTEM_NET_SOCKETS_SOCKET_UNSAFEBEGINRECEIVE_OFFSET UNITYSDK_OFFSET(0x1D6B72E0)
#define SYSTEM_NET_SOCKETS_SOCKET_UNSAFEBEGINSEND_OFFSET UNITYSDK_OFFSET(0x1D6B7210)
#define SYSTEM_NET_SOCKETS_SOCKET_VALIDATEENDIASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x1D6BAA80)
#define SYSTEM_NET_SOCKETS_SOCKET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6C00D0)
#define SYSTEM_NET_SOCKETS_SOCKET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D6B0CA0)
#define SYSTEM_NET_SOCKETS_SOCKET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D6B7AA0)
#define SYSTEM_NET_SOCKETS_SOCKET__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D6B8110)
#define SYSTEM_NET_SOCKETS_SOCKET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B0C10)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket_TypeDefinitionIndex = 3652;

	class Socket : public ::System::Object
	{
	public:
		static ::System::AsyncCallback** StaticGet_ConnectAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x33F0);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginReceiveFromCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x33F8);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginSendGenericCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3400);
		}
		static ::System::AsyncCallback** StaticGet_SendToAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3408);
		}
		static ::System::AsyncCallback** StaticGet_DisconnectAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3410);
		}
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3418);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginConnectCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3420);
		}
		static ::System::AsyncCallback** StaticGet_ReceiveAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3428);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginReceiveCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3430);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginAcceptCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3438);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginAcceptReceiveCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3440);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginReceiveGenericCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3448);
		}
		static ::System::AsyncCallback** StaticGet_AcceptAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3450);
		}
		static ::System::AsyncCallback** StaticGet_SendAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3458);
		}
		static ::System::AsyncCallback** StaticGet_ReceiveFromAsyncCallback()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3460);
		}
		static ::System::IOAsyncCallback** StaticGet_BeginDisconnectCallback()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x3468);
		}
		static ::System::Boolean* StaticGet_s_PerfCountersEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x1360);
		}
		static ::System::Boolean* StaticGet_s_OSSupportsIPv6()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x1361);
		}
		static ::System::Boolean* StaticGet_s_SupportsIPv6()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x1362);
		}
		static ::System::Boolean* StaticGet_s_LoggingEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x1363);
		}
		static ::System::Boolean* StaticGet_s_SupportsIPv4()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x1364);
		}
		static ::System::Boolean* StaticGet_s_Initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Socket_TypeDefinitionIndex)->GetStaticField(0x1365);
		}
		// static const ::System::Int32 DefaultCloseTimeout = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 SOCKET_CLOSED_CODE = 0x2714; // 0x0
		// static const ::System::String* TIMEOUT_EXCEPTION_MSG; // 0x0
		::System::Net::EndPoint* seed_endpoint; // 0x10
		::System::Threading::SemaphoreSlim* WriteSem; // 0x18
		::System::Net::Sockets::SafeSocketHandle* m_Handle; // 0x20
		::System::Threading::SemaphoreSlim* ReadSem; // 0x28
		::System::Net::Sockets::AddressFamily addressFamily; // 0x30
		::System::Int32 linger_timeout; // 0x34
		::System::Net::Sockets::ProtocolType protocolType; // 0x38
		::System::Boolean is_bound; // 0x3C
		::System::Boolean is_closed; // 0x3D
		::System::Boolean is_blocking; // 0x3E
		::System::Boolean is_listening; // 0x3F
		::System::Int32 m_IntCleanedUp; // 0x40
		::System::Boolean is_connected; // 0x44
		::System::Boolean useOverlappedIO; // 0x45
		::System::Boolean connect_in_progress; // 0x46
		::System::Net::Sockets::SocketType socketType; // 0x48

		::System::Void _ctor(::System::Net::Sockets::SocketType socketType, ::System::Net::Sockets::ProtocolType protocolType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET__CTOR_OFFSET))(this, socketType, protocolType);
		}

		::System::Void _ctor_1(::System::Net::Sockets::AddressFamily addressFamily, ::System::Net::Sockets::SocketType socketType, ::System::Net::Sockets::ProtocolType protocolType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET__CTOR_1_OFFSET))(this, addressFamily, socketType, protocolType);
		}

		::System::Void _ctor_2(::System::Net::Sockets::SocketInformation socketInformation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketInformation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET__CTOR_2_OFFSET))(this, socketInformation);
		}

		::System::Void _ctor_3(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto, ::System::Net::Sockets::SafeSocketHandle* safe_handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType, ::System::Net::Sockets::SafeSocketHandle*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET__CTOR_3_OFFSET))(this, family, type, proto, safe_handle);
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

		static ::System::Boolean get_LegacySupportsIPv6()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_LEGACYSUPPORTSIPV6_OFFSET))();
		}

		static ::System::Boolean get_OSSupportsIPv6()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_OSSUPPORTSIPV6_OFFSET))();
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_HANDLE_OFFSET))(this);
		}

		::System::Boolean get_UseOnlyOverlappedIO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_USEONLYOVERLAPPEDIO_OFFSET))(this);
		}

		::System::Void set_UseOnlyOverlappedIO(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_USEONLYOVERLAPPEDIO_OFFSET))(this, value);
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

		::System::Boolean get_ExclusiveAddressUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_EXCLUSIVEADDRESSUSE_OFFSET))(this);
		}

		::System::Void set_ExclusiveAddressUse(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_EXCLUSIVEADDRESSUSE_OFFSET))(this, value);
		}

		::System::Int32 get_ReceiveBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_RECEIVEBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_ReceiveBufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVEBUFFERSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_SendBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_SENDBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_SendBufferSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_SENDBUFFERSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_ReceiveTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_RECEIVETIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReceiveTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_RECEIVETIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_SendTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_SENDTIMEOUT_OFFSET))(this);
		}

		::System::Void set_SendTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_SENDTIMEOUT_OFFSET))(this, value);
		}

		::System::Net::Sockets::LingerOption* get_LingerState()
		{
			return ((::System::Net::Sockets::LingerOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_LINGERSTATE_OFFSET))(this);
		}

		::System::Void set_LingerState(::System::Net::Sockets::LingerOption* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::LingerOption*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_LINGERSTATE_OFFSET))(this, value);
		}

		::System::Int16 get_Ttl()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_TTL_OFFSET))(this);
		}

		::System::Void set_Ttl(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_TTL_OFFSET))(this, value);
		}

		::System::Boolean get_DontFragment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_DONTFRAGMENT_OFFSET))(this);
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

		::System::Boolean CanTryAddressFamily(::System::Net::Sockets::AddressFamily family)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::AddressFamily))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CANTRYADDRESSFAMILY_OFFSET))(this, family);
		}

		::System::Void Connect(::Il2CppArray<::System::Net::IPAddress*>* addresses, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECT_OFFSET))(this, addresses, port);
		}

		::System::Int32 Send(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_OFFSET))(this, buffer, size, socketFlags);
		}

		::System::Int32 Send_1(::Il2CppArray<::System::Byte>* buffer, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_1_OFFSET))(this, buffer, socketFlags);
		}

		::System::Int32 Send_2(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_2_OFFSET))(this, buffer);
		}

		::System::Int32 Send_3(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_3_OFFSET))(this, buffers);
		}

		::System::Int32 Send_4(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_4_OFFSET))(this, buffers, socketFlags);
		}

		::System::Void SendFile(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILE_OFFSET))(this, fileName);
		}

		::System::Int32 Send_5(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_5_OFFSET))(this, buffer, offset, size, socketFlags);
		}

		::System::Int32 SendTo(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint* remoteEP)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDTO_OFFSET))(this, buffer, size, socketFlags, remoteEP);
		}

		::System::Int32 SendTo_1(::Il2CppArray<::System::Byte>* buffer, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint* remoteEP)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDTO_1_OFFSET))(this, buffer, socketFlags, remoteEP);
		}

		::System::Int32 SendTo_2(::Il2CppArray<::System::Byte>* buffer, ::System::Net::EndPoint* remoteEP)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDTO_2_OFFSET))(this, buffer, remoteEP);
		}

		::System::Int32 Receive(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_OFFSET))(this, buffer, size, socketFlags);
		}

		::System::Int32 Receive_1(::Il2CppArray<::System::Byte>* buffer, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_1_OFFSET))(this, buffer, socketFlags);
		}

		::System::Int32 Receive_2(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_2_OFFSET))(this, buffer);
		}

		::System::Int32 Receive_3(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_3_OFFSET))(this, buffer, offset, size, socketFlags);
		}

		::System::Int32 Receive_4(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_4_OFFSET))(this, buffers);
		}

		::System::Int32 Receive_5(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_5_OFFSET))(this, buffers, socketFlags);
		}

		::System::Int32 ReceiveFrom(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint*& remoteEP)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_OFFSET))(this, buffer, size, socketFlags, remoteEP);
		}

		::System::Int32 ReceiveFrom_1(::Il2CppArray<::System::Byte>* buffer, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint*& remoteEP)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_1_OFFSET))(this, buffer, socketFlags, remoteEP);
		}

		::System::Int32 ReceiveFrom_2(::Il2CppArray<::System::Byte>* buffer, ::System::Net::EndPoint*& remoteEP)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Net::EndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_2_OFFSET))(this, buffer, remoteEP);
		}

		::System::Int32 IOControl(::System::Net::Sockets::IOControlCode ioControlCode, ::Il2CppArray<::System::Byte>* optionInValue, ::Il2CppArray<::System::Byte>* optionOutValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::Sockets::IOControlCode, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_IOCONTROL_OFFSET))(this, ioControlCode, optionInValue, optionOutValue);
		}

		::System::Void SetIPProtectionLevel(::System::Net::Sockets::IPProtectionLevel level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::IPProtectionLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETIPPROTECTIONLEVEL_OFFSET))(this, level);
		}

		::System::IAsyncResult* BeginSendFile(::System::String* fileName, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDFILE_OFFSET))(this, fileName, callback, state);
		}

		::System::IAsyncResult* BeginConnect(::System::Net::IPAddress* address, ::System::Int32 port, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_OFFSET))(this, address, port, requestCallback, state);
		}

		::System::IAsyncResult* BeginSend(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_OFFSET))(this, buffer, offset, size, socketFlags, callback, state);
		}

		::System::IAsyncResult* BeginSend_1(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_1_OFFSET))(this, buffers, socketFlags, callback, state);
		}

		::System::Int32 EndSend(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDSEND_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginReceive(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_OFFSET))(this, buffer, offset, size, socketFlags, callback, state);
		}

		::System::IAsyncResult* BeginReceive_1(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_1_OFFSET))(this, buffers, socketFlags, callback, state);
		}

		::System::Int32 EndReceive(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVE_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginAccept(::System::Int32 receiveSize, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINACCEPT_OFFSET))(this, receiveSize, callback, state);
		}

		::System::Net::Sockets::Socket* EndAccept(::Il2CppArray<::System::Byte>*& buffer, ::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_OFFSET))(this, buffer, asyncResult);
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

		static ::System::Boolean ConnectAsync(::System::Net::Sockets::SocketType socketType, ::System::Net::Sockets::ProtocolType protocolType, ::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Boolean(*)(::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECTASYNC_OFFSET))(socketType, protocolType, e);
		}

		::System::Void InternalShutdown(::System::Net::Sockets::SocketShutdown how)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketShutdown))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_INTERNALSHUTDOWN_OFFSET))(this, how);
		}

		::System::IAsyncResult* UnsafeBeginConnect(::System::Net::EndPoint* remoteEP, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_UNSAFEBEGINCONNECT_OFFSET))(this, remoteEP, callback, state);
		}

		::System::IAsyncResult* UnsafeBeginSend(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_UNSAFEBEGINSEND_OFFSET))(this, buffer, offset, size, socketFlags, callback, state);
		}

		::System::IAsyncResult* UnsafeBeginReceive(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_UNSAFEBEGINRECEIVE_OFFSET))(this, buffer, offset, size, socketFlags, callback, state);
		}

		::System::IAsyncResult* BeginMultipleSend(::Il2CppArray<::System::Net::BufferOffsetSize*>* buffers, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Net::BufferOffsetSize*>*, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINMULTIPLESEND_OFFSET))(this, buffers, socketFlags, callback, state);
		}

		::System::IAsyncResult* UnsafeBeginMultipleSend(::Il2CppArray<::System::Net::BufferOffsetSize*>* buffers, ::System::Net::Sockets::SocketFlags socketFlags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Net::BufferOffsetSize*>*, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_UNSAFEBEGINMULTIPLESEND_OFFSET))(this, buffers, socketFlags, callback, state);
		}

		::System::Int32 EndMultipleSend(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDMULTIPLESEND_OFFSET))(this, asyncResult);
		}

		::System::Void MultipleSend(::Il2CppArray<::System::Net::BufferOffsetSize*>* buffers, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::BufferOffsetSize*>*, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_MULTIPLESEND_OFFSET))(this, buffers, socketFlags);
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

		::System::Boolean get_EnableBroadcast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_ENABLEBROADCAST_OFFSET))(this);
		}

		::System::Void set_EnableBroadcast(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_ENABLEBROADCAST_OFFSET))(this, value);
		}

		::System::Boolean get_IsBound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_ISBOUND_OFFSET))(this);
		}

		::System::Boolean get_MulticastLoopback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_MULTICASTLOOPBACK_OFFSET))(this);
		}

		::System::Void set_MulticastLoopback(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_MULTICASTLOOPBACK_OFFSET))(this, value);
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

		::System::Void set_Connected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SET_CONNECTED_OFFSET))(this, value);
		}

		::System::Boolean get_NoDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GET_NODELAY_OFFSET))(this);
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

		static ::System::Void Select(::System::Collections::IList* checkRead, ::System::Collections::IList* checkWrite, ::System::Collections::IList* checkError, ::System::Int32 microSeconds)
		{
			return ((::System::Void(*)(::System::Collections::IList*, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SELECT_OFFSET))(checkRead, checkWrite, checkError, microSeconds);
		}

		static ::System::Void AddSockets(::System::Collections::Generic::List_1<::System::Net::Sockets::Socket*>* sockets, ::System::Collections::IList* list, ::System::String* name)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Net::Sockets::Socket*>*, ::System::Collections::IList*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ADDSOCKETS_OFFSET))(sockets, list, name);
		}

		static ::System::Void Select_internal(::Il2CppArray<::System::Net::Sockets::Socket*>*& sockets, ::System::Int32 microSeconds, ::System::Int32& error)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Net::Sockets::Socket*>*&, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SELECT_INTERNAL_OFFSET))(sockets, microSeconds, error);
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

		::System::IAsyncResult* BeginAccept_1(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINACCEPT_1_OFFSET))(this, callback, state);
		}

		::System::IAsyncResult* BeginAccept_2(::System::Net::Sockets::Socket* acceptSocket, ::System::Int32 receiveSize, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINACCEPT_2_OFFSET))(this, acceptSocket, receiveSize, callback, state);
		}

		::System::Net::Sockets::Socket* EndAccept_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_1_OFFSET))(this, asyncResult);
		}

		::System::Net::Sockets::Socket* EndAccept_2(::Il2CppArray<::System::Byte>*& buffer, ::System::Int32& bytesTransferred, ::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDACCEPT_2_OFFSET))(this, buffer, bytesTransferred, asyncResult);
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

		::System::Void Connect_1(::System::Net::IPAddress* address, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECT_1_OFFSET))(this, address, port);
		}

		::System::Void Connect_2(::System::String* host, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECT_2_OFFSET))(this, host, port);
		}

		::System::Void Connect_3(::System::Net::EndPoint* remoteEP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECT_3_OFFSET))(this, remoteEP);
		}

		::System::Boolean ConnectAsync_1(::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CONNECTASYNC_1_OFFSET))(this, e);
		}

		static ::System::Void CancelConnectAsync(::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_CANCELCONNECTASYNC_OFFSET))(e);
		}

		::System::IAsyncResult* BeginConnect_1(::System::String* host, ::System::Int32 port, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_1_OFFSET))(this, host, port, requestCallback, state);
		}

		::System::IAsyncResult* BeginConnect_2(::System::Net::EndPoint* remoteEP, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_2_OFFSET))(this, remoteEP, callback, state);
		}

		::System::IAsyncResult* BeginConnect_3(::Il2CppArray<::System::Net::IPAddress*>* addresses, ::System::Int32 port, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINCONNECT_3_OFFSET))(this, addresses, port, requestCallback, state);
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

		::System::Boolean GetCheckedIPs(::System::Net::Sockets::SocketAsyncEventArgs* e, ::Il2CppArray<::System::Net::IPAddress*>*& addresses)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*, ::Il2CppArray<::System::Net::IPAddress*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETCHECKEDIPS_OFFSET))(this, e, addresses);
		}

		::System::Void Disconnect(::System::Boolean reuseSocket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DISCONNECT_OFFSET))(this, reuseSocket);
		}

		::System::Boolean DisconnectAsync(::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DISCONNECTASYNC_OFFSET))(this, e);
		}

		::System::IAsyncResult* BeginDisconnect(::System::Boolean reuseSocket, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINDISCONNECT_OFFSET))(this, reuseSocket, callback, state);
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

		::System::Int32 Receive_6(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_6_OFFSET))(this, buffer, offset, size, socketFlags, errorCode);
		}

		::System::Int32 Receive_7(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVE_7_OFFSET))(this, buffers, socketFlags, errorCode);
		}

		::System::Boolean ReceiveAsync(::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEASYNC_OFFSET))(this, e);
		}

		::System::IAsyncResult* BeginReceive_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_2_OFFSET))(this, buffer, offset, size, socketFlags, errorCode, callback, state);
		}

		::System::IAsyncResult* BeginReceive_3(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVE_3_OFFSET))(this, buffers, socketFlags, errorCode, callback, state);
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

		::System::Int32 ReceiveFrom_3(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint*& remoteEP)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_3_OFFSET))(this, buffer, offset, size, socketFlags, remoteEP);
		}

		::System::Int32 ReceiveFrom_4(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint*& remoteEP, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*&, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROM_4_OFFSET))(this, buffer, offset, size, socketFlags, remoteEP, errorCode);
		}

		::System::Boolean ReceiveFromAsync(::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEFROMASYNC_OFFSET))(this, e);
		}

		::System::IAsyncResult* BeginReceiveFrom(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint*& remoteEP, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVEFROM_OFFSET))(this, buffer, offset, size, socketFlags, remoteEP, callback, state);
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

		::System::Int32 ReceiveMessageFrom(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags& socketFlags, ::System::Net::EndPoint*& remoteEP, ::System::Net::Sockets::IPPacketInformation& ipPacketInformation)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags&, ::System::Net::EndPoint*&, ::System::Net::Sockets::IPPacketInformation&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEMESSAGEFROM_OFFSET))(this, buffer, offset, size, socketFlags, remoteEP, ipPacketInformation);
		}

		::System::Boolean ReceiveMessageFromAsync(::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_RECEIVEMESSAGEFROMASYNC_OFFSET))(this, e);
		}

		::System::IAsyncResult* BeginReceiveMessageFrom(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint*& remoteEP, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINRECEIVEMESSAGEFROM_OFFSET))(this, buffer, offset, size, socketFlags, remoteEP, callback, state);
		}

		::System::Int32 EndReceiveMessageFrom(::System::IAsyncResult* asyncResult, ::System::Net::Sockets::SocketFlags& socketFlags, ::System::Net::EndPoint*& endPoint, ::System::Net::Sockets::IPPacketInformation& ipPacketInformation)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*, ::System::Net::Sockets::SocketFlags&, ::System::Net::EndPoint*&, ::System::Net::Sockets::IPPacketInformation&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDRECEIVEMESSAGEFROM_OFFSET))(this, asyncResult, socketFlags, endPoint, ipPacketInformation);
		}

		::System::Int32 Send_6(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_6_OFFSET))(this, buffer, offset, size, socketFlags, errorCode);
		}

		::System::Int32 Send_7(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SEND_7_OFFSET))(this, buffers, socketFlags, errorCode);
		}

		::System::Boolean SendAsync(::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDASYNC_OFFSET))(this, e);
		}

		::System::IAsyncResult* BeginSend_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_2_OFFSET))(this, buffer, offset, size, socketFlags, errorCode, callback, state);
		}

		static ::System::Void BeginSendCallback(::System::Net::Sockets::SocketAsyncResult* sockares, ::System::Int32 sent_so_far)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SocketAsyncResult*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDCALLBACK_OFFSET))(sockares, sent_so_far);
		}

		::System::IAsyncResult* BeginSend_3(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::Sockets::SocketError& errorCode, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::Net::Sockets::SocketError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSEND_3_OFFSET))(this, buffers, socketFlags, errorCode, callback, state);
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

		::System::Int32 SendTo_3(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint* remoteEP)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDTO_3_OFFSET))(this, buffer, offset, size, socketFlags, remoteEP);
		}

		::System::Boolean SendToAsync(::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDTOASYNC_OFFSET))(this, e);
		}

		::System::IAsyncResult* BeginSendTo(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint* remoteEP, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDTO_OFFSET))(this, buffer, offset, size, socketFlags, remoteEP, callback, state);
		}

		static ::System::Void BeginSendToCallback(::System::Net::Sockets::SocketAsyncResult* sockares, ::System::Int32 sent_so_far)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SocketAsyncResult*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDTOCALLBACK_OFFSET))(sockares, sent_so_far);
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

		::System::Void SendFile_1(::System::String* fileName, ::Il2CppArray<::System::Byte>* preBuffer, ::Il2CppArray<::System::Byte>* postBuffer, ::System::Net::Sockets::TransmitFileOptions flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Net::Sockets::TransmitFileOptions))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILE_1_OFFSET))(this, fileName, preBuffer, postBuffer, flags);
		}

		::System::IAsyncResult* BeginSendFile_1(::System::String* fileName, ::Il2CppArray<::System::Byte>* preBuffer, ::Il2CppArray<::System::Byte>* postBuffer, ::System::Net::Sockets::TransmitFileOptions flags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Net::Sockets::TransmitFileOptions, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_BEGINSENDFILE_1_OFFSET))(this, fileName, preBuffer, postBuffer, flags, callback, state);
		}

		::System::Void EndSendFile(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_ENDSENDFILE_OFFSET))(this, asyncResult);
		}

		static ::System::Boolean SendFile_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::String* filename, ::Il2CppArray<::System::Byte>* pre_buffer, ::Il2CppArray<::System::Byte>* post_buffer, ::System::Net::Sockets::TransmitFileOptions flags, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Boolean(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Net::Sockets::TransmitFileOptions, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILE_INTERNAL_OFFSET))(safeHandle, filename, pre_buffer, post_buffer, flags, error, blocking);
		}

		static ::System::Boolean SendFile_internal_1(::System::IntPtr sock, ::System::String* filename, ::Il2CppArray<::System::Byte>* pre_buffer, ::Il2CppArray<::System::Byte>* post_buffer, ::System::Net::Sockets::TransmitFileOptions flags, ::System::Int32& error, ::System::Boolean blocking)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Net::Sockets::TransmitFileOptions, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDFILE_INTERNAL_1_OFFSET))(sock, filename, pre_buffer, post_buffer, flags, error, blocking);
		}

		::System::Boolean SendPacketsAsync(::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SENDPACKETSASYNC_OFFSET))(this, e);
		}

		static ::System::Boolean Duplicate_internal(::System::IntPtr handle, ::System::Int32 targetProcessId, ::System::IntPtr& duplicateHandle, ::System::IO::MonoIOError& error)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr&, ::System::IO::MonoIOError&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DUPLICATE_INTERNAL_OFFSET))(handle, targetProcessId, duplicateHandle, error);
		}

		::System::Net::Sockets::SocketInformation DuplicateAndClose(::System::Int32 targetProcessId)
		{
			return ((::System::Net::Sockets::SocketInformation(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_DUPLICATEANDCLOSE_OFFSET))(this, targetProcessId);
		}

		::System::Void GetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, ::Il2CppArray<::System::Byte>* optionValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OFFSET))(this, optionLevel, optionName, optionValue);
		}

		::Il2CppArray<::System::Byte>* GetSocketOption_1(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, ::System::Int32 optionLength)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_1_OFFSET))(this, optionLevel, optionName, optionLength);
		}

		::System::Object* GetSocketOption_2(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_2_OFFSET))(this, optionLevel, optionName);
		}

		static ::System::Void GetSocketOption_arr_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ::Il2CppArray<::System::Byte>*& byte_val, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::Il2CppArray<::System::Byte>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_ARR_INTERNAL_OFFSET))(safeHandle, level, name, byte_val, error);
		}

		static ::System::Void GetSocketOption_arr_internal_1(::System::IntPtr socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ::Il2CppArray<::System::Byte>*& byte_val, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::Il2CppArray<::System::Byte>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_ARR_INTERNAL_1_OFFSET))(socket, level, name, byte_val, error);
		}

		static ::System::Void GetSocketOption_obj_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ::System::Object*& obj_val, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_OFFSET))(safeHandle, level, name, obj_val, error);
		}

		static ::System::Void GetSocketOption_obj_internal_1(::System::IntPtr socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ::System::Object*& obj_val, ::System::Int32& error)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_GETSOCKETOPTION_OBJ_INTERNAL_1_OFFSET))(socket, level, name, obj_val, error);
		}

		::System::Void SetSocketOption_1(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, ::Il2CppArray<::System::Byte>* optionValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_1_OFFSET))(this, optionLevel, optionName, optionValue);
		}

		::System::Void SetSocketOption_2(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, ::System::Object* optionValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_2_OFFSET))(this, optionLevel, optionName, optionValue);
		}

		::System::Void SetSocketOption_3(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, ::System::Boolean optionValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_3_OFFSET))(this, optionLevel, optionName, optionValue);
		}

		::System::Void SetSocketOption_4(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, ::System::Int32 optionValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SETSOCKETOPTION_4_OFFSET))(this, optionLevel, optionName, optionValue);
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

		::System::Void ThrowIfDisposedAndClosed(::System::Net::Sockets::Socket* socket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_THROWIFDISPOSEDANDCLOSED_OFFSET))(this, socket);
		}

		::System::Void ThrowIfDisposedAndClosed_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_THROWIFDISPOSEDANDCLOSED_1_OFFSET))(this);
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

		static ::System::Boolean SupportsPortReuse(::System::Net::Sockets::ProtocolType proto)
		{
			return ((::System::Boolean(*)(::System::Net::Sockets::ProtocolType))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET_SUPPORTSPORTREUSE_OFFSET))(proto);
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
