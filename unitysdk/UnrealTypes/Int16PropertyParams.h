#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/GenericPropertyParams.h"

#define UNREALTYPES_INT16PROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA3150)

namespace UnrealTypes
{
	inline static constexpr unsigned int Int16PropertyParams_TypeDefinitionIndex = 25245;

	class Int16PropertyParams : public ::UnrealTypes::GenericPropertyParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_INT16PROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
