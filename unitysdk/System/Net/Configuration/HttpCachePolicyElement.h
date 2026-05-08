#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Net/Cache/HttpRequestCacheLevel.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_DESERIALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x1921D9F0)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MAXIMUMAGE_OFFSET UNITYSDK_OFFSET(0x1921D7B0)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MAXIMUMSTALE_OFFSET UNITYSDK_OFFSET(0x1921D830)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MINIMUMFRESH_OFFSET UNITYSDK_OFFSET(0x1921D8B0)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_POLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x1921D930)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1921D9B0)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x1921DA30)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MAXIMUMAGE_OFFSET UNITYSDK_OFFSET(0x1921D7F0)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MAXIMUMSTALE_OFFSET UNITYSDK_OFFSET(0x1921D870)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MINIMUMFRESH_OFFSET UNITYSDK_OFFSET(0x1921D8F0)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_POLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x1921D970)
#define SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1921D770)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int HttpCachePolicyElement_TypeDefinitionIndex = 4130;

	class HttpCachePolicyElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT__CTOR_OFFSET))(this);
		}

		::System::TimeSpan get_MaximumAge()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MAXIMUMAGE_OFFSET))(this);
		}

		::System::Void set_MaximumAge(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MAXIMUMAGE_OFFSET))(this, value);
		}

		::System::TimeSpan get_MaximumStale()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MAXIMUMSTALE_OFFSET))(this);
		}

		::System::Void set_MaximumStale(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MAXIMUMSTALE_OFFSET))(this, value);
		}

		::System::TimeSpan get_MinimumFresh()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_MINIMUMFRESH_OFFSET))(this);
		}

		::System::Void set_MinimumFresh(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_MINIMUMFRESH_OFFSET))(this, value);
		}

		::System::Net::Cache::HttpRequestCacheLevel get_PolicyLevel()
		{
			return ((::System::Net::Cache::HttpRequestCacheLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_POLICYLEVEL_OFFSET))(this);
		}

		::System::Void set_PolicyLevel(::System::Net::Cache::HttpRequestCacheLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::HttpRequestCacheLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_SET_POLICYLEVEL_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void DeserializeElement(::System::Xml::XmlReader* reader, ::System::Boolean serializeCollectionKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_DESERIALIZEELEMENT_OFFSET))(this, reader, serializeCollectionKey);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* parentElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_HTTPCACHEPOLICYELEMENT_RESET_OFFSET))(this, parentElement);
		}
	};
}
