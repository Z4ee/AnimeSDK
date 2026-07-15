#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlResolver.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Uri; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net::Cache { class RequestCachePolicy; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }
namespace System::Xml { class XmlDownloadManager; }

#define SYSTEM_XML_XMLURLRESOLVER_GETENTITYASYNC_OFFSET UNITYSDK_OFFSET(0x1C790050)
#define SYSTEM_XML_XMLURLRESOLVER_GETENTITY_OFFSET UNITYSDK_OFFSET(0x1C78FEA0)
#define SYSTEM_XML_XMLURLRESOLVER_GET_DOWNLOADMANAGER_OFFSET UNITYSDK_OFFSET(0x1C78FDD0)
#define SYSTEM_XML_XMLURLRESOLVER_RESOLVEURI_OFFSET UNITYSDK_OFFSET(0x1C790040)
#define SYSTEM_XML_XMLURLRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C78FE90)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUrlResolver_TypeDefinitionIndex = 1963;

	class XmlUrlResolver : public ::System::Xml::XmlResolver
	{
	public:
		static ::System::Object** StaticGet_s_DownloadManager()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(XmlUrlResolver_TypeDefinitionIndex)->GetStaticField(0x27CB0);
		}
		::System::Net::ICredentials* _credentials; // 0x10
		::System::Net::IWebProxy* _proxy; // 0x18
		::System::Net::Cache::RequestCachePolicy* _cachePolicy; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Xml::XmlDownloadManager* get_DownloadManager()
		{
			return ((::System::Xml::XmlDownloadManager*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER_GET_DOWNLOADMANAGER_OFFSET))();
		}

		::System::Object* GetEntity(::System::Uri* a1, ::System::String* a2, ::System::Type* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER_GETENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Uri* ResolveUri(::System::Uri* a1, ::System::String* a2)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER_RESOLVEURI_OFFSET))(this, a1, a2);
		}

		::System::Threading::Tasks::Task_1<::System::Object*>* GetEntityAsync(::System::Uri* a1, ::System::String* a2, ::System::Type* a3)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Object*>*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER_GETENTITYASYNC_OFFSET))(this, a1, a2, a3);
		}
	};
}
