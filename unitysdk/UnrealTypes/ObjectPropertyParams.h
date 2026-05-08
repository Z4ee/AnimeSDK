#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyParamsBase.h"

namespace UnrealTypes { class Class; }

#define UNREALTYPES_OBJECTPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD99670)

namespace UnrealTypes
{
	inline static constexpr unsigned int ObjectPropertyParams_TypeDefinitionIndex = 25256;

	class ObjectPropertyParams : public ::UnrealTypes::PropertyParamsBase
	{
	public:
		::UnrealTypes::Class* Class; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
