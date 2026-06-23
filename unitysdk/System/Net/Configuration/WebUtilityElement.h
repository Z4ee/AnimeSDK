#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"
#include "unitysdk/System/Net/Configuration/UnicodeDecodingConformance.h"
#include "unitysdk/System/Net/Configuration/UnicodeEncodingConformance.h"

namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C074D00)
#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_UNICODEDECODINGCONFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C074D40)
#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_UNICODEENCODINGCONFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C074DC0)
#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_SET_UNICODEDECODINGCONFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C074D80)
#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_SET_UNICODEENCODINGCONFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C074E00)
#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C074CC0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WebUtilityElement_TypeDefinitionIndex = 4145;

	class WebUtilityElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT__CTOR_OFFSET))(this);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Net::Configuration::UnicodeDecodingConformance get_UnicodeDecodingConformance()
		{
			return ((::System::Net::Configuration::UnicodeDecodingConformance(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_UNICODEDECODINGCONFORMANCE_OFFSET))(this);
		}

		::System::Void set_UnicodeDecodingConformance(::System::Net::Configuration::UnicodeDecodingConformance value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::UnicodeDecodingConformance))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_SET_UNICODEDECODINGCONFORMANCE_OFFSET))(this, value);
		}

		::System::Net::Configuration::UnicodeEncodingConformance get_UnicodeEncodingConformance()
		{
			return ((::System::Net::Configuration::UnicodeEncodingConformance(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_UNICODEENCODINGCONFORMANCE_OFFSET))(this);
		}

		::System::Void set_UnicodeEncodingConformance(::System::Net::Configuration::UnicodeEncodingConformance value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Configuration::UnicodeEncodingConformance))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_SET_UNICODEENCODINGCONFORMANCE_OFFSET))(this, value);
		}
	};
}
