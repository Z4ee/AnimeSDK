#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_REFLECTION_ASSEMBLYCONFIGURATIONATTRIBUTE_GET_CONFIGURATION_OFFSET UNITYSDK_OFFSET(0x16368800)
#define SYSTEM_REFLECTION_ASSEMBLYCONFIGURATIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x163687F0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyConfigurationAttribute_TypeDefinitionIndex = 544;

	class AssemblyConfigurationAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_configuration; // 0x10

		::System::Void _ctor(::System::String* configuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYCONFIGURATIONATTRIBUTE__CTOR_OFFSET))(this, configuration);
		}

		::System::String* get_Configuration()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYCONFIGURATIONATTRIBUTE_GET_CONFIGURATION_OFFSET))(this);
		}
	};
}
