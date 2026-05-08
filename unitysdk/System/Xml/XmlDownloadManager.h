#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class Hashtable; }
namespace System::IO { class Stream; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net::Cache { class RequestCachePolicy; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x1B2B4D80)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAM_OFFSET UNITYSDK_OFFSET(0x1B2B4390)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x1B2B4B10)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x1B2B41D0)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B2B49B0)
#define SYSTEM_XML_XMLDOWNLOADMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B4E80)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDownloadManager_TypeDefinitionIndex = 1814;

	class XmlDownloadManager : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* connections; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER__CTOR_OFFSET))(this);
		}

		::System::IO::Stream* GetStream(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAM_OFFSET))(this, uri, credentials, proxy, cachePolicy);
		}

		::System::IO::Stream* GetNonFileStream(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAM_OFFSET))(this, uri, credentials, proxy, cachePolicy);
		}

		::System::Void Remove(::System::String* host)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_REMOVE_OFFSET))(this, host);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetStreamAsync(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy)
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID, ::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAMASYNC_OFFSET))(this, uri, credentials, proxy, cachePolicy);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetNonFileStreamAsync(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy)
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID, ::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAMASYNC_OFFSET))(this, uri, credentials, proxy, cachePolicy);
		}
	};
}
