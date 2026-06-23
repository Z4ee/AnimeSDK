#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/GenericPropertyParams.h"

#define UNREALTYPES_INT32PROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B6740)

namespace UnrealTypes
{
	inline static constexpr unsigned int Int32PropertyParams_TypeDefinitionIndex = 27736;

	class Int32PropertyParams : public ::UnrealTypes::GenericPropertyParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_INT32PROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
