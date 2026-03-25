#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1847B2D0)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationCollectionAttribute_TypeDefinitionIndex = 2328;

	class ConfigurationCollectionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Type* itemType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONCOLLECTIONATTRIBUTE__CTOR_OFFSET))(this, itemType);
		}
	};
}
