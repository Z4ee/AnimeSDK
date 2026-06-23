#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Net/NetworkInformation/MacNetworkChange_NetworkReachabilityFlags.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C49E360)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C49E410)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C49DFD0)
#define SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49DFB0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MacNetworkChange_SCNetworkReachabilityCallback_TypeDefinitionIndex = 3801;

	class MacNetworkChange_SCNetworkReachabilityCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr target, ::System::Net::NetworkInformation::MacNetworkChange_NetworkReachabilityFlags flags, ::System::IntPtr info)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Net::NetworkInformation::MacNetworkChange_NetworkReachabilityFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYCALLBACK_INVOKE_OFFSET))(this, target, flags, info);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr target, ::System::Net::NetworkInformation::MacNetworkChange_NetworkReachabilityFlags flags, ::System::IntPtr info, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Net::NetworkInformation::MacNetworkChange_NetworkReachabilityFlags, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYCALLBACK_BEGININVOKE_OFFSET))(this, target, flags, info, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACNETWORKCHANGE_SCNETWORKREACHABILITYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
