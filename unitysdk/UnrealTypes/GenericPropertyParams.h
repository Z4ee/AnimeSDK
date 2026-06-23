#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyParamsBase.h"

#define UNREALTYPES_GENERICPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AE7A0)

namespace UnrealTypes
{
	inline static constexpr unsigned int GenericPropertyParams_TypeDefinitionIndex = 27733;

	class GenericPropertyParams : public ::UnrealTypes::PropertyParamsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_GENERICPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
