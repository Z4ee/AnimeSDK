#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/GenericPropertyParams.h"

#define UNREALTYPES_INT64PROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E38FE50)

namespace UnrealTypes
{
	inline static constexpr unsigned int Int64PropertyParams_TypeDefinitionIndex = 28340;

	class Int64PropertyParams : public ::UnrealTypes::GenericPropertyParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_INT64PROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
