#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/GenericPropertyParams.h"

#define UNREALTYPES_FLOATPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E382440)

namespace UnrealTypes
{
	inline static constexpr unsigned int FloatPropertyParams_TypeDefinitionIndex = 28345;

	class FloatPropertyParams : public ::UnrealTypes::GenericPropertyParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FLOATPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
