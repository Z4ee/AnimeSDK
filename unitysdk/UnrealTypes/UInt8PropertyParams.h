#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/GenericPropertyParams.h"

#define UNREALTYPES_UINT8PROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3945B0)

namespace UnrealTypes
{
	inline static constexpr unsigned int UInt8PropertyParams_TypeDefinitionIndex = 28341;

	class UInt8PropertyParams : public ::UnrealTypes::GenericPropertyParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT8PROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
