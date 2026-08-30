#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Configuration/ConfigurationElementCollection.h"

#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB42940)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WebRequestModuleElementCollection_TypeDefinitionIndex = 3089;

	class WebRequestModuleElementCollection : public ::System::Configuration::ConfigurationElementCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULEELEMENTCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
