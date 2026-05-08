#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/GenericPropertyParams.h"

#define UNREALTYPES_INT8PROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA32A0)

namespace UnrealTypes
{
	inline static constexpr unsigned int Int8PropertyParams_TypeDefinitionIndex = 25244;

	class Int8PropertyParams : public ::UnrealTypes::GenericPropertyParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_INT8PROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
