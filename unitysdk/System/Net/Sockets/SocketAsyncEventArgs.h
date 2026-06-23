#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/Net/Sockets/IPPacketInformation.h"
#include "unitysdk/System/Net/Sockets/SocketAsyncOperation.h"
#include "unitysdk/System/Net/Sockets/SocketClientAccessPolicyProtocol.h"
#include "unitysdk/System/Net/Sockets/SocketError.h"
#include "unitysdk/System/Net/Sockets/SocketFlags.h"
#include "unitysdk/System/Net/Sockets/TransmitFileOptions.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class EndPoint; }
namespace System::Net::Sockets { class MultipleConnectAsync; }
namespace System::Net::Sockets { class SendPacketsElement; }
namespace System::Net::Sockets { class Socket; }
namespace System::Net::Sockets { class SocketAsyncResult; }

#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_ADD_COMPLETED_OFFSET UNITYSDK_OFFSET(0x1D45F7D0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1D45FB10)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D45F9C0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D45F9B0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D45F9A0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINISHCONNECTBYNAMESYNCFAILURE_OFFSET UNITYSDK_OFFSET(0x1D45FCC0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINISHOPERATIONASYNCFAILURE_OFFSET UNITYSDK_OFFSET(0x1D45FD10)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINISHWRAPPERCONNECTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1D45FD60)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_ACCEPTSOCKET_OFFSET UNITYSDK_OFFSET(0x1D45F520)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BUFFERLIST_OFFSET UNITYSDK_OFFSET(0x1D45F560)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1D45F540)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BYTESTRANSFERRED_OFFSET UNITYSDK_OFFSET(0x1D45F5F0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_CONNECTBYNAMEERROR_OFFSET UNITYSDK_OFFSET(0x1D45F500)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_CONNECTSOCKET_OFFSET UNITYSDK_OFFSET(0x1D45F790)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D45F610)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_DISCONNECTREUSESOCKET_OFFSET UNITYSDK_OFFSET(0x1D45F630)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_LASTOPERATION_OFFSET UNITYSDK_OFFSET(0x1D45F650)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D45F670)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_POLICYRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1D45F7B0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_RECEIVEMESSAGEFROMPACKETINFO_OFFSET UNITYSDK_OFFSET(0x1D45F6B0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x1D45F690)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SENDPACKETSELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D45F6D0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SENDPACKETSFLAGS_OFFSET UNITYSDK_OFFSET(0x1D45F6F0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SENDPACKETSSENDSIZE_OFFSET UNITYSDK_OFFSET(0x1D45F710)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SOCKETCLIENTACCESSPOLICYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1D45FDB0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SOCKETERROR_OFFSET UNITYSDK_OFFSET(0x1D45F730)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SOCKETFLAGS_OFFSET UNITYSDK_OFFSET(0x1D45F750)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_USERTOKEN_OFFSET UNITYSDK_OFFSET(0x1D45F770)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D45FB30)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_REMOVE_COMPLETED_OFFSET UNITYSDK_OFFSET(0x1D45F850)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1D45FBA0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x1D45FB90)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETLASTOPERATION_OFFSET UNITYSDK_OFFSET(0x1D45FA60)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETRESULTS_OFFSET UNITYSDK_OFFSET(0x1D45FD90)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_ACCEPTSOCKET_OFFSET UNITYSDK_OFFSET(0x1D45F530)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_BUFFERLIST_OFFSET UNITYSDK_OFFSET(0x1D45F570)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1D45F550)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_BYTESTRANSFERRED_OFFSET UNITYSDK_OFFSET(0x1D45F600)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_CONNECTBYNAMEERROR_OFFSET UNITYSDK_OFFSET(0x1D45F510)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D45F620)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_DISCONNECTREUSESOCKET_OFFSET UNITYSDK_OFFSET(0x1D45F640)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_LASTOPERATION_OFFSET UNITYSDK_OFFSET(0x1D45F660)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D45F680)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_POLICYRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1D45F7C0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_RECEIVEMESSAGEFROMPACKETINFO_OFFSET UNITYSDK_OFFSET(0x1D45F6C0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x1D45F6A0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SENDPACKETSELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D45F6E0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SENDPACKETSFLAGS_OFFSET UNITYSDK_OFFSET(0x1D45F700)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SENDPACKETSSENDSIZE_OFFSET UNITYSDK_OFFSET(0x1D45F720)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETCLIENTACCESSPOLICYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1D45FDF0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETERROR_OFFSET UNITYSDK_OFFSET(0x1D45F740)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETFLAGS_OFFSET UNITYSDK_OFFSET(0x1D45F760)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_USERTOKEN_OFFSET UNITYSDK_OFFSET(0x1D45F780)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_STARTOPERATIONCOMMON_OFFSET UNITYSDK_OFFSET(0x1D45FCA0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_STARTOPERATIONWRAPPERCONNECT_OFFSET UNITYSDK_OFFSET(0x1D45FCB0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D45F940)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D45F8D0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketAsyncEventArgs_TypeDefinitionIndex = 3683;

	class SocketAsyncEventArgs : public ::System::EventArgs
	{
	public:
		::System::Net::Sockets::Socket* _AcceptSocket_k__BackingField; // 0x10
		::System::Net::EndPoint* remote_ep; // 0x18
		::System::Net::Sockets::Socket* current_socket; // 0x20
		::System::Object* _UserToken_k__BackingField; // 0x28
		::Il2CppArray<::System::Byte>* _Buffer_k__BackingField; // 0x30
		::Il2CppArray<::System::Net::Sockets::SendPacketsElement*>* _SendPacketsElements_k__BackingField; // 0x38
		::System::Net::Sockets::IPPacketInformation _ReceiveMessageFromPacketInfo_k__BackingField; // 0x40
		::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* m_BufferList; // 0x50
		::System::Exception* _ConnectByNameError_k__BackingField; // 0x58
		::System::Net::Sockets::SocketAsyncResult* socket_async_result; // 0x60
		::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* Completed; // 0x68
		::System::Net::Sockets::SocketAsyncOperation _LastOperation_k__BackingField; // 0x70
		::System::Int32 in_progress; // 0x74
		::System::Int32 _Offset_k__BackingField; // 0x78
		::System::Boolean disposed; // 0x7C
		::System::Boolean _PolicyRestricted_k__BackingField; // 0x7D
		::System::Boolean _DisconnectReuseSocket_k__BackingField; // 0x7E
		::System::Net::Sockets::SocketFlags _SocketFlags_k__BackingField; // 0x80
		::System::Net::Sockets::TransmitFileOptions _SendPacketsFlags_k__BackingField; // 0x84
		::System::Int32 _Count_k__BackingField; // 0x88
		::System::Net::Sockets::SocketError _SocketError_k__BackingField; // 0x8C
		::System::Int32 _SendPacketsSendSize_k__BackingField; // 0x90
		::System::Int32 _BytesTransferred_k__BackingField; // 0x94

		::System::Void _ctor(::System::Boolean policy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS__CTOR_OFFSET))(this, policy);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::System::Exception* get_ConnectByNameError()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_CONNECTBYNAMEERROR_OFFSET))(this);
		}

		::System::Void set_ConnectByNameError(::System::Exception* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_CONNECTBYNAMEERROR_OFFSET))(this, value);
		}

		::System::Net::Sockets::Socket* get_AcceptSocket()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_ACCEPTSOCKET_OFFSET))(this);
		}

		::System::Void set_AcceptSocket(::System::Net::Sockets::Socket* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_ACCEPTSOCKET_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Buffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BUFFER_OFFSET))(this);
		}

		::System::Void set_Buffer(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_BUFFER_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* get_BufferList()
		{
			return ((::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BUFFERLIST_OFFSET))(this);
		}

		::System::Void set_BufferList(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_BUFFERLIST_OFFSET))(this, value);
		}

		::System::Int32 get_BytesTransferred()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_BYTESTRANSFERRED_OFFSET))(this);
		}

		::System::Void set_BytesTransferred(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_BYTESTRANSFERRED_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_COUNT_OFFSET))(this, value);
		}

		::System::Boolean get_DisconnectReuseSocket()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_DISCONNECTREUSESOCKET_OFFSET))(this);
		}

		::System::Void set_DisconnectReuseSocket(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_DISCONNECTREUSESOCKET_OFFSET))(this, value);
		}

		::System::Net::Sockets::SocketAsyncOperation get_LastOperation()
		{
			return ((::System::Net::Sockets::SocketAsyncOperation(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_LASTOPERATION_OFFSET))(this);
		}

		::System::Void set_LastOperation(::System::Net::Sockets::SocketAsyncOperation value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketAsyncOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_LASTOPERATION_OFFSET))(this, value);
		}

		::System::Int32 get_Offset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_OFFSET_OFFSET))(this, value);
		}

		::System::Net::EndPoint* get_RemoteEndPoint()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_REMOTEENDPOINT_OFFSET))(this);
		}

		::System::Void set_RemoteEndPoint(::System::Net::EndPoint* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_REMOTEENDPOINT_OFFSET))(this, value);
		}

		::System::Net::Sockets::IPPacketInformation get_ReceiveMessageFromPacketInfo()
		{
			return ((::System::Net::Sockets::IPPacketInformation(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_RECEIVEMESSAGEFROMPACKETINFO_OFFSET))(this);
		}

		::System::Void set_ReceiveMessageFromPacketInfo(::System::Net::Sockets::IPPacketInformation value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::IPPacketInformation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_RECEIVEMESSAGEFROMPACKETINFO_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Net::Sockets::SendPacketsElement*>* get_SendPacketsElements()
		{
			return ((::Il2CppArray<::System::Net::Sockets::SendPacketsElement*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SENDPACKETSELEMENTS_OFFSET))(this);
		}

		::System::Void set_SendPacketsElements(::Il2CppArray<::System::Net::Sockets::SendPacketsElement*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::Sockets::SendPacketsElement*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SENDPACKETSELEMENTS_OFFSET))(this, value);
		}

		::System::Net::Sockets::TransmitFileOptions get_SendPacketsFlags()
		{
			return ((::System::Net::Sockets::TransmitFileOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SENDPACKETSFLAGS_OFFSET))(this);
		}

		::System::Void set_SendPacketsFlags(::System::Net::Sockets::TransmitFileOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::TransmitFileOptions))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SENDPACKETSFLAGS_OFFSET))(this, value);
		}

		::System::Int32 get_SendPacketsSendSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SENDPACKETSSENDSIZE_OFFSET))(this);
		}

		::System::Void set_SendPacketsSendSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SENDPACKETSSENDSIZE_OFFSET))(this, value);
		}

		::System::Net::Sockets::SocketError get_SocketError()
		{
			return ((::System::Net::Sockets::SocketError(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SOCKETERROR_OFFSET))(this);
		}

		::System::Void set_SocketError(::System::Net::Sockets::SocketError value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketError))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETERROR_OFFSET))(this, value);
		}

		::System::Net::Sockets::SocketFlags get_SocketFlags()
		{
			return ((::System::Net::Sockets::SocketFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SOCKETFLAGS_OFFSET))(this);
		}

		::System::Void set_SocketFlags(::System::Net::Sockets::SocketFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETFLAGS_OFFSET))(this, value);
		}

		::System::Object* get_UserToken()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_USERTOKEN_OFFSET))(this);
		}

		::System::Void set_UserToken(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_USERTOKEN_OFFSET))(this, value);
		}

		::System::Net::Sockets::Socket* get_ConnectSocket()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_CONNECTSOCKET_OFFSET))(this);
		}

		::System::Boolean get_PolicyRestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_POLICYRESTRICTED_OFFSET))(this);
		}

		::System::Void set_PolicyRestricted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_POLICYRESTRICTED_OFFSET))(this, value);
		}

		::System::Void add_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_ADD_COMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_REMOVE_COMPLETED_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_DISPOSE_1_OFFSET))(this);
		}

		::System::Void SetLastOperation(::System::Net::Sockets::SocketAsyncOperation op)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketAsyncOperation))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETLASTOPERATION_OFFSET))(this, op);
		}

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_COMPLETE_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_ONCOMPLETED_OFFSET))(this, e);
		}

		::System::Void SetBuffer(::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETBUFFER_OFFSET))(this, offset, count);
		}

		::System::Void SetBuffer_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETBUFFER_1_OFFSET))(this, buffer, offset, count);
		}

		::System::Void StartOperationCommon(::System::Net::Sockets::Socket* socket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_STARTOPERATIONCOMMON_OFFSET))(this, socket);
		}

		::System::Void StartOperationWrapperConnect(::System::Net::Sockets::MultipleConnectAsync* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::MultipleConnectAsync*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_STARTOPERATIONWRAPPERCONNECT_OFFSET))(this, args);
		}

		::System::Void FinishConnectByNameSyncFailure(::System::Exception* exception, ::System::Int32 bytesTransferred, ::System::Net::Sockets::SocketFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINISHCONNECTBYNAMESYNCFAILURE_OFFSET))(this, exception, bytesTransferred, flags);
		}

		::System::Void FinishOperationAsyncFailure(::System::Exception* exception, ::System::Int32 bytesTransferred, ::System::Net::Sockets::SocketFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINISHOPERATIONASYNCFAILURE_OFFSET))(this, exception, bytesTransferred, flags);
		}

		::System::Void FinishWrapperConnectSuccess(::System::Net::Sockets::Socket* connectSocket, ::System::Int32 bytesTransferred, ::System::Net::Sockets::SocketFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_FINISHWRAPPERCONNECTSUCCESS_OFFSET))(this, connectSocket, bytesTransferred, flags);
		}

		::System::Void SetResults(::System::Net::Sockets::SocketError socketError, ::System::Int32 bytesTransferred, ::System::Net::Sockets::SocketFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketError, ::System::Int32, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SETRESULTS_OFFSET))(this, socketError, bytesTransferred, flags);
		}

		::System::Net::Sockets::SocketClientAccessPolicyProtocol get_SocketClientAccessPolicyProtocol()
		{
			return ((::System::Net::Sockets::SocketClientAccessPolicyProtocol(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_GET_SOCKETCLIENTACCESSPOLICYPROTOCOL_OFFSET))(this);
		}

		::System::Void set_SocketClientAccessPolicyProtocol(::System::Net::Sockets::SocketClientAccessPolicyProtocol value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketClientAccessPolicyProtocol))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCEVENTARGS_SET_SOCKETCLIENTACCESSPOLICYPROTOCOL_OFFSET))(this, value);
		}
	};
}
