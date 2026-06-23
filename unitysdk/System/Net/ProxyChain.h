#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class HttpAbortDelegate; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class ProxyChain_ProxyEnumerator; }
namespace System::Net { class WebException; }

#define SYSTEM_NET_PROXYCHAIN_ABORT_OFFSET UNITYSDK_OFFSET(0x1B1CFA00)
#define SYSTEM_NET_PROXYCHAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1CF980)
#define SYSTEM_NET_PROXYCHAIN_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B1CF8B0)
#define SYSTEM_NET_PROXYCHAIN_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x1B1CF9F0)
#define SYSTEM_NET_PROXYCHAIN_GET_ENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B1CF990)
#define SYSTEM_NET_PROXYCHAIN_GET_HTTPABORTDELEGATE_OFFSET UNITYSDK_OFFSET(0x1B1CFA30)
#define SYSTEM_NET_PROXYCHAIN_HTTPABORT_OFFSET UNITYSDK_OFFSET(0x1B1CFA10)
#define SYSTEM_NET_PROXYCHAIN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B1CF920)
#define SYSTEM_NET_PROXYCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1CF820)

namespace System::Net
{
	inline static constexpr unsigned int ProxyChain_TypeDefinitionIndex = 3385;

	class ProxyChain : public ::System::Object
	{
	public:
		::System::Uri* m_Destination; // 0x10
		::System::Net::ProxyChain_ProxyEnumerator* m_MainEnumerator; // 0x18
		::System::Net::HttpAbortDelegate* m_HttpAbortDelegate; // 0x20
		::System::Collections::Generic::List_1<::System::Uri*>* m_Cache; // 0x28
		::System::Boolean m_CacheComplete; // 0x30

		::System::Void _ctor(::System::Uri* destination)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN__CTOR_OFFSET))(this, destination);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Uri*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Uri*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Uri*>* get_Enumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Uri*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_GET_ENUMERATOR_OFFSET))(this);
		}

		::System::Uri* get_Destination()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_GET_DESTINATION_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_ABORT_OFFSET))(this);
		}

		::System::Boolean HttpAbort(::System::Net::HttpWebRequest* request, ::System::Net::WebException* webException)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Net::WebException*))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_HTTPABORT_OFFSET))(this, request, webException);
		}

		::System::Net::HttpAbortDelegate* get_HttpAbortDelegate()
		{
			return ((::System::Net::HttpAbortDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROXYCHAIN_GET_HTTPABORTDELEGATE_OFFSET))(this);
		}
	};
}
