#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/Object.h"

#define UNREALTYPES_PROPERTYBAGMISSINGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E392470)

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyBagMissingObject_TypeDefinitionIndex = 28414;

	class PropertyBagMissingObject : public ::UnrealTypes::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGOBJECT__CTOR_OFFSET))(this);
		}
	};
}
