#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/GenericPropertyParams.h"

#define UNREALTYPES_NAMEPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD98210)

namespace UnrealTypes
{
	inline static constexpr unsigned int NamePropertyParams_TypeDefinitionIndex = 25255;

	class NamePropertyParams : public ::UnrealTypes::GenericPropertyParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_NAMEPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
