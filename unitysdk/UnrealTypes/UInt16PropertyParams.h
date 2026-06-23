#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/GenericPropertyParams.h"

#define UNREALTYPES_UINT16PROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BE570)

namespace UnrealTypes
{
	inline static constexpr unsigned int UInt16PropertyParams_TypeDefinitionIndex = 27739;

	class UInt16PropertyParams : public ::UnrealTypes::GenericPropertyParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT16PROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
