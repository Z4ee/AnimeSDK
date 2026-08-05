#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/PropertyFlags.h"

#define UNREALTYPES_PROPERTYFLAGSEXTENSIONS_HASANYFLAGS_OFFSET UNITYSDK_OFFSET(0x1E390220)

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyFlagsExtensions_TypeDefinitionIndex = 28364;

	class PropertyFlagsExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean HasAnyFlags(::UnrealTypes::PropertyFlags value, ::UnrealTypes::PropertyFlags flag)
		{
			return ((::System::Boolean(*)(::UnrealTypes::PropertyFlags, ::UnrealTypes::PropertyFlags))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYFLAGSEXTENSIONS_HASANYFLAGS_OFFSET))(value, flag);
		}
	};
}
