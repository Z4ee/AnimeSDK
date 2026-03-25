#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x163909C0)
#define SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16390950)

namespace System::Resources
{
	inline static constexpr unsigned int SatelliteContractVersionAttribute_TypeDefinitionIndex = 533;

	class SatelliteContractVersionAttribute : public ::System::Attribute
	{
	public:
		::System::String* _version; // 0x10

		::System::Void _ctor(::System::String* version)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE__CTOR_OFFSET))(this, version);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE_GET_VERSION_OFFSET))(this);
		}
	};
}
