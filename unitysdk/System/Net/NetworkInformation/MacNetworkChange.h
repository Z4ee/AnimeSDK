#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/MacNetworkChange_NetworkReachabilityFlags.h"
#include "unitysdk/System/Net/NetworkInformation/MacNetworkChange_SCNetworkReachabilityContext.h"
#include "unitysdk/System/Net/NetworkInformation/MacNetworkChange_sockaddr_in.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::NetworkInformation { class MacNetworkChange_SCNetworkReachabilityCallback; }
namespace System::Net::NetworkInformation { class NetworkAddressChangedEventHandler; }
namespace System::Net::NetworkInformation { class NetworkAvailabilityChangedEventHandler; }

#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_ADD_NETWORKADDRESSCHANGED_1_OFFSET UNITYSDK_OFFSET(0x1D45D120)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_ADD_NETWORKADDRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D45CF20)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_ADD_NETWORKAVAILABILITYCHANGED_1_OFFSET UNITYSDK_OFFSET(0x1D45D2A0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_ADD_NETWORKAVAILABILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D45D020)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_CFRELEASE_OFFSET UNITYSDK_OFFSET(0x1D45CB20)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_CFRUNLOOPGETMAIN_OFFSET UNITYSDK_OFFSET(0x1D45CBA0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D45DAD0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_DLCLOSE_OFFSET UNITYSDK_OFFSET(0x1D45CAA0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_DLOPEN_OFFSET UNITYSDK_OFFSET(0x1D45C960)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_DLSYM_OFFSET UNITYSDK_OFFSET(0x1D45CA00)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_GET_HASREGISTEREDEVENTS_OFFSET UNITYSDK_OFFSET(0x1D45D470)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1D45D3E0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_HANDLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D45C790)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_LOADRUNLOOPMODE_OFFSET UNITYSDK_OFFSET(0x1D45D7F0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_REMOVE_NETWORKADDRESSCHANGED_1_OFFSET UNITYSDK_OFFSET(0x1D45D220)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_REMOVE_NETWORKADDRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D45CFA0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_REMOVE_NETWORKAVAILABILITYCHANGED_1_OFFSET UNITYSDK_OFFSET(0x1D45D3F0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_REMOVE_NETWORKAVAILABILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D45D0A0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYCREATEWITHADDRESS_OFFSET UNITYSDK_OFFSET(0x1D45CC20)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYGETFLAGS_OFFSET UNITYSDK_OFFSET(0x1D45CCB0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYSCHEDULEWITHRUNLOOP_OFFSET UNITYSDK_OFFSET(0x1D45CDE0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYSETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D45CD40)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYUNSCHEDULEFROMRUNLOOP_OFFSET UNITYSDK_OFFSET(0x1D45CE80)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D45D490)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MacNetworkChange_TypeDefinitionIndex = 3800;

	class MacNetworkChange : public ::System::Object
	{
	public:
		// static const ::System::String* DL_LIB; // 0x0
		// static const ::System::String* CORE_SERVICES_LIB; // 0x0
		// static const ::System::String* CORE_FOUNDATION_LIB; // 0x0
		::System::Net::NetworkInformation::MacNetworkChange_SCNetworkReachabilityCallback* callback; // 0x10
		::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* networkAvailabilityChanged; // 0x18
		::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* networkAddressChanged; // 0x20
		::System::IntPtr runLoopMode; // 0x28
		::System::Boolean scheduledWithRunLoop; // 0x30
		::System::Net::NetworkInformation::MacNetworkChange_NetworkReachabilityFlags flags; // 0x34
		::System::IntPtr handle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr dlopen(::System::String* path, ::System::Int32 mode)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_DLOPEN_OFFSET))(path, mode);
		}

		static ::System::IntPtr dlsym(::System::IntPtr handle, ::System::String* symbol)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_DLSYM_OFFSET))(handle, symbol);
		}

		static ::System::Int32 dlclose(::System::IntPtr handle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_DLCLOSE_OFFSET))(handle);
		}

		static ::System::Void CFRelease(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_CFRELEASE_OFFSET))(handle);
		}

		static ::System::IntPtr CFRunLoopGetMain()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_CFRUNLOOPGETMAIN_OFFSET))();
		}

		static ::System::IntPtr SCNetworkReachabilityCreateWithAddress(::System::IntPtr allocator, ::System::Net::NetworkInformation::MacNetworkChange_sockaddr_in& sockaddr)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Net::NetworkInformation::MacNetworkChange_sockaddr_in&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYCREATEWITHADDRESS_OFFSET))(allocator, sockaddr);
		}

		static ::System::Boolean SCNetworkReachabilityGetFlags(::System::IntPtr reachability, ::System::Net::NetworkInformation::MacNetworkChange_NetworkReachabilityFlags& flags)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Net::NetworkInformation::MacNetworkChange_NetworkReachabilityFlags&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYGETFLAGS_OFFSET))(reachability, flags);
		}

		static ::System::Boolean SCNetworkReachabilitySetCallback(::System::IntPtr reachability, ::System::Net::NetworkInformation::MacNetworkChange_SCNetworkReachabilityCallback* callback, ::System::Net::NetworkInformation::MacNetworkChange_SCNetworkReachabilityContext& context)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Net::NetworkInformation::MacNetworkChange_SCNetworkReachabilityCallback*, ::System::Net::NetworkInformation::MacNetworkChange_SCNetworkReachabilityContext&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYSETCALLBACK_OFFSET))(reachability, callback, context);
		}

		static ::System::Boolean SCNetworkReachabilityScheduleWithRunLoop(::System::IntPtr reachability, ::System::IntPtr runLoop, ::System::IntPtr runLoopMode)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYSCHEDULEWITHRUNLOOP_OFFSET))(reachability, runLoop, runLoopMode);
		}

		static ::System::Boolean SCNetworkReachabilityUnscheduleFromRunLoop(::System::IntPtr reachability, ::System::IntPtr runLoop, ::System::IntPtr runLoopMode)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYUNSCHEDULEFROMRUNLOOP_OFFSET))(reachability, runLoop, runLoopMode);
		}

		::System::Void add_networkAddressChanged(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAddressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_ADD_NETWORKADDRESSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_networkAddressChanged(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAddressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_REMOVE_NETWORKADDRESSCHANGED_OFFSET))(this, value);
		}

		::System::Void add_networkAvailabilityChanged(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_ADD_NETWORKAVAILABILITYCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_networkAvailabilityChanged(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_REMOVE_NETWORKAVAILABILITYCHANGED_OFFSET))(this, value);
		}

		::System::Void add_NetworkAddressChanged_1(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAddressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_ADD_NETWORKADDRESSCHANGED_1_OFFSET))(this, value);
		}

		::System::Void remove_NetworkAddressChanged_1(::System::Net::NetworkInformation::NetworkAddressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAddressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_REMOVE_NETWORKADDRESSCHANGED_1_OFFSET))(this, value);
		}

		::System::Void add_NetworkAvailabilityChanged_1(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_ADD_NETWORKAVAILABILITYCHANGED_1_OFFSET))(this, value);
		}

		::System::Void remove_NetworkAvailabilityChanged_1(::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::NetworkAvailabilityChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_REMOVE_NETWORKAVAILABILITYCHANGED_1_OFFSET))(this, value);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_HasRegisteredEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_GET_HASREGISTEREDEVENTS_OFFSET))(this);
		}

		::System::Boolean LoadRunLoopMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_LOADRUNLOOPMODE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_DISPOSE_OFFSET))(this);
		}

		static ::System::Void HandleCallback(::System::IntPtr reachability, ::System::Net::NetworkInformation::MacNetworkChange_NetworkReachabilityFlags flags, ::System::IntPtr info)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Net::NetworkInformation::MacNetworkChange_NetworkReachabilityFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_HANDLECALLBACK_OFFSET))(reachability, flags, info);
		}
	};
}
