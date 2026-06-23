#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/DescriptionAttribute.h"

namespace System { class String; }

#define SYSTEM_SRDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C02F450)
#define SYSTEM_SRDESCRIPTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C02F3F0)

namespace System
{
	inline static constexpr unsigned int SRDescriptionAttribute_TypeDefinitionIndex = 2703;

	class SRDescriptionAttribute : public ::System::ComponentModel::DescriptionAttribute
	{
	public:
		::System::Boolean isReplaced; // 0x18

		::System::Void _ctor(::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SRDESCRIPTIONATTRIBUTE__CTOR_OFFSET))(this, description);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SRDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(this);
		}
	};
}
