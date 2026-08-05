#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyParamsBase.h"

namespace UnrealTypes { class ScriptStruct; }

#define UNREALTYPES_STRUCTPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E393650)

namespace UnrealTypes
{
	inline static constexpr unsigned int StructPropertyParams_TypeDefinitionIndex = 28351;

	class StructPropertyParams : public ::UnrealTypes::PropertyParamsBase
	{
	public:
		::UnrealTypes::ScriptStruct* ScriptStruct; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
