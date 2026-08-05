#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/GenericPropertyParams.h"

#define UNREALTYPES_UINT32PROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E396550)

namespace UnrealTypes
{
	inline static constexpr unsigned int UInt32PropertyParams_TypeDefinitionIndex = 28343;

	class UInt32PropertyParams : public ::UnrealTypes::GenericPropertyParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT32PROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
