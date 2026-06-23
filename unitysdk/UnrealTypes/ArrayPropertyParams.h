#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyParamsBase.h"

#define UNREALTYPES_ARRAYPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AC580)

namespace UnrealTypes
{
	inline static constexpr unsigned int ArrayPropertyParams_TypeDefinitionIndex = 27750;

	class ArrayPropertyParams : public ::UnrealTypes::PropertyParamsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
