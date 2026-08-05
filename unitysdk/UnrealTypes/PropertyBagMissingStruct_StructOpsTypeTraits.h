#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x1E392660)
#define UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E392640)

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyBagMissingStruct_StructOpsTypeTraits_TypeDefinitionIndex = 28413;

	class PropertyBagMissingStruct_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
