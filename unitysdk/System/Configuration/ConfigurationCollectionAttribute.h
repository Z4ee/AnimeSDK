#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F014770)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationCollectionAttribute_TypeDefinitionIndex = 2340;

	class ConfigurationCollectionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
