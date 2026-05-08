#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Net/Sockets/UdpReceiveResult.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_SOCKETS_UDPCLIENT_ALLOWNATTRAVERSAL_OFFSET UNITYSDK_OFFSET(0x1AAA2320)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_BEGINRECEIVE_OFFSET UNITYSDK_OFFSET(0x1AAA3C50)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_BEGINSEND_1_OFFSET UNITYSDK_OFFSET(0x1AAA3670)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_BEGINSEND_2_OFFSET UNITYSDK_OFFSET(0x1AAA3920)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_BEGINSEND_OFFSET UNITYSDK_OFFSET(0x1AAA3330)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CHECKFORBROADCAST_OFFSET UNITYSDK_OFFSET(0x1AAA2A20)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AAA2460)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CONNECT_1_OFFSET UNITYSDK_OFFSET(0x1AAA2880)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CONNECT_2_OFFSET UNITYSDK_OFFSET(0x1AAA26C0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CONNECT_OFFSET UNITYSDK_OFFSET(0x1AAA1580)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_CREATECLIENTSOCKET_OFFSET UNITYSDK_OFFSET(0x1AAA1140)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AAA2540)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AAA2520)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_DROPMULTICASTGROUP_1_OFFSET UNITYSDK_OFFSET(0x1AAA4880)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_DROPMULTICASTGROUP_OFFSET UNITYSDK_OFFSET(0x1AAA45C0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_ENDRECEIVE_OFFSET UNITYSDK_OFFSET(0x1AAA3D70)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_ENDSEND_OFFSET UNITYSDK_OFFSET(0x1AAA3950)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_FREERESOURCES_OFFSET UNITYSDK_OFFSET(0x1AAA2480)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1AAA1FA0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1AAA1FC0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_GET_CLIENT_OFFSET UNITYSDK_OFFSET(0x1AAA1F80)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_GET_DONTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1AAA2020)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_GET_ENABLEBROADCAST_OFFSET UNITYSDK_OFFSET(0x1AAA2110)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_GET_EXCLUSIVEADDRESSUSE_OFFSET UNITYSDK_OFFSET(0x1AAA21D0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_GET_MULTICASTLOOPBACK_OFFSET UNITYSDK_OFFSET(0x1AAA20D0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_GET_TTL_OFFSET UNITYSDK_OFFSET(0x1AAA1FE0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_JOINMULTICASTGROUP_1_OFFSET UNITYSDK_OFFSET(0x1AAA41E0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_JOINMULTICASTGROUP_2_OFFSET UNITYSDK_OFFSET(0x1AAA42E0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_JOINMULTICASTGROUP_3_OFFSET UNITYSDK_OFFSET(0x1AAA4460)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_JOINMULTICASTGROUP_OFFSET UNITYSDK_OFFSET(0x1AAA3F20)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_RECEIVEASYNC_OFFSET UNITYSDK_OFFSET(0x1AAA4DA0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_RECEIVE_OFFSET UNITYSDK_OFFSET(0x1AAA3A80)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SENDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1AAA4B30)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SENDASYNC_2_OFFSET UNITYSDK_OFFSET(0x1AAA4C70)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x1AAA4A00)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SEND_1_OFFSET UNITYSDK_OFFSET(0x1AAA2DC0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SEND_2_OFFSET UNITYSDK_OFFSET(0x1AAA3190)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SEND_OFFSET UNITYSDK_OFFSET(0x1AAA2B00)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1AAA1FB0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SET_CLIENT_OFFSET UNITYSDK_OFFSET(0x1AAA1F90)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SET_DONTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1AAA2040)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SET_ENABLEBROADCAST_OFFSET UNITYSDK_OFFSET(0x1AAA2130)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SET_EXCLUSIVEADDRESSUSE_OFFSET UNITYSDK_OFFSET(0x1AAA2290)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SET_MULTICASTLOOPBACK_OFFSET UNITYSDK_OFFSET(0x1AAA20F0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT_SET_TTL_OFFSET UNITYSDK_OFFSET(0x1AAA2000)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AAA1020)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AAA11A0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AAA11B0)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AAA1390)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1AAA1490)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAA0F80)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__RECEIVEASYNC_B__64_0_OFFSET UNITYSDK_OFFSET(0x1AAA4E80)
#define SYSTEM_NET_SOCKETS_UDPCLIENT__RECEIVEASYNC_B__64_1_OFFSET UNITYSDK_OFFSET(0x1AAA4E90)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int UdpClient_TypeDefinitionIndex = 3676;

	class UdpClient : public ::System::Object
	{
	public:
		// static const ::System::Int32 MaxUDPSize = 0x10000; // 0x0
		::System::Net::Sockets::Socket* m_ClientSocket; // 0x10
		::Il2CppArray<::System::Byte>* m_Buffer; // 0x18
		::System::Net::Sockets::AddressFamily m_Family; // 0x20
		::System::Boolean m_IsBroadcast; // 0x24
		::System::Boolean m_CleanedUp; // 0x25
		::System::Boolean m_Active; // 0x26

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Sockets::AddressFamily family)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_1_OFFSET))(this, family);
		}

		::System::Void _ctor_2(::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_2_OFFSET))(this, port);
		}

		::System::Void _ctor_3(::System::Int32 port, ::System::Net::Sockets::AddressFamily family)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::Sockets::AddressFamily))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_3_OFFSET))(this, port, family);
		}

		::System::Void _ctor_4(::System::Net::IPEndPoint* localEP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_4_OFFSET))(this, localEP);
		}

		::System::Void _ctor_5(::System::String* hostname, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__CTOR_5_OFFSET))(this, hostname, port);
		}

		::System::Net::Sockets::Socket* get_Client()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_GET_CLIENT_OFFSET))(this);
		}

		::System::Void set_Client(::System::Net::Sockets::Socket* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SET_CLIENT_OFFSET))(this, value);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_Active(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SET_ACTIVE_OFFSET))(this, value);
		}

		::System::Int32 get_Available()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Int16 get_Ttl()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_GET_TTL_OFFSET))(this);
		}

		::System::Void set_Ttl(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SET_TTL_OFFSET))(this, value);
		}

		::System::Boolean get_DontFragment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_GET_DONTFRAGMENT_OFFSET))(this);
		}

		::System::Void set_DontFragment(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SET_DONTFRAGMENT_OFFSET))(this, value);
		}

		::System::Boolean get_MulticastLoopback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_GET_MULTICASTLOOPBACK_OFFSET))(this);
		}

		::System::Void set_MulticastLoopback(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SET_MULTICASTLOOPBACK_OFFSET))(this, value);
		}

		::System::Boolean get_EnableBroadcast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_GET_ENABLEBROADCAST_OFFSET))(this);
		}

		::System::Void set_EnableBroadcast(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SET_ENABLEBROADCAST_OFFSET))(this, value);
		}

		::System::Boolean get_ExclusiveAddressUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_GET_EXCLUSIVEADDRESSUSE_OFFSET))(this);
		}

		::System::Void set_ExclusiveAddressUse(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SET_EXCLUSIVEADDRESSUSE_OFFSET))(this, value);
		}

		::System::Void AllowNatTraversal(::System::Boolean allowed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_ALLOWNATTRAVERSAL_OFFSET))(this, allowed);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CLOSE_OFFSET))(this);
		}

		::System::Void FreeResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_FREERESOURCES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Connect(::System::String* hostname, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CONNECT_OFFSET))(this, hostname, port);
		}

		::System::Void Connect_1(::System::Net::IPAddress* addr, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CONNECT_1_OFFSET))(this, addr, port);
		}

		::System::Void Connect_2(::System::Net::IPEndPoint* endPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CONNECT_2_OFFSET))(this, endPoint);
		}

		::System::Void CheckForBroadcast(::System::Net::IPAddress* ipAddress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CHECKFORBROADCAST_OFFSET))(this, ipAddress);
		}

		::System::Int32 Send(::Il2CppArray<::System::Byte>* dgram, ::System::Int32 bytes, ::System::Net::IPEndPoint* endPoint)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SEND_OFFSET))(this, dgram, bytes, endPoint);
		}

		::System::Int32 Send_1(::Il2CppArray<::System::Byte>* dgram, ::System::Int32 bytes, ::System::String* hostname, ::System::Int32 port)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SEND_1_OFFSET))(this, dgram, bytes, hostname, port);
		}

		::System::Int32 Send_2(::Il2CppArray<::System::Byte>* dgram, ::System::Int32 bytes)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SEND_2_OFFSET))(this, dgram, bytes);
		}

		::System::IAsyncResult* BeginSend(::Il2CppArray<::System::Byte>* datagram, ::System::Int32 bytes, ::System::Net::IPEndPoint* endPoint, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Net::IPEndPoint*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_BEGINSEND_OFFSET))(this, datagram, bytes, endPoint, requestCallback, state);
		}

		::System::IAsyncResult* BeginSend_1(::Il2CppArray<::System::Byte>* datagram, ::System::Int32 bytes, ::System::String* hostname, ::System::Int32 port, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_BEGINSEND_1_OFFSET))(this, datagram, bytes, hostname, port, requestCallback, state);
		}

		::System::IAsyncResult* BeginSend_2(::Il2CppArray<::System::Byte>* datagram, ::System::Int32 bytes, ::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_BEGINSEND_2_OFFSET))(this, datagram, bytes, requestCallback, state);
		}

		::System::Int32 EndSend(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_ENDSEND_OFFSET))(this, asyncResult);
		}

		::Il2CppArray<::System::Byte>* Receive(::System::Net::IPEndPoint*& remoteEP)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Net::IPEndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_RECEIVE_OFFSET))(this, remoteEP);
		}

		::System::IAsyncResult* BeginReceive(::System::AsyncCallback* requestCallback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_BEGINRECEIVE_OFFSET))(this, requestCallback, state);
		}

		::Il2CppArray<::System::Byte>* EndReceive(::System::IAsyncResult* asyncResult, ::System::Net::IPEndPoint*& remoteEP)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::IAsyncResult*, ::System::Net::IPEndPoint*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_ENDRECEIVE_OFFSET))(this, asyncResult, remoteEP);
		}

		::System::Void JoinMulticastGroup(::System::Net::IPAddress* multicastAddr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_JOINMULTICASTGROUP_OFFSET))(this, multicastAddr);
		}

		::System::Void JoinMulticastGroup_1(::System::Net::IPAddress* multicastAddr, ::System::Net::IPAddress* localAddress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_JOINMULTICASTGROUP_1_OFFSET))(this, multicastAddr, localAddress);
		}

		::System::Void JoinMulticastGroup_2(::System::Int32 ifindex, ::System::Net::IPAddress* multicastAddr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_JOINMULTICASTGROUP_2_OFFSET))(this, ifindex, multicastAddr);
		}

		::System::Void JoinMulticastGroup_3(::System::Net::IPAddress* multicastAddr, ::System::Int32 timeToLive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_JOINMULTICASTGROUP_3_OFFSET))(this, multicastAddr, timeToLive);
		}

		::System::Void DropMulticastGroup(::System::Net::IPAddress* multicastAddr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_DROPMULTICASTGROUP_OFFSET))(this, multicastAddr);
		}

		::System::Void DropMulticastGroup_1(::System::Net::IPAddress* multicastAddr, ::System::Int32 ifindex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_DROPMULTICASTGROUP_1_OFFSET))(this, multicastAddr, ifindex);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* SendAsync(::Il2CppArray<::System::Byte>* datagram, ::System::Int32 bytes)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SENDASYNC_OFFSET))(this, datagram, bytes);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* SendAsync_1(::Il2CppArray<::System::Byte>* datagram, ::System::Int32 bytes, ::System::Net::IPEndPoint* endPoint)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SENDASYNC_1_OFFSET))(this, datagram, bytes, endPoint);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* SendAsync_2(::Il2CppArray<::System::Byte>* datagram, ::System::Int32 bytes, ::System::String* hostname, ::System::Int32 port)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_SENDASYNC_2_OFFSET))(this, datagram, bytes, hostname, port);
		}

		::System::Threading::Tasks::Task_1<::System::Net::Sockets::UdpReceiveResult>* ReceiveAsync()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Sockets::UdpReceiveResult>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_RECEIVEASYNC_OFFSET))(this);
		}

		::System::Void createClientSocket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT_CREATECLIENTSOCKET_OFFSET))(this);
		}

		::System::IAsyncResult* _ReceiveAsync_b__64_0(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__RECEIVEASYNC_B__64_0_OFFSET))(this, callback, state);
		}

		::System::Net::Sockets::UdpReceiveResult _ReceiveAsync_b__64_1(::System::IAsyncResult* ar)
		{
			return ((::System::Net::Sockets::UdpReceiveResult(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT__RECEIVEASYNC_B__64_1_OFFSET))(this, ar);
		}
	};
}
