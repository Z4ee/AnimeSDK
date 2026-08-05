#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyParamsBase.h"

#define UNREALTYPES_BOOLPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E382A50)

namespace UnrealTypes
{
	inline static constexpr unsigned int BoolPropertyParams_TypeDefinitionIndex = 28347;

	class BoolPropertyParams : public ::UnrealTypes::PropertyParamsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_BOOLPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
