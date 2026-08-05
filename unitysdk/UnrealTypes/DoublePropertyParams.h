#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/GenericPropertyParams.h"

#define UNREALTYPES_DOUBLEPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E384C40)

namespace UnrealTypes
{
	inline static constexpr unsigned int DoublePropertyParams_TypeDefinitionIndex = 28346;

	class DoublePropertyParams : public ::UnrealTypes::GenericPropertyParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_DOUBLEPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
