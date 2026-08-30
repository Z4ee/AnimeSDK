#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Net { class EndPointListener; }
namespace System::Net { class HttpListener; }
namespace System::Net { class IPEndPoint; }

#define SYSTEM_NET_ENDPOINTMANAGER_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1B0175D0)
#define SYSTEM_NET_ENDPOINTMANAGER_ADDPREFIXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B018300)
#define SYSTEM_NET_ENDPOINTMANAGER_ADDPREFIX_OFFSET UNITYSDK_OFFSET(0x1B018590)
#define SYSTEM_NET_ENDPOINTMANAGER_GETEPLISTENER_OFFSET UNITYSDK_OFFSET(0x1B0186C0)
#define SYSTEM_NET_ENDPOINTMANAGER_REMOVEENDPOINT_OFFSET UNITYSDK_OFFSET(0x1B015EA0)
#define SYSTEM_NET_ENDPOINTMANAGER_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1B018DF0)
#define SYSTEM_NET_ENDPOINTMANAGER_REMOVEPREFIXINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B0192E0)
#define SYSTEM_NET_ENDPOINTMANAGER_REMOVEPREFIX_OFFSET UNITYSDK_OFFSET(0x1B018470)
#define SYSTEM_NET_ENDPOINTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0193F0)

namespace System::Net
{
	inline static constexpr unsigned int EndPointManager_TypeDefinitionIndex = 2836;

	class EndPointManager : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_ip_to_endpoints()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(EndPointManager_TypeDefinitionIndex)->GetStaticField(0x198C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void AddListener(::System::Net::HttpListener* a1)
		{
			return ((::System::Void(*)(::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_ADDLISTENER_OFFSET))(a1);
		}

		static ::System::Void AddPrefix(::System::String* a1, ::System::Net::HttpListener* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_ADDPREFIX_OFFSET))(a1, a2);
		}

		static ::System::Void AddPrefixInternal(::System::String* a1, ::System::Net::HttpListener* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_ADDPREFIXINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Net::EndPointListener* GetEPListener(::System::String* a1, ::System::Int32 a2, ::System::Net::HttpListener* a3, ::System::Boolean a4)
		{
			return ((::System::Net::EndPointListener*(*)(::System::String*, ::System::Int32, ::System::Net::HttpListener*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_GETEPLISTENER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RemoveEndPoint(::System::Net::EndPointListener* a1, ::System::Net::IPEndPoint* a2)
		{
			return ((::System::Void(*)(::System::Net::EndPointListener*, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_REMOVEENDPOINT_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveListener(::System::Net::HttpListener* a1)
		{
			return ((::System::Void(*)(::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_REMOVELISTENER_OFFSET))(a1);
		}

		static ::System::Void RemovePrefix(::System::String* a1, ::System::Net::HttpListener* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_REMOVEPREFIX_OFFSET))(a1, a2);
		}

		static ::System::Void RemovePrefixInternal(::System::String* a1, ::System::Net::HttpListener* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINTMANAGER_REMOVEPREFIXINTERNAL_OFFSET))(a1, a2);
		}
	};
}
