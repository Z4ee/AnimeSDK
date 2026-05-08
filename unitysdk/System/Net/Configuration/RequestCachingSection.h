#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationSection.h"
#include "unitysdk/System/Net/Cache/RequestCacheLevel.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Net::Configuration { class FtpCachePolicyElement; }
namespace System::Net::Configuration { class HttpCachePolicyElement; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_DESERIALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x1AA9BBB0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTFTPCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x1AA9B8F0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTHTTPCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x1AA9B930)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTPOLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x1AA9B970)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DISABLEALLCACHING_OFFSET UNITYSDK_OFFSET(0x1AA9B9F0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_ISPRIVATECACHE_OFFSET UNITYSDK_OFFSET(0x1AA9BA70)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AA9BAF0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_UNSPECIFIEDMAXIMUMAGE_OFFSET UNITYSDK_OFFSET(0x1AA9BB30)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AA9BBF0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_DEFAULTPOLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x1AA9B9B0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_DISABLEALLCACHING_OFFSET UNITYSDK_OFFSET(0x1AA9BA30)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_ISPRIVATECACHE_OFFSET UNITYSDK_OFFSET(0x1AA9BAB0)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_UNSPECIFIEDMAXIMUMAGE_OFFSET UNITYSDK_OFFSET(0x1AA9BB70)
#define SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA9B8B0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int RequestCachingSection_TypeDefinitionIndex = 4140;

	class RequestCachingSection : public ::System::Configuration::ConfigurationSection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION__CTOR_OFFSET))(this);
		}

		::System::Net::Configuration::FtpCachePolicyElement* get_DefaultFtpCachePolicy()
		{
			return ((::System::Net::Configuration::FtpCachePolicyElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTFTPCACHEPOLICY_OFFSET))(this);
		}

		::System::Net::Configuration::HttpCachePolicyElement* get_DefaultHttpCachePolicy()
		{
			return ((::System::Net::Configuration::HttpCachePolicyElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTHTTPCACHEPOLICY_OFFSET))(this);
		}

		::System::Net::Cache::RequestCacheLevel get_DefaultPolicyLevel()
		{
			return ((::System::Net::Cache::RequestCacheLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DEFAULTPOLICYLEVEL_OFFSET))(this);
		}

		::System::Void set_DefaultPolicyLevel(::System::Net::Cache::RequestCacheLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::RequestCacheLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_DEFAULTPOLICYLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_DisableAllCaching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_DISABLEALLCACHING_OFFSET))(this);
		}

		::System::Void set_DisableAllCaching(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_DISABLEALLCACHING_OFFSET))(this, value);
		}

		::System::Boolean get_IsPrivateCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_ISPRIVATECACHE_OFFSET))(this);
		}

		::System::Void set_IsPrivateCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_ISPRIVATECACHE_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_PROPERTIES_OFFSET))(this);
		}

		::System::TimeSpan get_UnspecifiedMaximumAge()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_GET_UNSPECIFIEDMAXIMUMAGE_OFFSET))(this);
		}

		::System::Void set_UnspecifiedMaximumAge(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_SET_UNSPECIFIEDMAXIMUMAGE_OFFSET))(this, value);
		}

		::System::Void DeserializeElement(::System::Xml::XmlReader* reader, ::System::Boolean serializeCollectionKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_DESERIALIZEELEMENT_OFFSET))(this, reader, serializeCollectionKey);
		}

		::System::Void PostDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_REQUESTCACHINGSECTION_POSTDESERIALIZE_OFFSET))(this);
		}
	};
}
