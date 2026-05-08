#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElement.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Configuration { class ConfigurationPropertyCollection; }

#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1A100340)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A1003C0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A100400)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1A100380)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A100440)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1002C0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A100300)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A100280)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WebRequestModuleElement_TypeDefinitionIndex = 4149;

	class WebRequestModuleElement : public ::System::Configuration::ConfigurationElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* prefix, ::System::String* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT__CTOR_1_OFFSET))(this, prefix, type);
		}

		::System::Void _ctor_2(::System::String* prefix, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT__CTOR_2_OFFSET))(this, prefix, type);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_PREFIX_OFFSET))(this);
		}

		::System::Void set_Prefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_SET_PREFIX_OFFSET))(this, value);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return ((::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENT_SET_TYPE_OFFSET))(this, value);
		}
	};
}
