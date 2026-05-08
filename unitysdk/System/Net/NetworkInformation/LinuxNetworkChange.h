#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/LinuxNetworkChange_EventType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::NetworkInformation { class NetworkAddressChangedEventHandler; }
namespace System::Net::NetworkInformation { class NetworkAvailabilityChangedEventHandler; }
namespace System::Net::Sockets { class Socket; }
namespace System::Net::Sockets { class SocketAsyncEventArgs; }
namespace System::Threading { class Timer; }

#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ADD_NETWORKADDRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x19AFAAF0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ADD_NETWORKAVAILABILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x19AFAD20)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_CLOSENLSOCKET_OFFSET UNITYSDK_OFFSET(0x19AFB490)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_CREATENLSOCKET_OFFSET UNITYSDK_OFFSET(0x19AFB2F0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AFAF70)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ENSURESOCKET_OFFSET UNITYSDK_OFFSET(0x19AFAF80)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_GETAVAILABILITY_OFFSET UNITYSDK_OFFSET(0x19AFB510)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_GET_HASREGISTEREDEVENTS_OFFSET UNITYSDK_OFFSET(0x19AFAF50)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_MAYBECLOSESOCKET_OFFSET UNITYSDK_OFFSET(0x19AFB370)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ONADDRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x19AFB660)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ONAVAILABILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x19AFB5B0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ONDATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x19AFB9D0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ONEVENTDUE_OFFSET UNITYSDK_OFFSET(0x19AFB6D0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x19AFB870)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_READEVENTS_OFFSET UNITYSDK_OFFSET(0x19AFBAE0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_REGISTER_1_OFFSET UNITYSDK_OFFSET(0x19AFADA0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_REGISTER_OFFSET UNITYSDK_OFFSET(0x19AFAB70)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_REMOVE_NETWORKADDRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x19AFABF0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_REMOVE_NETWORKAVAILABILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x19AFAE20)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_UNREGISTER_1_OFFSET UNITYSDK_OFFSET(0x19AFAE30)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x19AFAC00)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFBB80)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int LinuxNetworkChange_TypeDefinitionIndex = 3806;

	class LinuxNetworkChange : public ::System::Object
	{
	public:
		// static const ::System::String* LIBNAME; // 0x0
		::System::Net::Sockets::SocketAsyncEventArgs* nl_args; // 0x10
		::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* AvailabilityChanged; // 0x18
		::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* AddressChanged; // 0x20
		::System::Threading::Timer* timer; // 0x28
		::System::Object* _lock; // 0x30
		::System::Net::Sockets::Socket* nl_sock; // 0x38
		::System::Net::NetworkInformation::LinuxNetworkChange_EventType pending_events; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE__CTOR_OFFSET))(this);
		}

		::System::Void add_NetworkAddressChanged(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAddressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ADD_NETWORKADDRESSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_NetworkAddressChanged(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAddressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_REMOVE_NETWORKADDRESSCHANGED_OFFSET))(this, value);
		}

		::System::Void add_NetworkAvailabilityChanged(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ADD_NETWORKAVAILABILITYCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_NetworkAvailabilityChanged(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_REMOVE_NETWORKAVAILABILITYCHANGED_OFFSET))(this, value);
		}

		::System::Boolean get_HasRegisteredEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_GET_HASREGISTEREDEVENTS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean EnsureSocket()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ENSURESOCKET_OFFSET))(this);
		}

		::System::Void MaybeCloseSocket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_MAYBECLOSESOCKET_OFFSET))(this);
		}

		::System::Boolean GetAvailability()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_GETAVAILABILITY_OFFSET))(this);
		}

		::System::Void OnAvailabilityChanged(::System::Object* unused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ONAVAILABILITYCHANGED_OFFSET))(this, unused);
		}

		::System::Void OnAddressChanged(::System::Object* unused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ONADDRESSCHANGED_OFFSET))(this, unused);
		}

		::System::Void OnEventDue(::System::Object* unused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ONEVENTDUE_OFFSET))(this, unused);
		}

		::System::Void QueueEvent(::System::Net::NetworkInformation::LinuxNetworkChange_EventType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::LinuxNetworkChange_EventType))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_QUEUEEVENT_OFFSET))(this, type);
		}

		::System::Void OnDataAvailable(::System::Object* sender, ::System::Net::Sockets::SocketAsyncEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_ONDATAAVAILABLE_OFFSET))(this, sender, args);
		}

		::System::Void Register(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAddressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_REGISTER_OFFSET))(this, d);
		}

		::System::Void Register_1(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_REGISTER_1_OFFSET))(this, d);
		}

		::System::Void Unregister(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAddressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_UNREGISTER_OFFSET))(this, d);
		}

		::System::Void Unregister_1(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_UNREGISTER_1_OFFSET))(this, d);
		}

		static ::System::IntPtr CreateNLSocket()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_CREATENLSOCKET_OFFSET))();
		}

		static ::System::Net::NetworkInformation::LinuxNetworkChange_EventType ReadEvents(::System::IntPtr sock, ::System::IntPtr buffer, ::System::Int32 count, ::System::Int32 size)
		{
			return ((::System::Net::NetworkInformation::LinuxNetworkChange_EventType(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_READEVENTS_OFFSET))(sock, buffer, count, size);
		}

		static ::System::IntPtr CloseNLSocket(::System::IntPtr sock)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKCHANGE_CLOSENLSOCKET_OFFSET))(sock);
		}
	};
}
