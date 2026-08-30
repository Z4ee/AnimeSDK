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

#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x183D4500)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAM_OFFSET UNITYSDK_OFFSET(0x183D36A0)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x183D4280)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x183D3500)
#define SYSTEM_XML_XMLDOWNLOADMANAGER_REMOVE_OFFSET UNITYSDK_OFFSET(0x183D4050)
#define SYSTEM_XML_XMLDOWNLOADMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x183D4600)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDownloadManager_TypeDefinitionIndex = 1944;

	class XmlDownloadManager : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* connections; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER__CTOR_OFFSET))(this);
		}

		::System::IO::Stream* GetStream(::System::Uri* a1, ::System::Net::ICredentials* a2, ::System::Net::IWebProxy* a3, ::System::Net::Cache::RequestCachePolicy* a4)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IO::Stream* GetNonFileStream(::System::Uri* a1, ::System::Net::ICredentials* a2, ::System::Net::IWebProxy* a3, ::System::Net::Cache::RequestCachePolicy* a4)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Remove(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_REMOVE_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetStreamAsync(::System::Uri* a1, ::System::Net::ICredentials* a2, ::System::Net::IWebProxy* a3, ::System::Net::Cache::RequestCachePolicy* a4)
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID, ::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETSTREAMASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetNonFileStreamAsync(::System::Uri* a1, ::System::Net::ICredentials* a2, ::System::Net::IWebProxy* a3, ::System::Net::Cache::RequestCachePolicy* a4)
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID, ::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER_GETNONFILESTREAMASYNC_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
