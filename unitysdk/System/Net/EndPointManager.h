#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Net { class EndPointListener; }
namespace System::Net { class HttpListener; }
namespace System::Net { class IPEndPoint; }

#define SYSTEM_NET_ENDPOINTMANAGER_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x19E32F90)
#define SYSTEM_NET_ENDPOINTMANAGER_ADDPREFIXINTERNAL_OFFSET UNITYSDK_OFFSET(0x19E339F0)
#define SYSTEM_NET_ENDPOINTMANAGER_ADDPREFIX_OFFSET UNITYSDK_OFFSET(0x19E33C80)
#define SYSTEM_NET_ENDPOINTMANAGER_GETEPLISTENER_OFFSET UNITYSDK_OFFSET(0x19E33DA0)
#define SYSTEM_NET_ENDPOINTMANAGER_REMOVEENDPOINT_OFFSET UNITYSDK_OFFSET(0x19E34290)
#define SYSTEM_NET_ENDPOINTMANAGER_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x19E344E0)
#define SYSTEM_NET_ENDPOINTMANAGER_REMOVEPREFIXINTERNAL_OFFSET UNITYSDK_OFFSET(0x19E34900)
#define SYSTEM_NET_ENDPOINTMANAGER_REMOVEPREFIX_OFFSET UNITYSDK_OFFSET(0x19E33B60)
#define SYSTEM_NET_ENDPOINTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E34A10)
#define SYSTEM_NET_ENDPOINTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E32F80)

namespace System::Net
{
	inline static constexpr unsigned int EndPointManager_TypeDefinitionIndex = 3509;

	class EndPointManager : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_ip_to_endpoints()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(EndPointManager_TypeDefinitionIndex)->GetStaticField(0x35B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void AddListener(::System::Net::HttpListener* listener)
		{
			return ((::System::Void(*)(::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_ADDLISTENER_OFFSET))(listener);
		}

		static ::System::Void AddPrefix(::System::String* prefix, ::System::Net::HttpListener* listener)
		{
			return ((::System::Void(*)(::System::String*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_ADDPREFIX_OFFSET))(prefix, listener);
		}

		static ::System::Void AddPrefixInternal(::System::String* p, ::System::Net::HttpListener* listener)
		{
			return ((::System::Void(*)(::System::String*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_ADDPREFIXINTERNAL_OFFSET))(p, listener);
		}

		static ::System::Net::EndPointListener* GetEPListener(::System::String* host, ::System::Int32 port, ::System::Net::HttpListener* listener, ::System::Boolean secure)
		{
			return ((::System::Net::EndPointListener*(*)(::System::String*, ::System::Int32, ::System::Net::HttpListener*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_GETEPLISTENER_OFFSET))(host, port, listener, secure);
		}

		static ::System::Void RemoveEndPoint(::System::Net::EndPointListener* epl, ::System::Net::IPEndPoint* ep)
		{
			return ((::System::Void(*)(::System::Net::EndPointListener*, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_REMOVEENDPOINT_OFFSET))(epl, ep);
		}

		static ::System::Void RemoveListener(::System::Net::HttpListener* listener)
		{
			return ((::System::Void(*)(::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_REMOVELISTENER_OFFSET))(listener);
		}

		static ::System::Void RemovePrefix(::System::String* prefix, ::System::Net::HttpListener* listener)
		{
			return ((::System::Void(*)(::System::String*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_REMOVEPREFIX_OFFSET))(prefix, listener);
		}

		static ::System::Void RemovePrefixInternal(::System::String* prefix, ::System::Net::HttpListener* listener)
		{
			return ((::System::Void(*)(::System::String*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_REMOVEPREFIXINTERNAL_OFFSET))(prefix, listener);
		}
	};
}
