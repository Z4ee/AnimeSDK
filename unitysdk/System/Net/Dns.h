#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPHostEntry; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_DNS_BEGINGETHOSTENTRY_OFFSET UNITYSDK_OFFSET(0x1A1024D0)
#define SYSTEM_NET_DNS_ENDGETHOSTENTRY_OFFSET UNITYSDK_OFFSET(0x1A102670)
#define SYSTEM_NET_DNS_ERROR_11001_OFFSET UNITYSDK_OFFSET(0x1A1027E0)
#define SYSTEM_NET_DNS_GETHOSTADDRESSES_OFFSET UNITYSDK_OFFSET(0x1A1035E0)
#define SYSTEM_NET_DNS_GETHOSTBYADDRESSFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1A102CB0)
#define SYSTEM_NET_DNS_GETHOSTBYADDR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A1027C0)
#define SYSTEM_NET_DNS_GETHOSTBYNAME_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A1027B0)
#define SYSTEM_NET_DNS_GETHOSTBYNAME_OFFSET UNITYSDK_OFFSET(0x1A103050)
#define SYSTEM_NET_DNS_GETHOSTENTRYASYNC_OFFSET UNITYSDK_OFFSET(0x1A103860)
#define SYSTEM_NET_DNS_GETHOSTENTRY_1_OFFSET UNITYSDK_OFFSET(0x1A102FD0)
#define SYSTEM_NET_DNS_GETHOSTENTRY_OFFSET UNITYSDK_OFFSET(0x1A102E30)
#define SYSTEM_NET_DNS_GETHOSTNAME_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A1027D0)
#define SYSTEM_NET_DNS_GETHOSTNAME_OFFSET UNITYSDK_OFFSET(0x1A1037D0)
#define SYSTEM_NET_DNS_HOSTENT_TO_IPHOSTENTRY_OFFSET UNITYSDK_OFFSET(0x1A102850)

namespace System::Net
{
	inline static constexpr unsigned int Dns_TypeDefinitionIndex = 2821;

	class Dns : public ::System::Object
	{
	public:
		static ::System::IAsyncResult* BeginGetHostEntry(::System::String* hostNameOrAddress, ::System::AsyncCallback* requestCallback, ::System::Object* stateObject)
		{
			return ((::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_BEGINGETHOSTENTRY_OFFSET))(hostNameOrAddress, requestCallback, stateObject);
		}

		static ::System::Net::IPHostEntry* EndGetHostEntry(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_ENDGETHOSTENTRY_OFFSET))(asyncResult);
		}

		static ::System::Boolean GetHostByName_internal(::System::String* host, ::System::String*& h_name, ::Il2CppArray<::System::String*>*& h_aliases, ::Il2CppArray<::System::String*>*& h_addr_list, ::System::Int32 hint)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::String*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYNAME_INTERNAL_OFFSET))(host, h_name, h_aliases, h_addr_list, hint);
		}

		static ::System::Boolean GetHostByAddr_internal(::System::String* addr, ::System::String*& h_name, ::Il2CppArray<::System::String*>*& h_aliases, ::Il2CppArray<::System::String*>*& h_addr_list, ::System::Int32 hint)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::String*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYADDR_INTERNAL_OFFSET))(addr, h_name, h_aliases, h_addr_list, hint);
		}

		static ::System::Boolean GetHostName_internal(::System::String*& h_name)
		{
			return ((::System::Boolean(*)(::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTNAME_INTERNAL_OFFSET))(h_name);
		}

		static ::System::Void Error_11001(::System::String* hostName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_ERROR_11001_OFFSET))(hostName);
		}

		static ::System::Net::IPHostEntry* hostent_to_IPHostEntry(::System::String* originalHostName, ::System::String* h_name, ::Il2CppArray<::System::String*>* h_aliases, ::Il2CppArray<::System::String*>* h_addrlist)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_HOSTENT_TO_IPHOSTENTRY_OFFSET))(originalHostName, h_name, h_aliases, h_addrlist);
		}

		static ::System::Net::IPHostEntry* GetHostByAddressFromString(::System::String* address, ::System::Boolean parse)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYADDRESSFROMSTRING_OFFSET))(address, parse);
		}

		static ::System::Net::IPHostEntry* GetHostEntry(::System::String* hostNameOrAddress)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRY_OFFSET))(hostNameOrAddress);
		}

		static ::System::Net::IPHostEntry* GetHostEntry_1(::System::Net::IPAddress* address)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRY_1_OFFSET))(address);
		}

		static ::Il2CppArray<::System::Net::IPAddress*>* GetHostAddresses(::System::String* hostNameOrAddress)
		{
			return ((::Il2CppArray<::System::Net::IPAddress*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTADDRESSES_OFFSET))(hostNameOrAddress);
		}

		static ::System::Net::IPHostEntry* GetHostByName(::System::String* hostName)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYNAME_OFFSET))(hostName);
		}

		static ::System::String* GetHostName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTNAME_OFFSET))();
		}

		static ::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>* GetHostEntryAsync(::System::String* hostNameOrAddress)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYASYNC_OFFSET))(hostNameOrAddress);
		}
	};
}
