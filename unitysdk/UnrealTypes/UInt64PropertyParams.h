#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/GenericPropertyParams.h"

#define UNREALTYPES_UINT64PROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAB060)

namespace UnrealTypes
{
	inline static constexpr unsigned int UInt64PropertyParams_TypeDefinitionIndex = 25251;

	class UInt64PropertyParams : public ::UnrealTypes::GenericPropertyParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT64PROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
