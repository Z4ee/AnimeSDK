#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Specialized { class NameValueCollection; }

#define SYSTEM_CONFIGURATION_PROVIDER_PROVIDERBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC6BE70)
#define SYSTEM_CONFIGURATION_PROVIDER_PROVIDERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6BE30)

namespace System::Configuration::Provider
{
	inline static constexpr unsigned int ProviderBase_TypeDefinitionIndex = 2515;

	class ProviderBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_PROVIDER_PROVIDERBASE__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::String* name, ::System::Collections::Specialized::NameValueCollection* config)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_PROVIDER_PROVIDERBASE_INITIALIZE_OFFSET))(this, name, config);
		}
	};
}
