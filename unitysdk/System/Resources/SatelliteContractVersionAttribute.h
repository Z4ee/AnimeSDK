#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8AAC30)

namespace System::Resources
{
	inline static constexpr unsigned int SatelliteContractVersionAttribute_TypeDefinitionIndex = 520;

	class SatelliteContractVersionAttribute : public ::System::Attribute
	{
	public:
		::System::String* _version; // 0x10

		::System::Void _ctor(::System::String* version)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_SATELLITECONTRACTVERSIONATTRIBUTE__CTOR_OFFSET))(this, version);
		}
	};
}
