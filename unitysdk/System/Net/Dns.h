#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPHostEntry; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_DNS_BEGINGETHOSTENTRY_OFFSET UNITYSDK_OFFSET(0x1E96CCD0)
#define SYSTEM_NET_DNS_ENDGETHOSTENTRY_OFFSET UNITYSDK_OFFSET(0x1E96CE70)
#define SYSTEM_NET_DNS_ERROR_11001_OFFSET UNITYSDK_OFFSET(0x1E96D110)
#define SYSTEM_NET_DNS_GETHOSTADDRESSES_OFFSET UNITYSDK_OFFSET(0x1E96E100)
#define SYSTEM_NET_DNS_GETHOSTBYADDRESSFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1E96D760)
#define SYSTEM_NET_DNS_GETHOSTBYADDR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E96D0F0)
#define SYSTEM_NET_DNS_GETHOSTBYNAME_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E96D0E0)
#define SYSTEM_NET_DNS_GETHOSTBYNAME_OFFSET UNITYSDK_OFFSET(0x1E96DC00)
#define SYSTEM_NET_DNS_GETHOSTENTRYASYNC_OFFSET UNITYSDK_OFFSET(0x1E96E3B0)
#define SYSTEM_NET_DNS_GETHOSTENTRY_1_OFFSET UNITYSDK_OFFSET(0x1E96DB80)
#define SYSTEM_NET_DNS_GETHOSTENTRY_OFFSET UNITYSDK_OFFSET(0x1E96D940)
#define SYSTEM_NET_DNS_GETHOSTNAME_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E96D100)
#define SYSTEM_NET_DNS_GETHOSTNAME_OFFSET UNITYSDK_OFFSET(0x1E96E320)
#define SYSTEM_NET_DNS_HOSTENT_TO_IPHOSTENTRY_OFFSET UNITYSDK_OFFSET(0x1E96D180)

namespace System::Net
{
	inline static constexpr unsigned int Dns_TypeDefinitionIndex = 2832;

	class Dns : public ::System::Object
	{
	public:
		static ::System::IAsyncResult* BeginGetHostEntry(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_BEGINGETHOSTENTRY_OFFSET))(a1, a2, a3);
		}

		static ::System::Net::IPHostEntry* EndGetHostEntry(::System::IAsyncResult* a1)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_ENDGETHOSTENTRY_OFFSET))(a1);
		}

		static ::System::Boolean GetHostByName_internal(::System::String* a1, ::System::String*& a2, ::Il2CppArray<::System::String*>*& a3, ::Il2CppArray<::System::String*>*& a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::String*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYNAME_INTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GetHostByAddr_internal(::System::String* a1, ::System::String*& a2, ::Il2CppArray<::System::String*>*& a3, ::Il2CppArray<::System::String*>*& a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::String*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYADDR_INTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GetHostName_internal(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTNAME_INTERNAL_OFFSET))(a1);
		}

		static ::System::Void Error_11001(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_ERROR_11001_OFFSET))(a1);
		}

		static ::System::Net::IPHostEntry* hostent_to_IPHostEntry(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_HOSTENT_TO_IPHOSTENTRY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Net::IPHostEntry* GetHostByAddressFromString(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYADDRESSFROMSTRING_OFFSET))(a1, a2);
		}

		static ::System::Net::IPHostEntry* GetHostEntry(::System::String* a1)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRY_OFFSET))(a1);
		}

		static ::System::Net::IPHostEntry* GetHostEntry_1(::System::Net::IPAddress* a1)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRY_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Net::IPAddress*>* GetHostAddresses(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Net::IPAddress*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTADDRESSES_OFFSET))(a1);
		}

		static ::System::Net::IPHostEntry* GetHostByName(::System::String* a1)
		{
			return ((::System::Net::IPHostEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYNAME_OFFSET))(a1);
		}

		static ::System::String* GetHostName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTNAME_OFFSET))();
		}

		static ::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>* GetHostEntryAsync(::System::String* a1)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYASYNC_OFFSET))(a1);
		}
	};
}
