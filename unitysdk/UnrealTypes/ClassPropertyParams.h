#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/ObjectPropertyParams.h"

namespace UnrealTypes { class Class; }

#define UNREALTYPES_CLASSPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD99660)

namespace UnrealTypes
{
	inline static constexpr unsigned int ClassPropertyParams_TypeDefinitionIndex = 25257;

	class ClassPropertyParams : public ::UnrealTypes::ObjectPropertyParams
	{
	public:
		::UnrealTypes::Class* MetaClass; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASSPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
