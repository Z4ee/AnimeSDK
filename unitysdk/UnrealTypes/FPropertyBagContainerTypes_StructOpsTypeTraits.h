#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x1E38E730)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E38E710)

namespace UnrealTypes
{
	inline static constexpr unsigned int FPropertyBagContainerTypes_StructOpsTypeTraits_TypeDefinitionIndex = 28403;

	class FPropertyBagContainerTypes_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
