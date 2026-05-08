#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyParamsBase.h"

namespace UnrealTypes { class Enum; }

#define UNREALTYPES_ENUMPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD9BA90)

namespace UnrealTypes
{
	inline static constexpr unsigned int EnumPropertyParams_TypeDefinitionIndex = 25259;

	class EnumPropertyParams : public ::UnrealTypes::PropertyParamsBase
	{
	public:
		::UnrealTypes::Enum* Enum; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
