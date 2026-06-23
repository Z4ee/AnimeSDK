#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class EventHandler; }
namespace System { class String; }
namespace System::Collections { class Queue; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class ServicePoint; }
namespace System::Net { class WebConnection; }
namespace System::Net { class WebConnectionGroup_ConnectionState; }

#define SYSTEM_NET_WEBCONNECTIONGROUP_ADD_CONNECTIONCLOSED_OFFSET UNITYSDK_OFFSET(0x1CED76F0)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CLOSE_OFFSET UNITYSDK_OFFSET(0x1CED7810)
#define SYSTEM_NET_WEBCONNECTIONGROUP_CREATEORREUSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1CED7BF0)
#define SYSTEM_NET_WEBCONNECTIONGROUP_FINDIDLECONNECTION_OFFSET UNITYSDK_OFFSET(0x1CED8110)
#define SYSTEM_NET_WEBCONNECTIONGROUP_GETCONNECTION_OFFSET UNITYSDK_OFFSET(0x1CED7B10)
#define SYSTEM_NET_WEBCONNECTIONGROUP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CED8220)
#define SYSTEM_NET_WEBCONNECTIONGROUP_GET_QUEUE_OFFSET UNITYSDK_OFFSET(0x1CED8230)
#define SYSTEM_NET_WEBCONNECTIONGROUP_ONCONNECTIONCLOSED_OFFSET UNITYSDK_OFFSET(0x1CED77F0)
#define SYSTEM_NET_WEBCONNECTIONGROUP_PREPARESHARINGNTLM_OFFSET UNITYSDK_OFFSET(0x1CED7DC0)
#define SYSTEM_NET_WEBCONNECTIONGROUP_REMOVE_CONNECTIONCLOSED_OFFSET UNITYSDK_OFFSET(0x1CED7770)
#define SYSTEM_NET_WEBCONNECTIONGROUP_TRYRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CED8240)
#define SYSTEM_NET_WEBCONNECTIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED7640)

namespace System::Net
{
	inline static constexpr unsigned int WebConnectionGroup_TypeDefinitionIndex = 3568;

	class WebConnectionGroup : public ::System::Object
	{
	public:
		::System::EventHandler* ConnectionClosed; // 0x10
		::System::String* name; // 0x18
		::System::Collections::Queue* queue; // 0x20
		::System::Net::ServicePoint* sPoint; // 0x28
		::System::Collections::Generic::LinkedList_1<::System::Net::WebConnectionGroup_ConnectionState*>* connections; // 0x30
		::System::Boolean closing; // 0x38

		::System::Void _ctor(::System::Net::ServicePoint* sPoint, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ServicePoint*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP__CTOR_OFFSET))(this, sPoint, name);
		}

		::System::Void add_ConnectionClosed(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_ADD_CONNECTIONCLOSED_OFFSET))(this, value);
		}

		::System::Void remove_ConnectionClosed(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_REMOVE_CONNECTIONCLOSED_OFFSET))(this, value);
		}

		::System::Void OnConnectionClosed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_ONCONNECTIONCLOSED_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CLOSE_OFFSET))(this);
		}

		::System::Net::WebConnection* GetConnection(::System::Net::HttpWebRequest* request, ::System::Boolean& created)
		{
			return ((::System::Net::WebConnection*(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_GETCONNECTION_OFFSET))(this, request, created);
		}

		static ::System::Void PrepareSharingNtlm(::System::Net::WebConnection* cnc, ::System::Net::HttpWebRequest* request)
		{
			return ((::System::Void(*)(::System::Net::WebConnection*, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_PREPARESHARINGNTLM_OFFSET))(cnc, request);
		}

		::System::Net::WebConnectionGroup_ConnectionState* FindIdleConnection()
		{
			return ((::System::Net::WebConnectionGroup_ConnectionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_FINDIDLECONNECTION_OFFSET))(this);
		}

		::System::Net::WebConnection* CreateOrReuseConnection(::System::Net::HttpWebRequest* request, ::System::Boolean& created)
		{
			return ((::System::Net::WebConnection*(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_CREATEORREUSECONNECTION_OFFSET))(this, request, created);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Queue* get_Queue()
		{
			return ((::System::Collections::Queue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_GET_QUEUE_OFFSET))(this);
		}

		::System::Boolean TryRecycle(::System::TimeSpan maxIdleTime, ::System::DateTime& idleSince)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONGROUP_TRYRECYCLE_OFFSET))(this, maxIdleTime, idleSince);
		}
	};
}
