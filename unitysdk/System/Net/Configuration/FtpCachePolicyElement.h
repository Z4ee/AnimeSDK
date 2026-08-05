#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Net/Cache/RequestCacheLevel.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_DESERIALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x1D6A4DC0)
#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_GET_POLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x1D6A4D00)
#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D6A4D80)
#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x1D6A4E00)
#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_SET_POLICYLEVEL_OFFSET UNITYSDK_OFFSET(0x1D6A4D40)
#define SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4CC0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int FtpCachePolicyElement_TypeDefinitionIndex = 4128;

	class FtpCachePolicyElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT__CTOR_OFFSET))(this);
		}

		::System::Net::Cache::RequestCacheLevel get_PolicyLevel()
		{
			return ((::System::Net::Cache::RequestCacheLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_GET_POLICYLEVEL_OFFSET))(this);
		}

		::System::Void set_PolicyLevel(::System::Net::Cache::RequestCacheLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::RequestCacheLevel))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_SET_POLICYLEVEL_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void DeserializeElement(::System::Xml::XmlReader* reader, ::System::Boolean serializeCollectionKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_DESERIALIZEELEMENT_OFFSET))(this, reader, serializeCollectionKey);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* parentElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Configuration::ConfigurationElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_FTPCACHEPOLICYELEMENT_RESET_OFFSET))(this, parentElement);
		}
	};
}
